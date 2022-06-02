#include <iostream>
#include <iostream>
#include <Windows.h>
using namespace std;

char digit(int num)
{
    switch (num) {
    case 0: return '0';
    case 1: return '1';
    case 2: return '2';
    case 3: return '3';
    case 4: return '4';
    case 5: return '5';
    case 6: return '6';
    case 7: return '7';
    case 8: return '8';
    case 9: return '9';
    case 10: return 'A';
    case 11: return 'B';
    case 12: return 'C';
    case 13: return 'D';
    case 14: return 'E';
    case 15: return 'F';
    }
}
int dectox_int(int a, int p, char* s)
{
    int num = (int)a;
    int rest = num % p;
    num /= p;
    if (num == 0)
    {
        s[0] = digit(rest); return 1;
    }
    int k = dectox_int(num, p, s);
    s[k++] = digit(rest);
    return k;
}

int main()
{
    double a;
    char s[80] = { 0 };
    int p;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введите число: ";
    cin >> a;
    cout << "Введите основание системы счисления: ";
    cin >> p;
    int k = dectox_int((int)a, p, s);
    cout << s;
    cin.get(); cin.get();
    return 0;
}