/*
	Name: solare_es4
	Copyright: Colamonico Chiarulli
	Author: Solare Antonio
	Date: 03/10/22 11:22
	Description: Dati in input il prezzo di un prodotto e la percentuale di sconto, dare in output il prezzo scontato.
*/

// 1. includo le librerie
#include <iostream>
using namespace std;

// 2. inizio blocco main
int main()
{
// 3. dichiaro e inizializzo le variabili
	float prz=0;
	float per=0;
	float ris=0;
// 4. input
	cout<<"Inserisci il prezzo del prodotto";
	cin>>prz;
	cout<<"Inserisci la percentuale di sconto";
	cin>>per;
// 5. algoritmo
	ris=(prz*per)/100;
	ris=prz-ris;
// 6. output
	cout<<"Il risultato e\' " <<ris;
// 7. ritorno al sistema operativo
	return 0;
// 8. fine del programma
}
