/*
	Name: solare_es12
	Copyright: Colamonico chiarulli
	Author: Solare Antonio
	Date: 19/10/22 09:33
	Description: In un cinema multisala si attuano delle particolari riduzioni sul costo del biglietto di ingresso, sulla base del sesso e dell’età del cliente: 
	fino a 18 anni, sconto del 15%, da 19 a 64 anni, nessuna riduzione; da 65 anni in su, per le donne riduzione del 25%, per gli uomini del 20%. Dati in input il costo del biglietto, il sesso e l’età del cliente,
    calcolare e dare in output l’importo da pagare.

*/

// 1. includo le librerie
#include <iostream>
using namespace std;

// 2. inizio blocco main
int main()
{
// 3. dichiaro e inizializzo le variabili

	float biglietto=0;
	string sesso="";
	int eta=0;
	float ris=0;
	
// 4. input
	cout<<"Inserire il costo del biglietto ";
	cin>>biglietto;
	cout<<"Inserire il sesso del cliente(M o F) ";
	cin>>sesso;
	cout<<"Inserire l'eta\' del cliente ";
	cin>>eta;
	
// 5. algoritmo
	
	if(eta<=18)
	{
		ris=(biglietto/100)*85;
	}
	else
	{
		if(eta>=65)
		{
			if(sesso=="F")
			ris=(biglietto/100)*75;
			else
			ris=(biglietto/100)*80;
		}
	}
  
// 6. output

	cout<<"Il biglietto costa " <<ris;

// 7. ritorno al sistema operativo
	return 0;
// 8. fine del programma
}
