
#include <cstdlib>
class wektor
{
private:
    size_t _rozmiar;
    int* _ptab;
public:
    wektor(size_t n)
            : _rozmiar(n), _ptab(new int[n])
    {
        for (int i = 0; i < _rozmiar; i++) {
            _ptab[i] = 0;
        }
    }
    ~wektor()   { delete [] _ptab;}

    size_t  size() const    { return _rozmiar;}
    int operator [](int n) const { return  _ptab[n];}


    void  operator= (wektor const& wek);
};




