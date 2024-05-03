Proceso CalcularNotas
    Definir nota, cantidadAprobados, cantidadReprobados, sumaNotas, promedio Como Real;
    Definir i Como Entero;
	
    cantidadAprobados <- 0;
    cantidadReprobados <- 0;
    sumaNotas <- 0;
	
    Para i <- 1 Hasta 8 Con Paso 1 Hacer
        Escribir "Ingrese la nota del estudiante ", i, ": ";
        Leer nota;
		
        Si nota >= 70 Entonces
            cantidadAprobados <- cantidadAprobados + 1;
            sumaNotas <- sumaNotas + nota;
        Sino
            cantidadReprobados <- cantidadReprobados + 1;
        FinSi
    FinPara
	
    promedio <- sumaNotas / 8;
	
    Escribir "Cantidad de alumnos aprobados: ", cantidadAprobados;
    Escribir "Cantidad de alumnos reprobados: ", cantidadReprobados;
    Escribir "Promedio general del grupo: ", promedio;
FinProceso