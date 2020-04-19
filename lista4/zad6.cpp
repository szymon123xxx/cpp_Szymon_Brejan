#include <iostream>
#include <string.h>
#include <stdio.h>
#include <string>
int main()
{
    char haslo[8];
    strcpy(haslo,"12345");
    for( ; ; )
    {
        std::cout << "Podaj Hasło";
        char tmp[8];
        std::cin >> tmp;
        if ( sizeof(haslo) == sizeof(tmp) )
            break;
        std::cout << "przykro mi , haslo jest niepoprawne!\n";

    }
    std::cout << "witaj w systemie! \n";
    return 0;
}
