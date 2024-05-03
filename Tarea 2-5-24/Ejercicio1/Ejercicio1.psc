Algoritmo SumaDeNumerosNaturales
    Definir n, suma, i como Entero;
	Escribir "Indique hasta que numero desea sumar";
    Leer n;
    suma <- 0;
    Para i <- 1 Hasta n Con Paso 1 Hacer
        suma <- suma + i;
    FinPara
	
    Escribir "La suma de los números naturales desde 1 hasta ", n, " es: ", suma;
FinAlgoritmo