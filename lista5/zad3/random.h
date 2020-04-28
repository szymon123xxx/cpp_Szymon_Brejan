#include <ctime>
#include <cassert>
#include <climits>
#include <cmath>

class Random
{
    int _fn;
public:
    Random(int f1 = time(0));
    double operator()();
};