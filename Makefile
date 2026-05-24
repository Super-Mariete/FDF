# ==============================
# PROJECT
# ==============================

NAME = cub3D

# ==============================
# SOURCES
# ==============================

SOURCES =	main.c mlx_utils.c \
		$(addprefix parse/, parse_main.c add_scene_data.c read_data.c\
		checklist.c store_rgb_values.c map_lines_utils.c store_map.c\
		read_map_lines.c check_stored_map.c)\
		$(addprefix window_mlx_management/, background.c link_images.c)\
		$(addprefix clean/, clean_file_data.c clean_up.c destroy_mlx.c)

SRCS = $(addprefix sources/, $(SOURCES))
OBJECTS = $(SRCS:.c=.o)

# ==============================
# COMPILER
# ==============================

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

# ==============================
# LIBFT
# ==============================

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_FLAGS = -L $(LIBFT_DIR) -lft

# ==============================
# SYSTEM DETECTION
# ==============================

UNAME := $(shell uname)

# ==============================
# MLX CONFIG
# ==============================

ifeq ($(UNAME), Linux)

	MLX_DIR = ./mlx_linux
	MLX = $(MLX_DIR)/libmlx.a
	MLX_INCLUDE = -Imlx_linux

	MLX_FLAGS = -Lmlx_linux -lmlx_Linux -L/usr/lib/X11 -lXext -lX11 -lm

endif

ifeq ($(UNAME), Darwin)

	MLX_DIR = ./mlx_mac
	MLX = $(MLX_DIR)/libmlx.a
	MLX_INCLUDE = -Imlx_mac

	MLX_FLAGS = -Lmlx_mac -lmlx -framework OpenGL -framework AppKit

endif

# ==============================
# INCLUDES
# ==============================

INCLUDE = -I./include -I./libft $(MLX_INCLUDE)
CFLAGS += $(INCLUDE)

LIBS_FLAGS = $(LIBFT_FLAGS) $(MLX_FLAGS)

# ==============================
# RULES
# ==============================

all: $(NAME)

# ------------------------------
# LIBFT
# ------------------------------

$(LIBFT):
	@echo "Compiling Libft..."
	@make -s -C $(LIBFT_DIR)

# ------------------------------
# MLX
# ------------------------------

$(MLX):
	@if [ ! -d "$(MLX_DIR)" ]; then \
		echo "Error: MiniLibX folder not found -> $(MLX_DIR)"; \
		exit 1; \
	fi
	@echo "Compiling MLX for $(UNAME)..."
	@make -s -C $(MLX_DIR)

# ------------------------------
# BUILD
# ------------------------------

$(NAME): $(LIBFT) $(MLX) $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) $(LIBS_FLAGS) -o $(NAME)
	@echo "$(NAME) created for $(UNAME)"

# ------------------------------
# OBJECTS
# ------------------------------

sources/%.o: sources/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# ==============================
# CLEAN
# ==============================

clean:
	$(RM) $(OBJECTS)
	@make -s -C $(LIBFT_DIR) clean
	@if [ -d "$(MLX_DIR)" ]; then \
		make -s -C $(MLX_DIR) clean; \
	fi
	@echo "Objects removed"

compclean: all clean

fclean: clean
	$(RM) $(NAME)
	@make -s -C $(LIBFT_DIR) fclean
	@echo "Binary removed"

re: fclean all

.PHONY: all clean compclean fclean re
