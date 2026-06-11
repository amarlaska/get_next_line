*Este proyecto ha sido creado como parte del currículo de 42 por <amarlasc>*

# get_next_line

## Descripción
En el proyecto de get_next_line tiene que leer ... Cada llamada devuelve la siguiente línea. 

### Funciones utilizadas en archivo get_next_line

char	*get_next_line(int fd);
char	*read_and_stash(int fd, char *stash);
char	*extract_line(char *stash);
char	*update_stash(char *stash);

### Funciones utilizadas en archivo get_next_line_utils
size_t	ft_strlen(char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(const char *s);

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
- `$(NAME)`: genera la librería `libft.a`
- `all`: compila el proyecto
- `clean`: elimina los archivos objeto
- `fclean`: elimina los archivos objeto y la libreria.
- `re`: recompila el proyecto desde cero

### Archivos

```text
get_next_line/
├── get_next_line.c         # Función principal
├── get_next_line_utils.c   # Funciones auxiliares
└── get_next_line.h         # Prototipo y BUFFER_SIZE
```

## Recursos
