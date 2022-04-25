#pragma once
#include<iostream>
#include<fstream>
using namespace std;
class Multime
{
public:
	int v[10001];
	int n;
	Multime();
	Multime(const Multime&);
	~Multime();
	int GetNr(); //Nr el multime
	void operator +(const Multime&);//Face reuniunea;
	void operator -(const Multime&);//Face diferenta;
	void operator *(const Multime&);//Face intersectia; 
	bool Verif(int x); //x apartine multimii;
	bool operator <(const Multime&); //A<B -incluziunea;
	bool operator ==(const Multime&);//verifica egalitatea;
	void operator +=(int x);//Operator supraincarcare;
	friend istream & operator>>(istream &is,Multime&);
	friend ostream& operator<<(ostream& os, Multime&);
	void Afisare();
};

