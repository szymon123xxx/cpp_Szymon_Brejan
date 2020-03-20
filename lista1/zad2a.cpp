`#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int j = 1;
    int n = 1000000;
    float sum = 0;
    int a = +1;
    for (j = 1 ; j <= n ; j++)
    {
        sum += a /(2*j - 1.0);
        a = -a;
    }
    cout << "Obliczone pi "<<  4*sum << endl;
    cout << "Różnica " << M_PI - 4*sum << endl;
}
