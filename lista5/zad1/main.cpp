#include <iostream>
#include "wektor.h"
int main() {
    wektor v(10);
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << "\n";
    }
    return 0;
}
