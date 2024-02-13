# Printf
Resumen:  El objetivo de este proyecto es bastante sencillo. Deberás reprogramar printf(). Aprenderás, principalmente, a utilizar un número variable de argumentos.

## Contenido del repositorio:
- Printf
- Tests basicos
- Subject

## !Importante!
Para usar los tests, necesitaras un Makefile en tu directorio de printf, que contenga como minimo:
  - La regla $(NAME)
  - La regla clean
  - La regla fclean

### Antes de ejecutar 'make'!!
1. En el Makefile cambia las variables donde pone *Change this directory* por el directorio de tu printf y por donde se ubica tu libftprintf.a
2. En el archivo "test_printf.h", cambia el directorio donde esta incluido tu "ft_printf.h"
3. Guarda todo y ya esta listo para usar!
***
## Comandos:
### All
Compila todo lo necesario y ejecuta la norminette y los tests

    make

### Norminette

    make norminette

### Tests:

    make test

### Debuggeador:

    make debug

*Valgrind (Solo funcionara si tienes valgrind)*

    make valgrind

### Limpiar archivos innecessarios:

Limpia solo *.o y los .out

    make clean

Limpieza profunda + borrado de .out.dSYM

    make fclean
    
Igual que fclean + limpia la pantalla

    make clear

***
~ Made by sadoming ~
***
