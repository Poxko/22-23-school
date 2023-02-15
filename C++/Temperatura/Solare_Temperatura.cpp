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
	
	
	for(i = 1; i < 6 ; i++)
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
	double media;
	
	for(i = 1; i < 6 ; i++)
	{
		cout << "Inserisci la temperatura numero " << i <<  ":";
		cin >> temp[i];
	}
	
	media = Temperatura(temp);
	
	cout << "La temperatura media e\' " <<media;
	
	
	
}
