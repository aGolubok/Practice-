#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, x;
    cout << "enter a: "; 
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    cout << "enter c: ";
    cin >> c;

    if ((b * b - 4 * a * c) >= 0)
    {
        x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a); cout << "First result " << x << endl;

        x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a); cout << "Second result " << x << endl;
    }
    else
    {
        cout << "D<0, Error." << endl;
    }

    return 0;
}