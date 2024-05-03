Proceso SumaDeVectores
    Definir n Como Entero;
    Definir vectorA[n], vectorB[n], vectorC[n] Como Real;
	
    Escribir "Ingrese el tamaño de los vectores: ";
    Leer n;
	
    Para i <- 1 Hasta n Con Paso 1 Hacer
        Escribir "Ingrese el valor del vector A en la posición ", i, ": ";
        Leer vectorA[i];
        Escribir "Ingrese el valor del vector B en la posición ", i, ": ";
        Leer vectorB[i];
        vectorC[i] <- vectorA[i] + vectorB[i];
    FinPara
	
    Escribir "El vector resultante de la suma es: ";
    Para i <- 1 Hasta n Con Paso 1 Hacer
        Escribir vectorC[i];
    FinPara
FinProceso