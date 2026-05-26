# FdF - Fil de Fer

## Resumen
Este proyecto consiste en crear gráficamente la representación en relieve de un paisaje, uniendo puntos (coordenadas x, y, z) mediante líneas. El programa lee un archivo `.fdf` y renderiza una malla de alambre en perspectiva isométrica.
El objetivo es aprender sobre transformaciones matemáticas (rotación, proyección) y el uso de librerías gráficas de bajo nivel.

## Características
- Lectura de mapas con coordenadas de altura.
- Renderizado mediante el uso de la librería gráfica **MiniLibX**.
- Representación en perspectiva isométrica.
- Gestión eficiente de ventanas y eventos de teclado (ESC para cerrar).
- Uso de un buffer de imagen para un renderizado fluido sin parpadeos.

## Requisitos
- GCC o Clang.
- MiniLibX (incluida en el repositorio para macOS y Linux).
- X11 (para entornos Linux).

## Instalación
Para compilar el proyecto, utiliza el `Makefile` incluido:

```bash
make
```

Esto generará el ejecutable `fdf`.

## Uso
Ejecuta el programa pasando la ruta de un mapa como argumento:

```bash
./fdf maps/test.fdf
```

## Controles
- **ESC**: Cerrar la aplicación de forma segura.
- **Botón de cerrar (X)**: Cerrar la aplicación.

## Créditos
Proyecto realizado para la escuela 42.

Autor: mario