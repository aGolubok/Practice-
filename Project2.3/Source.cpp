#include <iostream>

using namespace std;

int main()
{
    short int a, b, result;
    cout << "1-st number" << endl; cin >> a;
    cout << " 2-nd number" << endl; cin >> b;
    cout << " Result" << endl; cin >> result;

    if (result == a * b) { cout << "True"; }
    else cout << "False, Correct answer " << a * b;
    return 0;
}