#include <iostream>
#include "random.h"

using namespace std;

int main()
{
    Random x;
    for (int i = 0; i < 100; i++)
    {
        cout << x() << endl;
    }
}