*Este proyecto ha sido creado como parte del currículo de 42 por amarlasc*

# get_next_line

## Descripción
El objetivo del proyecto es construir una función capaz de leer y devolver una línea de texto desde un file descriptor cada vez que se llama a la función.

Para conseguirlo, la función debe gestionar correctamente la lectura de archivos o de la entrada estándar, almacenando temporalmente la información leída hasta encontrar un salto de línea (`a`) o llegar al final del archivo. Además, debe recordar los datos que aún no se han devuelto para poder continuar la lectura en llamadas posteriores.

Este proyecto sirve para comprender mejor conceptos fundamentales de C como la gestión de memoria dinámica, el uso de buffers, la lectura mediante file descriptors y la manipulación de cadenas de caracteres.


### Funciones principales

`*get_next_line(int fd, char *stash)`: Función principal del proyecto. Lee y devuelve la siguiente línea disponible del file descriptor recibido. Cada llamada devuelve una línea distinta hasta llegar al final del archivo.

`*read_and_stash(int fd, char *stash)`: Lee datos desde el file descriptor y los almacena temporalmente en `stash` hasta encontrar un salto de línea o alcanzar el final de la lectura.

`*extract_line(char *stash)`: Extrae y devuelve la primera línea completa almacenada en stash, incluyendo el salto de línea si existe.

`*update_stash(char *stash)`: Actualiza el contenido de stash eliminando la línea que ya ha sido devuelta y conservando los datos restantes para futuras llamadas.

## Instrucciones

### Compilación

Para compilar el archio, ejecutar:

`cc -Wall -Werror -Wextra -D BUFFER_SIZE=25 get_next_line.c get_next_line_utils.c`

#### Ejecución del programa

Para ejecutar el programa:

`./a.out texto.txt`


## Recursos

- La web de [MEDIUM] (https://medium.com/@lannur-s/gnl-c3cff1ee552b)
- La web de [EDUCATIVE] (https://www.educative.io/answers/read-data-from-a-file-using-read-in-c)
