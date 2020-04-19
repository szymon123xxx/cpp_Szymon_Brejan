#include<iostream>
#include<time.h>
main()
{
    clock_t  t;
    t = clock();
    for(unsigned n =1 ; n <= 8660000; ++n)
    {
        int *p = new int[n];
        delete []p;
    }
    t = clock() - t;
     double time_taken = ((double)t)/CLOCKS_PER_SEC;
     std::cout << "Czas: " << time_taken << std::endl;
     std::cout << "Czas pojedyńczej instrukcji new/delete: " << time_taken/8660000 << std::endl;
     clock_t start, koniec;
     int num = 1;
     start = clock();

     for (unsigned n = 1; n <= 8660000; ++n){
        num++;
     }
     koniec = clock() - start;
     std::cout << "Czas pojedynczego dodawania: " <<(((double)koniec)/CLOCKS_PER_SEC)/8660000 << std::endl;

     return 0;
}
