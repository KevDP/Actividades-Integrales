# Actividad Integral 4.- Grafos (Evidencia de Competencia)

### Registros de datos de cartas existentes en videojuego

Este programa tiene como fin llevar a cabo un cálculo a través del algoritmo del DFS (Deep First Search) para conocer el camino que debería recorrer el usuario de un videojuego en el cual debe pintar todas las casillas pasando sobre ellas en el menor tiempo posible, para esto, se debe tener en cuenta que las casillas son creadas con grafos a manera de coordenandas, de esta forma es que se genera el camino a recorrer en el menor tiempo, es importante definir que esto funciona a manera de lectura de archivos, es decir, que en el archivo de texto se deben tener contempladas todas las coordenandas preferiblemente en orden para construir el tablero de 7 x 7 y encontrar cual es la casilla que existe y cuál no. Aquellas coordenadas que no existan serán tomados como cuadros nulos o "muros" por lo cuales no se podrá pasar ni pintar, entonces al terminar de ingresar las coordenadas el programa habrá construido el "laberinto" y encontrará el camino a recorrer más corto, esto a partir del numero que se indica. Lo abstracto radica en que, no se podrá diferenciar al momento si el número de casilla consiguiente es horizontal o vertical pues se mostrarán únicamente en coordenadas de 1 número ((n) en lugar de (x,y)), pero ni en el peor de los casos representaría un problema para los datos que requiere el usuario a la hora de presentar el resultado obtenido en otro archivo txt.

+ Cabe mencionar que el programa contiene un main (Casos_prueba.cpp) para comprobar las funciones utilizadas en el grafo.

+ El proyecto no tiene relación con los anteriores, a menos que se indique, en lo particular esta actividad demuestra sólo las competencias destinadas a esta entrega.

+ Los casos de prueba están comentados a razón de que se corren independientemente del main.cpp, de lo contrario se crea un error de varios main corriéndose simultáneamente, por lo que es necesario descomentarlo y sustituirlo en el otro main principal ('main.cpp').

## función loadGraphMat

Análisis de complejidad temporal

El algoritmo presentado consiste en, una carga de archivos, específicamente carga los arcos presentes en el grafo para ser almacenados en una matriz de adyacencia, dicho esto, su nivel de complejidad es de O(V+E), V se refiere a los vertices y E a los arcos, la complejidad está contemplada para el peor de los casos. 

## función loadGraphList

Análisis de complejidad temporal

El algoritmo presentado consiste en, una carga de archivos, específicamente carga los arcos presentes en el grafo para ser almacenados en una lista de adyacencia, dicho esto, su nivel de complejidad es de O(V+E), V se refiere a los vertices y E a los arcos, la complejidad está contemplada para el peor de los casos. 

## función DFS

Análisis de complejidad temporal

El algoritmo presentado consiste en, una impresión de un recorrido (el más corto), específicamente el DFS se refiere al recorrido de profundidad (Deep) a partir del primer nodo o nodo inicial, dicho esto, su nivel de complejidad es de O(V+E), V se refiere a los vertices y E a los arcos, la complejidad está contemplada para el peor de los casos. 

## función BFS

Análisis de complejidad temporal

El algoritmo presentado consiste en, una impresión de un recorrido (el más corto), específicamente el BFS se refiere al recorrido de anchor (Breadth) a partir del primer nodo o nodo inicial, dicho esto, su nivel de complejidad es de O(V+E), V se refiere a los vertices y E a los arcos, la complejidad está contemplada para el peor de los casos. 
