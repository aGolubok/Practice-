#include <iostream>
#include <ctime>
using namespace std;

void Merge(int* A, int first, int last)
{
	int middle, start, final, j;
	int* mas = new int[100];
	middle = (first + last) / 2; 
	start = first; 
	final = middle + 1; 
	for (j = first; j <= last; j++) 
		if ((start <= middle) && ((final > last) || (A[start] < A[final])))
		{
			mas[j] = A[start];
			start++;
		}
		else
		{
			mas[j] = A[final];
			final++;
		}
	for (j = first; j <= last; j++) A[j] = mas[j];
	delete[]mas;
};

void MergeSort(int* A, int first, int last)
{
	{
		if (first < last)
		{
			MergeSort(A, first, (first + last) / 2); 
			MergeSort(A, (first + last) / 2 + 1, last);
			Merge(A, first, last); 
		}
	}
};
int main()
{
	int i, n;
	int* A = new int[100];
	cout << "Array size > "; cin >> n;
	for (i = 1; i <= n; i++)
	{
		A[i] = rand() % 100;
	}
	cout << "\nArray: \n";
	for (i = 0; i < n; i++)
	{cout << A[i] << " "; }
		

	MergeSort(A, 1, n); 
	cout << "Sort array: "; 
	for (i = 1; i <= n; i++) cout << A[i] << " ";
	delete[]A;
	
	return(0);
}