# Actividad Integral 4.- Grafos (Evidencia de Competencia)

### Registros de datos de cartas existentes en videojuego

Este programa tiene como fin llevar a cabo un registro de todas las cartas existentes de Yu-gi-oh! Forbbiden Memories, un videojuego. Cada uno de los registros contiene el número de carta, el nombre, el tipo de carta, el tipo de monstruo, los puntos de ataque y los puntos de defensa. El tipo de árbol utilizado fue el heap, dado que es un árbol más completo que el BST aunque con algunas cuantas restricciones, también presenta muchas ventajas, principalmente el uso de arreglos para su implementación, esto premite que sea mucho más comprensible de manejar para el programador. Cabe mencionar también que en el árbol heap, cada nodo tiene un valor menor igual (o mayor igual)que el valor asociado a cada uno de sus hijos.

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
