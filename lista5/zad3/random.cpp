#include "random.h"
Random::Random(int f1):_fn(f1)
{
    assert( f1 > 0 and f1 < (pow(2,31) - 1) );
}

double Random::operator()()
{
    long long x = _fn;
    x *= 16807;
    x %= INT_MAX;
    _fn = static_cast<int>(x);
    return double(x) / double(INT_MAX - 1);
}