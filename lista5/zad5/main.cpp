#include <iostream>


#include <iostream>

class Samochod
{
public:
    Samochod (int n)
    : _kola (n), _sruby (4 * n)
    {
        std::cout << "Samochod z " << _kola << " Kolami i "<< _sruby << "srubami\n";
    }

private:
    int _kola;
    int _sruby;
};

int main() {
    Samochod s4(4);
    Samochod s12(12);
}
// pierwsza metoda to zamiana zmiennych kolejnosciami. Sruby na kola. Natomiast druga metoda to zamiast podawania 4 * _kola mozemy wstawic 4 * n