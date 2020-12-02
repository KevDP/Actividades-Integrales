# Actividad Integral 3.- Árboles (Evidencia de Competencia)

### Registros de datos de cartas existentes en videojuego

Este programa tiene como fin llevar a cabo un registro a partir de un árbol heap, un total de 50 cartas existentes de Yu-gi-oh! Forbbiden Memories, un videojuego de la Playstation 1. Cada uno de los registros contiene el número de carta, el nombre, el tipo de carta, el tipo de monstruo, los puntos de ataque y los puntos de defensa. En el menú desplegable es posible: 1. Ver los datos de las cartas 2. Escribir los datos a un nuevo archivo 3. Buscar los datos de una carta en específico 4. Probar los casos de prueba. Como se decía al inicio, el tipo de árbol utilizado fue el heap, dado que es un árbol más completo que el BST aunque con algunas cuantas restricciones, también presenta muchas ventajas, principalmente el uso de arreglos para su implementación, esto premite que sea mucho más comprensible de manejar para el programador. Cabe mencionar también que en el árbol heap, cada nodo tiene un valor menor igual (o mayor igual)que el valor asociado a cada uno de sus hijos.

+ Cabe mencionar que el programa contiene una opción de caso de prueba para comprobar las funciones utilizadas en el árbol "heap".

+ El proyecto no tiene relación con los anteriores, a menos que se indique, en lo particular esta actividad demuestra sólo las competencias destinadas a esta entrega.

## función push

Análisis de complejidad temporal

El algoritmo presentado consiste en, a través de un recorrido dividido a la mitad (función parent), mientras se recorra entre el primer dato de la fila y el dato de la posición del pariente, se ingresarán los datos de la posición con cada pariente, entonces se agregará el valor ingresado en la fila priorizada, dicho esto, la complejidad temporal que presenta el algoritmo es de tiempo logarítmica para el peor de los casos, ó O(log(n)) para el peor de los casos.

## función size

Análisis de complejidad temporal

El algoritmo presentado funciona mediante la consulta del atributo count para desplegar el tamaño de la fila priorizada, dado que el main a validar tiene la lógica de comenzar los datos en el 0, se plantea traer el count restado a 1, puesto que en la lógica del programa realizado, el primer dato de la fila priorizada comienza desde 1, dicho esto, la complejidad temporal que presenta es de tiempo constante para el peor de los casos, ó O(1) para el peor de los casos.
