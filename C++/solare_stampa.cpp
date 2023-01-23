/*
    Name: stampa_vettore
    Copyright: Colamonico Chiarulli
    Author: Antonio Solare
    Date: 28/09/22 09:39
    Description: Creare un programma in C++ per stampare gli elementi di un vettore. Il programma chiede all'utente di quanti elementi desidera il vettore. Poi attraverso un ciclo for, stampa tutti gli elementi del vettore, utilizzando l'indice del vettore come indice del ciclo
*/


//1. includo le librerie
#include <iostream>
using namespace std;

//2. inizio il blocco main
int main()
{

//3. dichiaro e inizializzo le variabili

	int vettore[0];
	int i;

//4. input

//5. logica - operazioni - algoritmo
	
	vettore[0]=67;
	vettore[1]=22;
	vettore[2]=34;
	vettore[3]=24;
	vettore[4]=82;
	vettore[5]=18;
	vettore[6]=7;
	vettore[7]=4;
	vettore[8]=13;
	vettore[9]=23;
	
	for(i=0;i<10;i++)
	{
		cout<<vettore[i] <<endl;
	}

//6. output
	
	
//7. ritorno al sistema operativo
	
	return 0;

//8. fine del programma
}
