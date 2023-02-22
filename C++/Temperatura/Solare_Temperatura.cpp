/*
	Name: Solare_Temperatura
	Copyright: Colamonico Chiarulli
	Author: Antonio Solare
	Date: 15/02/23 13:47
	Description: Dati in input due vettori di sei numeri interi contenenti le temperature minime registrate in due giorni diversi nei capoluoghi di provincia pugliesi, calcolare la media di ciascun giorno, dare in output la media stessa e dire quale vettore ha la media più alta.
*/

#include <iostream>
using namespace std;

double Temperatura(double temp[])
{
	int i;
	double somma,media=0;
	
	
	for(i = 1; i < 7 ; i++)
	{
		somma += temp[i];
	}
	
	media = somma/6;
	
	return media;
}

int main()
{
	const int MAX=100;
	double temp[MAX];
	int i;
	double media1 , media2;
	
	for(i = 1; i < 7 ; i++)
	{
		cout << "Inserisci la temperatura numero " << i << " del primo giorno: ";
		cin >> temp[i];
	}
	
	media1 = Temperatura(temp);
	
	
	for(i = 1; i < 7 ; i++)
	{
		cout << "Inserisci la temperatura numero " << i << " del secondo giorno: ";
		cin >> temp[i];
	}
	
	media2 = Temperatura(temp);
	
	cout << "La temperatura media del primo giorno e\': " << media1;
	cout << endl;
	cout << "La temperatura media del secondo giorno e\': " << media2;
	cout << endl;
	
	if(media1>media2)
		cout << "La temperatura media e\' piu\' alta durante il primo giorno";
	else
		cout << "La temperatura media e\' piu\' alta durante il secondo giorno";
}
