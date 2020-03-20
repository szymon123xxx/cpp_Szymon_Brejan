#include <iostream>
#include <math.h>
#include <chrono>
#include <vector>
using namespace std::chrono;

double fibo1(int n)
{

    if (n == 0 || n == 1)
        return n ;
    else
        return fibo1(n-1) + fibo1(n-2);
}

double fibo2(int n)
{
    double f;
    f = 1/sqrt(5) * ( pow((2/(sqrt(5)-1)),n) - pow((-2/(sqrt(5) -1)),n));
}


int main()
{
    int n = 48;
    auto start = high_resolution_clock::now();
    std::cout << "n" << n << "=" << fibo1(n) << std::endl;
    auto stop = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(stop - start);

    auto start2 = high_resolution_clock::now();
    std::cout << "n" << n << "=" << fibo1(n) << " 2 funkcja" << std::endl;
    auto stop2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(stop2 - start2);

    std::cout << "Czas pierwszej funkcji w mikrosekundach " << duration1.count()  << std::endl;

    std::cout << "Czas drugiejfunkcji w mikrosekundach " << duration2.count()  << std::endl;




    return 0;
}
