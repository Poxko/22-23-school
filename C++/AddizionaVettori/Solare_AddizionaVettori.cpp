/*
    Name: solare_sommavettore
    Copyright: Colamonico Chiarulli
    Author: Antonio Solare
    Date: 28/11/22 08:35
    Description: Dati in input due vettori di numeri interi, dare in output un terzo vettore contenente le somme degli elementi corrispondenti.
*/


//1. includo le librerie
#include <iostream>
using namespace std;

//2. inizio il blocco main
int main()
{

//3. dichiaro e inizializzo le variabili

	int i;
	int num=0;
	int vettore[100];
	int vettore2[100];
	int somma[100];
	

//4. input

	cout<<"Inserisci il numero di elementi in un vettore:";
	cin>>num;
	
//5. logica - operazioni - algoritmo
	
	for(i=0;i<num;i++)
	{
		cout<<"Inserisci l'elemento " <<i <<" nel primo vettore: ";
		cin>>vettore[i];
	}
	
	for(i=0;i<num;i++)
	{
		cout<<"Inserisci l'elemento " <<i <<" nel secondo vettore: ";
		cin>>vettore2[i];
	}
	
	for(i=0;i<num;i++)
	{
		somma[i]= vettore[i] + vettore2[i];
	}
	
	

//6. output

	for(i=0;i<num;i++)
	{
		cout<<"La somma degli elementi nella posizione " <<i << " e\': " <<somma[i] <<endl;
	}


//7. ritorno al sistema operativo

	return 0;

//8. fine del programma
}
