#include "Multime.h"
#include <iostream>
Multime::Multime()
{
	n = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		v[i] = 0;
	}
}

Multime::Multime(const Multime& C)
{
	n = C.n;
	for (int i = 0; i < n; i++)
		this->v[i] = C.v[i];
}

Multime::~Multime()
{
	for (int i = n - 1; i >= 0; i--)
		v[i] = 0;
}

int Multime::GetNr()
{
	int nr = 0;
	for (int i = 0; i <= n - 1; i++)
		if (this->v[i] == 1)
			nr++;
	return nr;
}

void Multime::operator+(const Multime& B)
{
	if (this->n <= B.n)
		this->n = B.n;
	for (int i = 0; i <= n - 1; i++)
		if (B.v[i] == 1)
			this->v[i] = 1;
}

void Multime::operator-(const Multime& B)
{
	for (int i = 0; i <= n - 1; i++)
		if (B.v[i] == 1)
			this->v[i] = 0;
}
void Multime::operator*(const Multime& B)
{
	int maxx,i;
	if (B.n > this->n)
		maxx = B.n;
	else
		maxx = this->n;

	for (i = 0; i < maxx; i++)
		if ((this->v[i] != 1 * B.v[i]) == 0)
			this->v[i] = 0;
}

bool Multime::Verif(int x)
{
	if (x<n && this->v[x] == 1)
		return true;
	return false;
}

bool Multime::operator<(const Multime& B)
{
	int i;

	for ( i = 0; i <= n-1; i++)
		if (this->v[i]==1 && B.v[i] == 0)
			return false;
	if(i==n)
	return true;
}

bool Multime::operator ==(const Multime& B)
{
	int maxx,i;
	if (B.n > this->n)
		maxx = B.n;
	else
		maxx = this->n;

	for (i = 0; i < maxx; i++)
		if (this->v[i] * B.v[i] == 0)
			return false;

			return true;
}

void Multime::operator +=(int x)
{
	if (x > n - 1)
		n = x + 1;
	v[x] = 1;
}


void Multime::Afisare()
{
	for (int i = 0; i < n; i++)
		if (this->v[i] == 1)
			std::cout << i << ' ';
	std::cout << '\n';
}

istream& operator>>(istream& is, Multime&B)
{
	int x,nrEl;
	B.n = 0;
	is >> nrEl;
	for (int i = 0; i < nrEl; i++)
	{
		is >> x;
		B.v[x] = 1;
		if (x > B.n)
			B.n = x;
	}
	return is;

}

ostream& operator<<(ostream& os, Multime&B)
{
	os << B.n << '\n'; //Pana unde se duc nr in vect de frecv.
	for (int i = 0; i <= B.n; i++)
		if (B.v[i] == 1)
			os << i << ' ';
	return os;
}
