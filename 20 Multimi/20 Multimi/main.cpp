#include <iostream>
#include "Multime.h"
using namespace std;
int main()
{
	Multime A, B;
	A += 1;
	A += 7;
	A += 4;
	A += 5;
	A += 9;
	A += 3;
	A += 2;
	A += 6;
	A += 8;
	B += 1;
	B += 3;
	B += 7;
	B += 5;

	int v[100],i;
	A.Afisare();
	B.Afisare();
	A + B;
	A.Afisare();
	A - B;
	A.Afisare();
	A * B;
	A.Afisare();

	cout << A.Verif(13)<<'\n'; //0=false ;1=true
	cout << (A < B)<<'\n';//0=false ;1=true
	cout << (A == B)<<'\n';//0=false ;1=true
	return 0;
}