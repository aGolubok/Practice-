#include <iostream>
#include "windows.h"

using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    unsigned int count = 0;
    int cost = 0;
    char discont = 'n';
    double valueDiscont = 0.05;

    cout << "������ ������� ������: "; cin >> count;
    cout << "������ ���� �� �������: "; cin >> cost;

    cost *= count;

    if (cost > 500) {

        unsigned int i = 0;

        cout << "Discont - 5%" << endl;
        cost = cost - (cost * valueDiscont );
    }
    cout << "����: " << cost << endl;


    system("PAUSE");
    return EXIT_SUCCESS;

}