//librerie i/o
#include <iostream>
using namespace std;
// inizio blocco main
int main(){
	// dichiarazione e inizializzione delle variabili
	float altezza=0;
	float base=0;
	float ris=0;
	// fase di input delle variabili
	cout<<"Inserire l'altezza";
	cin>>altezza;
	cout<<"Inserire la base";
	cin>>base;
	// algoritmo
	ris=(base*altezza)/2;
	// fase di output dei risultati
	cout<<"L'area di questo triangolo e\' " <<ris;
	
	return 0;
}
