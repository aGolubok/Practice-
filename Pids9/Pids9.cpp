#include <iostream>
#include <cmath>
#include <string>
#include <Windows.h>
using namespace std;

int StrToInt(string b)
{
    int l, M = 0;
    l = b.length(); //кількість символів
    for (int i = 0; i < l; i++)
    {
        M += (b[i] - '0') * pow(10, l - i - 1);
    }
    return M;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int N;
    string a;
    cout << "Введіть стрічку: ";
    getline(cin, a);
    N = StrToInt(a);
    cout << "Число: " << N << endl;
    system("pause");
    return 0;
}