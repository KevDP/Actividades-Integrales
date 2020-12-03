# Actividad Integral 4.- Grafos (Evidencia de Competencia)

### Registros de datos de cartas existentes en videojuego

Este programa tiene como fin llevar a cabo un cálculo a través del algoritmo del DFS (Deep First Search) para conocer el camino más corto que debería recorrer el usuario en un aeropuerto con una arquitectura de las salas y pasillos como el del grafo presentado con el motivo de llegar a la sala correcta impresa en su boleto y que no se pierdan en la sala que no les corresponde esperar su vuelo, para esto, se recibe un archivo con dos coordenadas para formar los pasillos del aeropuerto (1, 2) el primero indica de donde viene el pasillo (aunque parezca trivial o subjetivo, el orden no es importante), el segundo indica a dónde conecta o llegará el pasillo. El main consiste en ingresar el nombre del archivo donde se tienen los datos, después de ello se desplegará un menú para realizar diferentes acciones con el grafo ingresado.

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
