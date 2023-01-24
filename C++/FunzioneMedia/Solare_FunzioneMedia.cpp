/*
	Name: Solare_FunzioneMedia
	Copyright: Colamonico Chiarulli
	Author: Antonio Solare
	Date: 24/01/23 13:18
	Description: Scrivi una funzione CalcolaMedia(x,y) che dati in input due numeri reali, dia in output la loro media.
*/

#include <iostream>
using namespace std;

void CalcolaMedia(double x , double y)
{
	double media;
	media = ( x + y ) / 2;
	cout << "La media dei voti e\' " << media;
}

int main()
{
	double a , b = 0;
	
	cout << "Inserisci il primo numero ";
	cin >> a;
	cout << "Inserisci il secondo numero ";
	cin >> b;	
	
	CalcolaMedia(a , b);
	
	return 0;
}
