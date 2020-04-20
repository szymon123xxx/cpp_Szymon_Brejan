#include <iostream>

using namespace std;


int main()
{
    double tablica1[100];
    double* wsk = tablica1;
    cout << *wsk << endl;
    return 0;
}


// czemu bez & nie chce sie wywołać meijsce zapisu zmiennnej
