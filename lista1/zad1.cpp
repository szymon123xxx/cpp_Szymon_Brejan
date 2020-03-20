#include <iostream>

using namespace std;

int main()
{
    int i ;
    int silnia = 1;
    for (i = 1 ; i < 40 ;  i++)
    {
        silnia *= i ;
        cout << i <<  " silnia =" << silnia << endl;
    }
}
