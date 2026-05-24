# ==============================
# PROJECT
# ==============================

NAME = fdf

# ==============================
# DIRECTORIES
# ==============================

SRC_DIR = src
OBJ_DIR = obj
INC_DIR = inc
LIBFT_DIR = libft

# ==============================
# FILES
# ==============================

SRCS = main.c parsing.c draw.c
OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o)

# ==============================
# COMPILER
# ==============================

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

LIBFT = $(LIBFT_DIR)/libft.a

# ==============================
# SYSTEM DETECTION
# ==============================

UNAME := $(shell uname)

ifeq ($(UNAME), Linux)
	MLX_DIR = ./mlx_linux
	MLX_FLAGS = -L$(MLX_DIR) -lmlx_Linux -L/usr/lib/X11 -lXext -lX11 -lm
else
	MLX_DIR = ./mlx_mac
	MLX_FLAGS = -L$(MLX_DIR) -lmlx -framework OpenGL -framework AppKit
endif
MLX = $(MLX_DIR)/libmlx.a

# ==============================
# INCLUDES
# ==============================

INCLUDES = -I$(INC_DIR) -I$(LIBFT_DIR) -I$(MLX_DIR)
CFLAGS += $(INCLUDES)

# ==============================
# RULES
# ==============================

all: $(NAME)

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(MLX):
	@make -C $(MLX_DIR)

$(NAME): $(LIBFT) $(MLX) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft $(MLX_FLAGS) -o $(NAME)
	@echo "FdF compiled successfully for $(UNAME)!"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/fdf.h
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ_DIR)
	@make -C $(LIBFT_DIR) clean
	@make -C $(MLX_DIR) clean
	@echo "Objects cleaned."

fclean: clean
	@$(RM) $(NAME)
	@make -C $(LIBFT_DIR) fclean
	@echo "Executable and libraries cleaned."

re: fclean all

.PHONY: all clean fclean re
