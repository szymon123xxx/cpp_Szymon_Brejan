#include <iostream>
#include <vector>
#include <climits>

int funkcja(const std::vector<int> & tab)
{


    int minimalna;
    if (tab.empty())
    {   std::cout << "INT_MIN" << ": ";
        return INT_MIN ;}

    minimalna = tab[0];

    for( int i = 1; i < tab.size(); i++ )
    {
        if (minimalna > tab[i])
            minimalna = tab[i];
    }
    std::cout << "Minimalna" << ": ";
    return minimalna;
}

int main()
{
    std::vector<int> tab;
    tab = {3,2,5};

    std::cout << funkcja(tab) << std::endl;
    return 0;
}
