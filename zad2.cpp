#include <iostream>
#include <vector>
#include <climits>

double funkcja(std::vector<double> & tab)
{
    for( int i = 0; i < tab.size(); i++ )
    {
        tab[i] = 0;
        std::cout << tab[i] << std::endl;
    }
}

int main()
{
    std::vector<double> tab;
    tab = { 2.4 , 4.1 , 8 ,1 };
    funkcja(tab);
    return 0;
}
