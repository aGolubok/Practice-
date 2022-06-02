#include <iostream>
#include <ctime>
#include <Windows.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int max = 0, min = 101, s=0;
	int a[100]; 
	int b[100];
	bool found = false;
	int i, n, l;
	cout << " Input the number of array elements n=";
	cin >> n; 
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
		cout << a[i] << " ";
	}
	for (i = 1; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{

			found = true;
			break;
		}
	}
	if (found)
	{
		for (i = 0; i < n; i++)
		{
			if ((a[i] % 2 == 0))
			{
				s += a[i];
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		if ((max < a[i]))
		{
			max = a[i];
		}
	}
	for (i = 0; i < n; i++)
	{
		if ((min > a[i]))
		{
			min = a[i];
		}
	}

	cout << "\nMax " << max << "\n Min " <<min <<endl;
	if (found)
		cout << "sum " << s << endl;
}