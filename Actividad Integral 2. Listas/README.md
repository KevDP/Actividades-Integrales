# Actividad Integral 2.- Listas (Evidencia de Competencia)

### Registros de datos de una serie de televisión

Este programa tiene como fin llevar a cabo un registro acerca de la primera temporada de la serie 'Malcolm in the middle' el cual se consta de un número de episodio, nombre del episodio en español y la fecha en que se estrenó, cada uno de esos elementos pertenecientes a un formato de LinkedList se toma como uno, es decir, cada elemento está tomado en cuenta linea por linea. Al correr el programa se pedirá el nombre de un archivo a cargar, en este caso el archivo de texto tomado en cuenta ("Archivo.txt") está desordenado, por lo que al ingresarlo al formato de lista será ordenado con un Merge Sort. Posterior a ello, se desplegará un menú en el cual podrá ser posible: 1. Ver la lista de episodios ordenados por el número 2. Escribir esa lista en un nuevo archivo nombrado por el usuario 3. Buscar un elemento según el número de episodio en la lista 4. Eliminar o remover un episodio 5. Probar casos de prueba para la clase lista.

+ Cabe mencionar que el programa contiene un main de casos de prueba en la opción 5 del menú para comprobar las funciones utilizadas en la lista.

+ El proyecto no tiene relación con los anteriores, a menos que se indique, en lo particular esta actividad demuestra sólo las competencias destinadas a esta entrega.


## función add

Análisis de complejidad temporal

El algoritmo presentado funciona mediante un ciclo que condiciona recorrer la propiedad del acceso siguiente (Link next) mientras que el mismo sea difirente de 0, al terminar el ciclo, el acceso finalmente apuntará hacia el valor que se pretende agregar y si aumenta en uno la cantidad de valores para que esto sea posible, la complejidad temporal que presenta es de tiempo lineal, ó O(n) para el peor de los casos.

## función find

Análisis de complejidad temporal

El algoritmo presentado funciona mediante un ciclo que condiciona recorrer la propiedad del acceso (Link p) mientras que el mismo sea difirente de 0, también se condiciona que al llegar al valor (val), se terminarán ambos ciclos pero esto no quiere decir que usan más pasos que n, puesto que el primero es el que toma en cuenta los pasos totales y el segundo solo funciona bajo una complejidad constante, entonces, al salir del ciclo, esto diría que el valor(val) buscado ya habría sido encontrado, la complejidad temporal que presenta es de tiempo lineal, ó O(n) para el peor de los casos.

## función remove

Análisis de complejidad temporal

El algoritmo presentado funciona mediante un ciclo que recorre el size de la lista obtenida, por lo que decimos que recorre n pasos, contiene una condición que al llegar al valor del índice dado, el acceso auxiliar(Link aux) guardará el acceso de la posición que se pretende remover y de la misma forma se guardará el valor de la posición, entonces el link será relacionado hacia el siguiente valor de la lista, realizada esta condición, el ciclo terminará y el valor y la posición del índice dado, de la misma manera el espacio ocupado por esa posición será borrado, la complejidad temporal que presenta es de tiempo lineal, ó O(n) para el peor de los casos.


