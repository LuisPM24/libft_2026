*Este proyecto ha sido creado como parte del currículo de 42 por lupalomi*

# Descripción
Este proyecto consiste en una librería que incluye múltiples funciones de la biblioteca estándar de C [libc](https://man7.org/linux/man-pages/man7/libc.7.html), así como funciones de otras bibliotecas que resultan de mucha utilidad.

El objetivo de estas funciones es facilitar el desarrollo de futuros proyectos de 42 Common Core. Incluye:

- Un archivo `libft.h`
- Un archivo `Makefile`
- Múltiples archivos .c que representan a las funciones.

# Instrucciones
Para utilizar la libft, será necesario clonar el repositorio dentro de la carpeta de proyecto donde se desea usar. El siguiente comando creará la carpeta **libft** con los archivos anteriormente nombrados.

```bash
git clone https://github.com/LuisPM24/libft_2026.git libft
```

Posteriormente, será necesario compilar los archivos de la propia librería. Para ello, se debe usar

```bash
cd libft
make
```

El siguiente comando también es válido, pues lo que hace es volver a compilar toda la librería, eliminando los antiguos archivos.

```bash
make re
```

Una vez compilada la librería, será necesario añadir la siguiente cabecera, mediante la directiva [include](https://learn.microsoft.com/es-es/cpp/preprocessor/hash-include-directive-c-cpp?view=msvc-170), dentro del archivo en el que se desea usar las funciones de la misma:

```C
#include "libft/libft.h"
```

Esto permite usar cualquier función de la libft dentro del archivo correspondiente, por lo que se recomienda añadir esta cabecera en un archivo .h

Para compilar un archivo .c junto con la librería se deberá usar el siguiente comando:

```Bash
cc -Wall -Wextra -Werror main.c -Llibft -lft -Ilibft
```

PD: En el anterior comando, se deberá sustituir ***main.c*** por los archivos que se desean compilar.

# Recursos
Se requiere un compilador de C (como `cc`) y un sistema compatible con POSIX (Linux o macOS), ya que se utilizan cabeceras estándar como `<unistd.h>`.

Durante la realización de este proyecto, se ha recurrido a las páginas del manual de las funciones originales. Para ello, se ha usado el comando `man` seguido de la función que se desea consultar, como por ejemplo:

```Bash
man atoi
```

Para consultar la página del manual de la función atoi original de la [libc](https://man7.org/linux/man-pages/man7/libc.7.html).

La siguiente página constituye una versión online de las páginas del manual: https://man7.org/linux/man-pages/index.html

Este proyecto no utiliza IA generativa.

# Funciones
Este apartado describe, de manera más detallada, cada una de las funciones.
## ft_isalpha
Recibe un valor `int`. Devuelve `1` si el valor corresponde, en ASCII, a un carácter alfabético. En caso contrario, devuelve un `0`.

```C
int		ft_isalpha(int c)
```
## ft_isdigit
Recibe un valor `int`. Devuelve `1` si el valor corresponde, en ASCII, a un carácter numérico. En caso contrario, devuelve un `0`.

```C
int		ft_isdigit(int c)
```
## ft_isalnum
Recibe un valor `int`. Devuelve `1` si el valor corresponde, en ASCII, a un carácter alfanumérico. En caso contrario, devuelve un `0`.

```C
int		ft_isalnum(int c)
```
## ft_isascii
Recibe un valor `int`. Devuelve `1` si el valor corresponde a un carácter ASCII. En caso contrario, devuelve un `0`.

```C
int		ft_isascii(int c)
```
## ft_isprint
Recibe un valor `int`. Devuelve `1` si el valor corresponde, en ASCII, a un carácter imprimible. En caso contrario, devuelve un `0`.

```C
int		ft_isprint(int c)
```
## ft_strlen
Recibe un valor `char *`. Devuelve la longitud de la cadena como valor.

```C
size_t	ft_strlen(const char *s)
```
## ft_memset
Recibe un valor `void *`. Modifica el puntero introducido `s` cambiando `n` valores a `c`. Posteriormente, devuelve la cadena.

```C
void	*ft_memset(void *s, int c, size_t n)
```
## ft_bzero
Recibe un valor `void *`. Modifica la cadena introducida `*s` cambiando `n` valores a `0`.

```C
void	ft_bzero(void *s, size_t n)
```
## ft_memcpy
Dado el valor `src`, que es del tipo `void *`, copia `n` valores a `dest`, que es del tipo `void *`. Posteriormente, devuelve el puntero. En caso de error, devuelve `NULL`. Esta función NO PERMITE OVERLAP.

```C
void	*ft_memcpy(void *dest, const void *src, size_t n)
```
## ft_memmove
Dado el valor `src`, que es del tipo `void *`, copia `n` valores a `dest`, que es del tipo `void *`. Posteriormente, devuelve el puntero. En caso de error, devuelve `NULL`. Esta función PERMITE OVERLAP.

```C
void	*ft_memmove(void *dest, const void *src, size_t n)
```
## ft_strlcpy
Dado `src` (`const char *`), copia hasta `size - 1` caracteres en dest (`char *`), asegura que `dest` quede terminada en nulo (si `size > 0`) y devuelve la longitud total de `src`.

```C
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
```
## ft_strlcat
Concatena la cadena `src` al final de `dst`, asegurando que el resultado esté terminado en nulo, si hay espacio y sin sobrepasar el tamaño total del buffer `size`.

```C
size_t	ft_strlcat(char *dst, const char *src, size_t size)
```
## ft_toupper
Recibe un valor `c` alfabético en ASCII. Retorna el mismo carácter ASCII pero en mayúscula.

```C
int	ft_toupper(int c)
```
## ft_tolower
Recibe un valor `c` alfabético en ASCII. Retorna el mismo carácter ASCII pero en minúscula.

```C
int		ft_tolower(int c)
```
## ft_strchr
Busca el primer carácter `c` dentro de la cadena `s`. Devuelve un puntero desde esa primera referencia. En caso de que no encuentre ese carácter, devuelve un `NULL`.

```C
char	*ft_strchr(const char *s, int c)
```
## ft_strrchr
Busca la última referencia al carácter `c` dentro de la cadena `s`. Devuelve un puntero desde esa última referencia. En caso de que no encuentre ese carácter, devuelve un `NULL`.

```C
char	*ft_strrchr(const char *s, int c);
```
## ft_strncmp
Compara `n` carácteres de la cadena `s1` con la cadena `s2`. Si existe algún carácter diferente, devuelve la diferencia de los valores ASCII. En caso de que todos los carácteres sean iguales, devuelve `0`.

```C
int		ft_strncmp(const char *s1, const char *s2, size_t n)
```
## ft_memchr
Busca dentro de los primeros `n` valores de `s` la primera aparición del valor `c`. Devuelve un puntero a esa ubicación. En caso contrario, devuelve `NULL`.

```C
void	*ft_memchr(const void *s, int c, size_t n)
```
## ft_memcmp
Compara `n` valores del puntero `s1` con el puntero `s2`. Si existe algún carácter diferente, devuelve la diferencia de los valores. En caso de que todos los carácteres sean iguales, devuelve `0`.

```C
int		ft_memcmp(const void *s1, const void *s2, size_t n)
```
## ft_strnstr
Busca la subcadena `little` dentro de los primeros `len` carácteres de `big`. Devuelve un puntero a esa ubicación. En caso contrario, devuelve `NULL`.

```C
char	*ft_strnstr(const char *big, const char *little, size_t len)
```
## ft_atoi
Convierte una cadena de carácteres ASCII `nptr` a `int`.

```C
int		ft_atoi(const char *nptr)
```
## ft_calloc
Reserva memoria para `nmemb` elementos de tamaño `size`, inicializa todo el puntero a `0` y lo devuelve. Si falla, retorna `NULL`.

```C
void	*ft_calloc(size_t nmemb, size_t size)
```
## ft_strdup
Genera un duplicado de la cadena `s` y lo retorna. En caso de error, retorna `NULL`.

```C
char	*ft_strdup(const char *s)
```
## ft_substr
Copia hasta `len` carácteres de `s`, empezando desde `start`. Posteriormente, devuelve una nueva cadena con esos carácteres. En caso de error, retorna `NULL`.

```C
char	*ft_substr(char const *s, unsigned int start, size_t len)
```
## ft_strjoin
Genera una nueva cadena mediante la unión de las cadenas `s1` y `s2`. Posteriormente, devuelve el string con la unión. En caso de error, devuelve `NULL`.

```C
char	*ft_strjoin(char const *s1, char const *s2)
```
## ft_strtrim
Elimina la cadena `set` del principio y final de la cadena `s1`. Posteriormente, devuelve la cadena. En caso de error, devuelve `NULL`.

```C
char	*ft_strtrim(char const *s1, char const *set)
```
## ft_split
Divide, cada vez que encuentra el carácter `c`, la cadena `s`. Retorna un puntero con todas las divisiones y terminado en `NULL`. En caso de error, retorna `NULL`.

```C
char	**ft_split(char const *s, char c)
```
## ft_itoa
Convierte un número `n` de `int` a ASCII. En caso de error, retorna `NULL`.

```C
char	*ft_itoa(int n)
```
## ft_strmapi
Aplica la función `f` a cada carácter de la cadena `s`, pasando su índice como primer argumento y el propio carácter como segundo argumento. Retorna una nueva cadena con los resultados de aplicar dicha función a la cadena. En caso de error, retorna `NULL`.

```C
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
```
## ft_striteri
Aplica la función `f` a cada carácter de la cadena `s`, pasando como parámetros el índice de cada carácter dentro de `s` y la dirección del propio carácter, que puede modificarse si es necesario. En caso de error, retorna `NULL`.

```C
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
```
## ft_putchar_fd
Escribe el carácter `c` en `fd`.

```C
void	ft_putchar_fd(char c, int fd)
```
## ft_putstr_fd
Escribe la cadena de carácteres `s` en `fd`.

```C
void	ft_putstr_fd(char *s, int fd)
```
## ft_putendl_fd
Escribe la cadena de carácteres `s`, seguida de un salto de línea, en `fd`.

```C
void	ft_putendl_fd(char *s, int fd)
```
## ft_putnbr_fd
Escribe el número `n` en `fd`.

```C
void	ft_putnbr_fd(int n, int fd)
```
## ft_lstnew
Crea un nuevo nodo `t_list` mediante un `content` dado. La variable ***next*** se inicializa como `NULL`. Retorna el nuevo nodo. En caso de error, retorna `NULL`.

```C
t_list	*ft_lstnew(void *content)
```
## ft_lstadd_front
Añade un nodo `new` al principio de la lista `lst`.

```C
void	ft_lstadd_front(t_list **lst, t_list *new)
```
## ft_lstsize
Mide y retorna la cantidad de nodos existentes en una lista `lst`.

```C
int		ft_lstsize(t_list *lst)
```
## ft_lstlast
Retorna el último nodo de la lista `lst`. Si no se entrega ninguna lista, retorna `NULL`.

```C
t_list	*ft_lstlast(t_list *lst)
```
## ft_lstadd_back
Añade un nodo `new` al final de la lista `lst`.

```C
void	ft_lstadd_back(t_list **lst, t_list *new)
```
## ft_lstdelone
Recibe como parámetro un nodo `lst` y libera la memoria del contenido utilizando la función `del` dada como parámetro. También libera el nodo en sí mismo, pero no libera el siguiente nodo.

```C
void	ft_lstdelone(t_list *lst, void (*del)(void *))
```
## ft_lstdelone
Elimina y libera el nodo `lst` dado y todos los consecutivos del mismo, utilizando la función `del` y `free`.

```C
void	ft_lstclear(t_list **lst, void (*del)(void *))
```
## ft_lstiter
Itera la lista `lst` y aplica la función `f` en el contenido de cada nodo.

```C
void	ft_lstiter(t_list *lst, void (*f)(void *))
```
## ft_lstiter
Itera la lista `lst` y aplica la función `f` al contenido de cada nodo. Crea una lista resultante de aplicar sucesivamente la función `f` a cada nodo. La función `del` se utiliza para eliminar el contenido de un nodo si es necesario.

```C
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
```