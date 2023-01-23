//librerie i/o
#include <iostream>
using namespace std;
int main(){
	// dichiarazione e inizializzazione delle variabili
	int num=0;
	int esp=0;
	int cont=0;
	int ris=1;
	// fase di input delle variabili
	cout<<"Inserire il numero";
	cin>>num;
	cout<<"Inserire l'esponente";
	cin>>esp;
	//algoritmo
	while(esp>cont)
	{
		ris=ris*num;
		cont=cont+1;	
	}
	// fase di output dei risultati
	cout<<"Il risultato e\' " <<ris;
	
	return 0;
}
