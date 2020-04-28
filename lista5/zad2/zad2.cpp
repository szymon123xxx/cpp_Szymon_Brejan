#include <iostream>
#include <cmath>
class Zespolona
{
    friend std:: ostream& operator<<(std:: ostream &result, Zespolona const &x){
        result << x.rzecz << "+" << x.zesp << "i" << std::endl;
        return result;
    }

    friend std:: istream& operator>>(std:: istream &result, Zespolona &x){
        std::cout << "Podaj liczbę rzeczywistą: " << std::endl;
        result >> x.rzecz;
        std::cout << "Podaj liczbę urojoną: ";
        result >> x.zesp;
        return result;
    }
public:
    double rzecz , zesp;

    Zespolona(double re = 0 , double im = 0)
    {
        rzecz = re;
        zesp = im;
    }

    Zespolona operator+(Zespolona const& x) const
    {
        Zespolona result;
        result.rzecz = rzecz + x.rzecz;
        result.zesp = zesp + x.zesp;
        return result;
    }

    Zespolona operator-(Zespolona const& x) const
    {
        Zespolona result;
        result.rzecz = rzecz - x.rzecz;
        result.zesp = zesp - x.zesp;
        return result;
    }

    Zespolona operator*(Zespolona const& x) const
    {
        Zespolona result;
        result.rzecz = rzecz * x.rzecz - zesp * x.zesp;
        result.zesp = rzecz * x.zesp + zesp * x.rzecz;
        return result;
    }

    Zespolona operator/ (Zespolona const& x)const
    {
        Zespolona result;
        double pierw = pow(x.rzecz,2) + pow(x.zesp,2);
        result.rzecz = ((rzecz * x.rzecz) + (zesp * x.zesp)) / pierw;
        result.zesp = ( (rzecz * ( - x.zesp)) + (zesp * x.rzecz )) / pierw;
        return result;
    }

    ~Zespolona() =default;


};

int main()
{
    Zespolona z1(2,2);
    Zespolona z2;

    std::cout << "Podaj liczbę zespoloną: ";
    std::cin >> z2;

    std::cout << z1 + z2;
    std::cout << z1 - z2;
    std::cout << z1 * z2;
    std::cout << z1 / z2;

}

