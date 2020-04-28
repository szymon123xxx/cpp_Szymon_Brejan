
#include "wektor.h"

void wektor::operator=(const wektor &wek) {
    if (this == &wek)
        return;

    delete [] _ptab;
    _rozmiar = wek._rozmiar;
    _ptab = new int [_rozmiar];
    for (size_t i = 0; i < _rozmiar; i++)
        _ptab[i] = wek._ptab[i];
}
