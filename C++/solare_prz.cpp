/*
	Name: Solare_strlen
	Copyright: Colamonico Chiarulli
	Author: Antonio Solare
	Date: 26/10/22 09:33
	Description:  Dati in input il prezzo unitario del prodotto e il numero di pezzi acquistato, dare in output il prezzo totale da pagare.
*/

//1. includo le librerie
#include <iostream>
using namespace std;


//2. inizio il blocco main
int main()
{
	

//3. dichiaro e inizializzo le variabili
	
	int num,ris=0;
	double prz=0;
//4. input
	cout<<"Inserisci il prezzo del prodotto: " <<endl;
	cin>>prz;
	cout<<"Inserisci il numero di pezzi acquistati: " <<endl;
	cin>>num;

//5. logica - operazioni - algoritmo
	
	if(num>=4)
		ris = (prz/100)*60;
	else
		if(num==3)
			ris = (prz/100)*70;
		else
			if(num==2)
				ris = (prz/100)*80;
			else
				ris = prz;
	
//6. output
	cout<<"Il prezzo da pagare e\' " <<ris;

//7. ritorno al sistema operativo
	return 0;
	
//8. fine del programma
}
