Algoritmo SumaDeCuadrados
    Definir  i, suma Como Entero;
    Definir cuadrado como Real;
	
    suma <- 0;
    Para i <- 1 Hasta 100 Con Paso 1 Hacer
        cuadrado <- i * i;
        suma <- suma + cuadrado;
    FinPara
	
    Escribir "La suma de los cuadrados de los números entre 1 y 100 es: ", suma;
FinAlgoritmo