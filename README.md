# C++ practice

## int main()
- int: Indica que la función main debe devolver un valor entero al sistema operativo cuando termina.
- main: Nombre de la función. La función main es una función especial en C++ porque es el punto de entrada del programa.
- (): Indican los argumentos que main toma. Existen versiones de main que aceptan argumentos como int main(int argc, char *argv[]).

## using namespace std
- Permite tener alcance directo a todas las funciones declaradas como "std", es decir, las funciones que normalmente llamarías como "std::cout" solo habria que usar "cout". Hay que tener cuidado que al traer estas funcionen no exista una declaración similar que provoque ambigüedad.