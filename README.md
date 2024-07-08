# C++ practice

## int main()
- int: Indica que la función main debe devolver un valor entero al sistema operativo cuando termina.
- main: Nombre de la función. La función main es una función especial en C++ porque es el punto de entrada del programa.
- (): Indican los argumentos que main toma. Existen versiones de main que aceptan argumentos como int main(int argc, char *argv[ ]).

## using namespace std
- Permite tener alcance directo a todas las funciones declaradas como "std", es decir, las funciones que normalmente llamarías como "std::cout" solo habria que usar "cout". Hay que tener cuidado que al traer estas funcionen no exista una declaración similar que provoque ambigüedad.

## Include 
- Es una directiva que permite incluir declaraciones de otros ficheros en la compilacion. 
    * #include <'libreria'>: Para encabezados de libreria estándar del sistema.
    * #include "libreria": Para encabezados locales o específicos del proyecto, buscando primero en el directorio local antes de buscar en los directorios estándar del sistema.

## define 
- Característica del preprocesador que se utiliza para definir macros (fragmentos de código definidos por el preprocesador). Las macros pueden ser de varios tipos, incluyendo constantes, alias para fragmentos de código, y macros con parámetros.
- Simplifica el código y evita la duplicación de constantes y fragmentos de código.
- Debe usarse con cuidado debido a la falta de comprobación de tipos y al alcance global de las macros.

