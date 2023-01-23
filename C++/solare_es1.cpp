/*
	Name: solare_es1
	Copyright: Colamonico Chiarulli
	Author: Solare Antonio
	Date: 28/09/22 09:45
	Description: in questo programma prendiamo in input un numero, lo moltiplichiamo per 3 e poi sottraiamo 5.
*/

// 1. includo le librerie
#include <iostream>
using namespace std;

// 2. inizio blocco main
int main()
{
// 3. dichiaro e inizializzo le variabili
	int num=0;
	int ris=0;
// 4. input
	cout<<"Inserisci il numero";
	cin>>num;
// 5. algoritmo
	ris=(num*3)-5;
// 6. output
	cout<<"Il risultato e\' " <<ris;
// 7. ritorno al sistema operativo
	return 0;
// 8. fine del programma
}
