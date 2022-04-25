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

Multime::~Multime()
{
	for (int i = n - 1; i >= 0; i--)
		v[i]=0;
	delete v;
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
	for (int i = 0; i <= n - 1; i++)
		if (this->v[i] != 1 or B.v[i] == 0)
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
	for (int i = 0; i <= n - 1; i++)
		if (this->v[i] == 1 && B.v[i] == 0)
			return false;
	return true;
}

bool Multime::operator ==(const Multime& B)
{
	for (int i = 0; i <= n - 1; i++)
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
