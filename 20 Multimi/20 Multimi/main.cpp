#include <iostream>
#include<fstream>
#include "Multime.h"
using namespace std;
int main()
{
	Multime A, B;
	
	//cin >> A;//Exemplu operator citire
	//cin >> B;
	//cout << A.GetNr() << ' ' << B.GetNr() << '\n';

	//cout << A << '\n';//Exemplu operator afisare.
	//cout << B << '\n';
	
  //Asta ca sa le viualizez mai usor  dar putem folosi si cele de mai sus(am facut un opwerator de supra-incarcare +=).
	A += 1;
	A += 7;
	A += 2;
	A += 4;
	A += 5;
	A += 9;
	A += 3;
	A += 6;
	A += 8;
	B += 1;
	B += 3;
	B += 7;
	B += 5;
	B += 10;

	cout << A.GetNr() << ' ' << B.GetNr() << '\n';

	Multime C;
	C = A;
	C * B;
	C.Afisare();

	C = A;
	C - B;
	C.Afisare();

	C = A;
	C + B;
	C.Afisare();


	C = A;
	cout << C.Verif(13)<<'\n'; //0=false ;1=true
	C = A;
	cout << (C < B)<<'\n';//0=false ;1=true
	C = A;
	cout << (C == B)<<'\n';//0=false ;1=true

	return 0;
}