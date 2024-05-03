Algoritmo ImparesHastaCien
    Definir  i como Entero;
	
	Escribir "Aca una lista de los numeros impares que hay de 0 al 100";
    Para i <- 100 Hasta 1 Con Paso -1 Hacer
        Si i Mod 2 <> 0 Entonces
            Escribir i;
        FinSi
    FinPara
FinAlgoritmo