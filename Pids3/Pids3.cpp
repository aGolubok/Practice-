#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;


int main()
{
    srand(time(0));
    int n;
    int const size = 100;
    int arr[size];
    cin >> n;

    for (int i = 0; i < n; ++i) 
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    sort(arr, arr + n); 
    cout << "\nSort Array"<<endl;
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    return 0;
}