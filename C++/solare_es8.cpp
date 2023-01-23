/*
	Name: solare_es8
	Copyright: Colamonico chiarulli
	Author: Solare Antonio
	Date: 05/10/22 08:29
	Description: Questo programma, dati in input il prezzo da pagare e la banconota a mia disposizione, mi dice quante e quali monete o banconote dovrò restituire.
*/

// 1. includo le librerie
#include <iostream>
using namespace std;

// 2. inizio blocco main
int main()
{
// 3. dichiaro e inizializzo le variabili

	float prz=0;
	float importo=0;
	float resto=0;
	
// 4. input
	cout<<"Inserire il prezzo da pagare";
	cin>>prz;
	do{
	cout<<"Inserire la banconota data per pagare";
	cin>>importo;
	} while(importo<=prz);
	
// 5. algoritmo
	
	resto=importo-prz;
	if(0<=resto)
	{
		if(2<=resto)
		{
			
		}
	}
  
// 6. output



// 7. ritorno al sistema operativo
	return 0;
// 8. fine del programma
}
