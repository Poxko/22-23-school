/*
	Name: Solare_
	Copyright: Colamonico Chiarulli
	Author: Antonio Solare
	Date: 26/10/22 09:54
	Description: 
*/

//1. includo le librerie
#include <iostream>
#include <cstring>
using namespace std;


//2. inizio il blocco main
int main()
{
	

//3. dichiaro e inizializzo le variabili
	
	double costo=0;
	string autobus="";
	int km=0;
//4. input
	cout<<"Inserisci il costo dell'abbonamento: " <<endl;
	cin>>costo;
	cout<<"Inserisci se lo studente usa l'autobus(si o no): " <<endl;
	cin>>autobus;

//5. logica - operazioni - algoritmo
	
	if(autobus=="si")
	{
		cout<<"Inserire i chilometri che fa per arrivare a scuola: " <<endl;
		cin>>km;
		if(km >= 20)
		{
			ris = (costo/100)*85;
			cout<<"Lo studente viene rimborsato del 15%. Il costo attuale dell'abbonamento e\' " <<ris;
		}
		else
		cout<<"Lo studente non e\' soggetto a rimborso";

	}

//6. output
	cout<<"Il prezzo da pagare e\' " <<ris;

//7. ritorno al sistema operativo
	return 0;
	
//8. fine del programma
}
