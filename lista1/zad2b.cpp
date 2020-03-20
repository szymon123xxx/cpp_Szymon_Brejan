#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float j = 1;
    float n = 1000000;
    float sum = 1;
    for ( j = 1 ; j <= n; j++)
    {
        sum *= 4*j*j/(4*j*j - 1);

    }
    cout << 2 * sum << endl;
    cout << "Różnica " << M_PI - 2*sum << endl;
}

