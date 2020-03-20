#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int N = 1000000;
    double suma = 0;
    double k;
    for (k = 1; k <= N ; ++k)
    {
       suma += 1/(k*k);

    }
    cout << suma << "\n";

}
