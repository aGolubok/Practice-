#include <iostream> 
#include "fstream"
using namespace std;



void main()
{
    ifstream in("input.txt");
    int array[5];
    in >> array[5];
    int min = array[0];
    for (int i = 1; i < 5; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    ofstream out("output.txt");
    out << min;
    in.close();
    out.close();

}