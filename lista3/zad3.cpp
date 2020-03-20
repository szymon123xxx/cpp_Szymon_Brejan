#include <iostream>
#include <vector>

std::vector<double>operator*(std::vector<double> const& v, std::vector<double> const&w)
{
    std::vector<double> wynik(v.size());
    for(unsigned i = 0; i < v.size() and i < w.size(); ++i )
        wynik[i] = v[i] * w[i];
    return wynik;
}

std::ostream & operator << (std::ostream & F , std::vector<double> const& v)
{
    F << "(";
    if (!v.empty())
        F << v[0];
    for(unsigned i = 1; i < v.size(); ++i)
        F << "." << v[i];
    F << ")";
    return F;
}

int main()
{
    std::vector<double>v1(3);
    for(int i = 0; i<3; ++i)
        v1[i] = i;

    std::vector<double>v2(3);
    for(int i = 0; i<3; ++i)
        v2[i] = i;

    std::cout<<"v1 * v2" << v1 * v2 << "\n";

}
