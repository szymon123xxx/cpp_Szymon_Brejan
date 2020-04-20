#include <iostream>
#include <string.h>
#include <stdio.h>
int main()
{
    char haslo[8];
    strcpy(haslo,"Ta.jnE!");
    for( ; ; )
    {
        std::cout << "Podaj Hasło";
        char tmp[8];
        std::cin >> tmp;
        if ( strcmp(tmp, haslo) == 0)
            break;
        std::cout << "przykro mi , haslo jest niepoprawne!\n";

    }
    std::cout << "witaj w systemie! \n";
    return 0;
    //Program nie działa tak jak w książce. Wydaje mi się że ten błąd został z biegiem czasu poprawiony i aktualnie w zainstniały sposób nie jesteśmy w stanie włamać się do serwera. strcmp porównuje każdy znak z hasłem i jeżeli któryś z nich nie jest taki sam to program się zapętla i należy znów podać hasło
}
