/*
	Name: Solare_voti
	Copyright: Colamonico Chiarulli
	Author: Antonio Solare
	Date: 20/12/22 13:18
	Description:  Dato in input un vettore di N numeri reali corrispondenti ai voti del compito di informatica di una classe, dare in output: il numero di voti sufficienti, 
				  il numero di voti insufficienti ed una variabile booleana esito che assuma valore V se i voti sufficienti sono di più di quelli insufficienti,
                  valore F altrimenti.
*/

//1. includo le librerie
#include <iostream>
using namespace std;

//2. inizio il blocco main
int main()
{

//3. dichiaro e inizializzo le variabili

	int n = 0;
	int voto = 0;
	int suff , insuff = 0;
	int i;
	bool j=true;

//4. input
	
	do
	{
		cout << "Inserisci quanti voti vuoi considerare: ";
		cin >> n;
	}while( n <= 0 );
	
//5. logica - operazioni - algoritmo

	for(i = 0;i < n;i++)
	{
		cout<< "Inserisci il voto: ";
		cin>> voto;
		if(voto >= 6)
			suff++;
		else
			insuff++;	
	}
	cout << endl;
//6. output

	cout << "I voti sufficienti sono " << suff << endl;
	cout << "I voti insufficienti sono " << insuff << endl;
	

	if(suff > insuff)
	{
		cout << "V";
	}
	else
	{

		cout << "F";
	}


//7. ritorno al sistema operativo

	return 0;

//8. fine del programma
}
