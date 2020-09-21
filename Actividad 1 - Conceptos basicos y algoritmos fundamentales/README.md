README.md

Concepto del proyecto:

En esta primera entrega, se pretende ordenar un inventariado de birlos para rines de auto, cada birlo tiene su propio código de identificación, así como el año del auto al cual pertenece y la marca del mencionado, con lo cual decimos que cada birlo tiene 3 atributos. En este caso, se pretende ordenar cada uno de los birlos de acuerdo al código de identificación (Ejemplo: BIRLO_001, BIRLO_999, etc), dicho esto, en esta entrega se manejarán los datos por fila y mediante una variable del tipo vector string, ordenándose de esta forma mediante el código ASCII.

Explicación del programa:

El menú consta de 4 opciones (1. Obtener datos del archivo, 2. Ordenar y guardar datos, 3. Búsqueda por rangos de entrada 4. Salir). Para los tres primeros casos se diseñó su propia función para una mayor comodidad, la primera función "leer" consiste en extraer los datos del archivo "archivo.txt" mediante ifstream y un ciclo while hasta llegar a la ultima fila, es decir, que no terminará de extraer hasta llegar al final del archivo de texto, y al mismo tiempo, los datos son ingresados a una variable del tipo vector string y por último, se imprimen en la pantalla los datos. La segunda función "escribir" consiste en leer los datos como lo hace la función leer, pero mediante el algoritmo de ordenamiento, en este caso se utilizó el método Merge, después de eso, son imprimidos los datos ya ordenados. Con aquellos datos, se genera un nuevo archivo "resultado.txt" mediante ofstream. Por último, en "buscarxRangos" se hace el proceso de leer los datos pero del archivo "resultado.txt" es decir, los datos ya ordenados, con el motivo de filtrar el número de datos que usuario quiere ver mediante la determinación de rangos de datos.

Algoritmos de ordenamiento utilizados:

#Método Merge

Análisis de complejidad temporal

El algoritmo presentado funciona partir el arreglo a la mitad de tal forma como lo haría una estructura de árbol, pero también realizará comparaciones a manera de los subgrupos generados en cada nivel, dicho esto, se afirma que el algoritmo es de tiempo On(log(n)) para el peor de los casos.
