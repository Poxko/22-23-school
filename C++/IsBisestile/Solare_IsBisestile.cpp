/*
	Name: Solare_IsBisestile
	Copyright: Colamonico Chiarulli
	Author: Antonio Solare
	Date: 15/02/23 13:32
	Description:  Scrivere un programma che, dato in input un anno a, dia in output se esso è bisestile.
*/

#include <iostream>
using namespace std;

bool IsBisestile(int anno)
{
	bool bisestile1;
	if(anno%4==0 && anno%100!=0 || anno%100==0 && anno%400==0)
		bisestile1=true;
	else
		bisestile1=false;
	
	return bisestile1;
}


int main()
{
	int anno1, anno2 , cont , cont2 =0;
		
	cout<<"Inserisci l'anno: ";
	cin>>anno1;
	
	bool bisestile = IsBisestile (anno1);
	
	if(bisestile==true)
		cout<<"L'anno e\' bisestile";
	else
		cout<<"L'anno non e\' bisestile";
}
