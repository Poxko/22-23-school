#include <iostream>
#include <cmath>
using namespace std;

double CalcolaDelta(int a,int b,int c)
{
	double delta;
	delta = pow(b,2) -4*(a)*(c);
	
	return delta;
}

int main()
{
	double a , b , c , x1 , x2 = 0;
	
	cout << "Inserisci il coefficiente a: ";
	cin >> a ;
	cout << "Inserisci il coefficiente b: ";
	cin >> b ;
	cout << "Inserisci il coefficiente c: ";
	cin >> c ;
	
	double delta = CalcolaDelta(a , b , c);
	
	cout << endl << "Il risultasto del delta e\': " << delta;
	cout << endl;
	
	if (delta > 0)
	{
		x1 = -b + delta;
		x2 = -b - delta;
		cout << "I risultati di x1 e x2 sono: " << x1 << " , " << x2; 
	}
	else
		if (delta == 0)
		{
			cout << "Il risultato dell'equazione e\': " << -b;
		}
		else
		
			cout << "Equazione impossibile";
	
	return 0;
}
