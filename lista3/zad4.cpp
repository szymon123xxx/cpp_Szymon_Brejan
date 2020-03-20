#include <iostream>

unsigned silnia(unsigned n)
{
    if (n == 0)
        return 1;
    else
        return n * silnia(n-1);
}

int main()
{

    for(int i = 0; i < +5 ; ++i)
        std::cout<< i << "! = " << silnia(i)<< "\n";
    // unsigned przyjmuje tylko wartosci >= 0 , w przypadku gdy deklarujemy go minusowego wyrzuca nam jego maksymalny zakres ktory jest >= 0 , w tym przypadku wyrzuca nam błąd
    // https://stackoverflow.com/questions/7152759/what-happens-when-i-assign-a-negative-value-to-an-unsigned-int?fbclid=IwAR0RYeL-ZiVemHS1jlSOlvMX5gD5LDS38FrH5UqTGp45GzswWf239SWmvsY

}
