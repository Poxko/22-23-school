/*
	Name: Solare_strlen
	Copyright: Colamonico Chiarulli
	Author: Antonio Solare
	Date: 25/10/22 10:33
	Description: Inserire una stringa in input. utilizzare la funzione per contare i caratteri. Se la lunghezza della stringa supera 15 caratteri stampare a video un messaggio "La stringa è lunga", se la stringa è compresa tra 7 e 15 "La stringa è di media lunghezza", se inferiore a 7 caratteri "La stringa è corta". Creare il programma in AlgoBuild e il codice in C++.
*/

//1. includo le librerie
#include <iostream>
#include <cstring>
using namespace std;


//2. inizio il blocco main
int main()
{
	

//3. dichiaro e inizializzo le variabili
	char nome[]="";
	int lunghezza=0;

//4. input
	cout<<"Inserisci la parola: " <<endl;
	cin>>nome;

//5. logica - operazioni - algoritmo - output
	lunghezza = strlen(nome);
	if(lunghezza > 15)
		cout<<"La stringa e\' lunga";
	else
		if(lunghezza <= 15 && lunghezza >= 7)
			cout<<"La stringa e\' di media lunghezza";
		else
		cout<<"La stringa e\' corta";


//6. ritorno al sistema operativo
	return 0;
	
//7. fine del programma
}
