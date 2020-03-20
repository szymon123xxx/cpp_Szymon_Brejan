#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float i = 1;
    double wynik;
    float a;
    float t = 1/sqrt(3);
    for (i = 1 ; i <= 30 ; i++)
    {
        wynik = ( sqrt(( t * t ) +1 ) - 1 ) / t;
        t = wynik;
        a = 6 * pow(2,i) * t;
        cout << "i = "<< i << ",a = "<<a << endl;

    }
    cout << wynik << endl;
}
