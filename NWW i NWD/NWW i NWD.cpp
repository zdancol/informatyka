

#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Podaj dwie liczby do NWD ";
	cout << endl;
	cout << "wpisz pierwsza liczbe";
	cout << endl;
	cin >> a;
	int b;
	cout << "wpisz druga liczbe";
	cout << endl;
	cin >> b;
	int iloczyn;
	while (a != b)
	{
		if (a < b) {
			b = b - a;
		}
		else { a = a - b; }
	}
	cout << "NWD tych dwuch liczb to ";
	cout << a;
	cout << endl;
	cout << endl;
	cout << "Podaj dwie liczby do NWW ";
	cout << endl;
	cout << "wpisz pierwsza liczbe ";
	cin >> a;
	cout << "wpisz druga liczbe ";
	cin >> b;

	iloczyn = a * b;

	while (a != b) {
		if (a < b) {
			b = b - a;
		}
		else { a = a - b; };
	}
	int nww = iloczyn / a;
	cout << "NWW tych dwoch liczb to ";
	cout << nww;
}

