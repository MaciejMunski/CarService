#include <iostream>
#include <math.h>

using namespace std;

template<typename T>
T* extend(T* a, int size, int newsize) {
	T* b = new int[newsize];
	for (int i = 0; i < size; i++)
		b[i] = a[i];
	delete[] a;
	return b;
}

template<typename T>
void print(T* t, int size, char sep) {
	cout << t[0];
	for (int i = 1; i < size; i++) {
		cout << sep << t[i];
	}
	cout << endl;
}

//Napisz funkcjê power, która przyjmie jako argumenty : liczbê n dowolnego typu oraz liczbê p typu int i policzy wartoœæ n^ p, 
//zwracaj¹c wynik o takim samym typie jak liczba n.

template <typename T>
int power(T* n, int p) {
	int p;
	T n;
	T wynik = 1;
	cin >> n >> p;
	wynik = pow(n, p);
	return wynik;
}

