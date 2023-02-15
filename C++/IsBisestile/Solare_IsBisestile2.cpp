/*
	Name: Solare_IsBisestile2
	Copyright: Colamonico Chiarulli
	Author: Antonio Solare
	Date: 15/02/23 13:32
	Description:  Scrivere un programma che, dati in input due anni, determini quanti anni bisestili sono compresi tra essi.
*/



#include <iostream>
using namespace std;

bool IsBisestile(int a)
{
	bool bisestile1;
	if(a%4==0 && a%100!=0 || a%100==0 && a%400==0)
		bisestile1=true;
	else
		bisestile1=false;
	
	return bisestile1;
}
int main()
{
	int anno1, anno2, i, ris=0;
		
	cout<<"Inserisci il primo anno: ";
	cin>>anno1;
	
	cout<<"Inserisci il secondo anno: ";
	cin>>anno2;
	
	for(i = anno1 ; i <= anno2 ; i++)
	{
		if(IsBisestile(i)==true)
			ris++;
	}
	
	cout<<"Ci sono " <<ris <<" anni bisestili";
}
