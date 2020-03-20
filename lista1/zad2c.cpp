#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    float j = 1;
    float n = 1000000;
    float sum = 0;
    for ( j = 1 ; j <= n; j++)
    {
        sum += 1 / ((2*j - 1)*(2*j - 1));
    }
    cout << "Pi obliczone " << sqrt(8 * sum) << endl;
    cout << "Prawdziwe PI " << M_PI << endl;
    cout << "Różnica " << sqrt(8 * sum) - M_PI;
}
