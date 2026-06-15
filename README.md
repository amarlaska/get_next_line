*Este proyecto ha sido creado como parte del currículo de 42 por <amarlasc>*

# get_next_line

## Descripción
El objetivo del proyecto es construir una función capaz de leer y devolver una línea de texto desde un file descriptor cada vez que se llama a la función.

Para conseguirlo, la función debe gestionar correctamente la lectura de archivos o de la entrada estándar, almacenando temporalmente la información leída hasta encontrar un salto de línea (`\n`) o llegar al final del archivo. Además, debe recordar los datos que aún no se han devuelto para poder continuar la lectura en llamadas posteriores.

Este proyecto sirve para comprender mejor conceptos fundamentales de C como la gestión de memoria dinámica, el uso de buffers, la lectura mediante file descriptors y la manipulación de cadenas de caracteres.


### Funciones principales

**char**	***get_next_line(int fd)**
Función principal del proyecto. Lee y devuelve la siguiente línea disponible del file descriptor recibido. Cada llamada devuelve una línea distinta hasta llegar al final del archivo.

**char** ***read_and_stash(int fd, char *stash)***
Lee datos desde el file descriptor y los almacena temporalmente en `stash` hasta encontrar un salto de línea o alcanzar el final de la lectura.

**char** ***extract_line(char *stash)***
Extrae y devuelve la primera línea completa almacenada en stash, incluyendo el salto de línea si existe.

**char** ***update_stash(char *stash)***
Actualiza el contenido de stash eliminando la línea que ya ha sido devuelta y conservando los datos restantes para futuras llamadas.

## Instrucciones

### Compilación

Para compilar la librería, ejecutar:

```bash
make
```
Este comando generará el archivo:
``bash
libft.a
``

#### Limpieza de archivos

Para limpiar archivos objeto:
make clean

Para eliminar la librería compilada:
make fclean

Para recompilar el proyecto desde cero:
```bash
make re
```

### Reglas del Makefile

El `Makefile` debe contener, como mínimo, las siguientes reglas:
- `$(NAME)`: genera la librería `get_next_line`
- `all`: compila el proyecto
- `clean`: elimina los archivos objeto
- `fclean`: elimina los archivos objeto y la libreria.
- `re`: recompila el proyecto desde cero

## Recursos
ME FALTAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
