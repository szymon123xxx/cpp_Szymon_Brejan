#include <iostream>
#include "stos.h"

int main(){
    Stos stos;
    for (int i=1; i<=20; i++){
        stos.push(i);
    }
    stos.pop();
    std::cout << stos._size << "\n";
    stos.pop();
    stos.pop();
    stos.pop();
    std::cout << stos._size << "\n";
    stos.pop();
    stos.pop();
    stos.pop();
    stos.pop();
    std::cout << stos._size << "\n";
    stos.pop();
    stos.pop();
    stos.pop();
    std::cout << stos._capacity << "\n";
    std::cout << stos._size << "\n";
    stos.pop();
    std::cout << stos._capacity << "\n";
    std::cout << stos._size << "\n";
    stos.pop();
    std::cout << stos._capacity << "\n";
    std::cout << stos._size << "\n";
}