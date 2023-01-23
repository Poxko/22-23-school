/*
    Name: solare_
    Copyright: Colamonico Chiarulli
    Author: Antonio Solare
    Date: 18/11/2022 09:39
    Description: Chiedere all'utente quanti elementi (numeri interi) vuole inserire (lunghezza del vettore) e successivamente acquisire gli elementi da tastiera e salvarli nel vettore. 
	             Dare in output la somma di tutti gli elementi del vettore.
*/


//1. includo le librerie
#include <iostream>
using namespace std;

//2. inizio il blocco main
int main()
{

//3. dichiaro e inizializzo le variabili

	int i;
	int somma=0;
	int num=0;
	int vettore[i];

//4. input
	
	cout<<"Inserire quanti elementi si vuole desiderare: ";
	cin>>num;
	
//5. logica - operazioni - algoritmo
	
	for(i=0;i<num;i++)
	{
		cout<<"Inserisci l'elemento " <<i <<" : ";
		cin>>vettore[i];
		somma += vettore[i];
	} 
	
	
//6. output
	
	cout<<"La somma di tutti i numeri nel vettore sono: " <<somma;

//7. ritorno al sistema operativo

	return 0;

//8. fine del programma
}
