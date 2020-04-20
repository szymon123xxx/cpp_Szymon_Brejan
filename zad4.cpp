#include<iostream>

int main()
{
    double tab[10];
    double x;
    std::cout << &x << "\t" << &tab[-1] << "\n";

    // W tym przypadku gdy wywołaliśmy adres tablicy od argumentu który jest p`oza zakresem tablicy wprowadziło nas to do adresu zmiennej x.
}
