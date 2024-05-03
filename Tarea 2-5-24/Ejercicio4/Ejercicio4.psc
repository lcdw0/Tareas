Algoritmo PromedioGeneral
    Definir MAX_STUDENTS como real;
	MAX_STUDENTS <- 10;
    Definir i Como Entero;
    Definir grade, suma como real;
	
    suma <- 0;
    Para i <- 1 Hasta MAX_STUDENTS Con Paso 1 Hacer
        Escribir "Ingrese la nota del estudiante ", i, ": ";
        Leer grade;
        suma <- suma + grade;
    FinPara
	
    Definir promedio Como Real;
    promedio <- suma / MAX_STUDENTS;
	
    Escribir "El promedio general de la sección es: ", promedio;
FinAlgoritmo