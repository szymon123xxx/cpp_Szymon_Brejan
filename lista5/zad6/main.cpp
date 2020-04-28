#include <iostream>

class X
{
    friend std::ostream& operator<< (std::ostream &, X const&);
private:
    int _x;
public:
    X (int arg) : _x(arg) { }
};

std::ostream& operator<< (std::ostream & F, X const & arg)
{
    return F << arg._x;
}

int main()
{
    X x(10);
    std::cout << x << "\n";
}

// operator << nie uzywa prywatnych skladowych klasy X dlatego sie kompiluje