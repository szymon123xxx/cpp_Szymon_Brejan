#include <iostream>

using namespace std;

class Dwa
{
public:
    Dwa()
    {
        cout << "Kolejnosc ";
    }
    ~Dwa()
    {
        cout << "logiczna ";
    }
};

class Trzy
{
public:
    Trzy()
    {
    cout <<"i ";
    }
};

class Cztery
{
public:
    Cztery()
    {
        cout << "konstrukcji ";
    }
    ~Cztery()
    {
        cout << "jest ";
    }
};

class Raz:public Dwa
{
public:
    Raz()
    {
        Trzy trzy;
        cout << "destrukcji ";
    }
    ~Raz()
    {
        cout << "obiektow ";
    }
private:
    Cztery _cztery;
};


int main()
{
    Raz raz;
    return 0;
}
