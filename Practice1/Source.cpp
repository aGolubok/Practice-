#include <iostream>
#include <conio.h>
#include <ctime>
using namespace std;
int i, n, k, f;
void main()
{
	const int size = 25;

	int *a = new int[size];
	int* b = new int[size];

	srand(time(0));
	cout << endl << "Enter Num of Elements (1-10) :" << endl;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
	}

	cout << endl << "Mas:" << endl;
	for (i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
		
	cout << endl << "Enter Num of Elements (1-10) :" << endl;
	cin >> k;
	for (i = 0; i < k; i++)
		b[i] = rand() % 128;

	cout << endl << "Mas2:" << endl;
	for (i = 0; i < k; i++)
		cout << b[i] << " ";
	cout << endl << "k = " ;
	cin >> f;
	for (i = 0; i < f; i++)
	{
		a[i] = a[i];
	}
	for (i = f; i < f + k; i++)
	{
		a[i] = b[i - f];
	}
	for (i = f + k; i <= n + k; i++)
	{
		a[i] = a[i - k];
	}
	cout << endl << "Result:" << endl;
	for (i = 0; i < n + k; i++)
		cout << a[i] << " ";
	

	delete[] a;
	delete[] b;
}