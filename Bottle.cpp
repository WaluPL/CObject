class Bottle{
    private:
    double pojemnosc;

    public:
    Bottle(double pojemnosc ):pojemnosc(pojemnosc){}
    double ile_ma=0;
    double volume() const {
    return ile_ma; }

    double fill(double objetosc)
    {
    const double wynik=pojemnosc-ile_ma;

    if(objetosc>wynik){

        ile_ma=pojemnosc;
        return wynik;
    }
        ile_ma+=objetosc;
        return objetosc;
    }


    double pour(double objetosc){
    const double wynik=ile_ma-objetosc;

     if(objetosc>ile_ma){
        objetosc=ile_ma;
        ile_ma=0;
        return objetosc;
    }
        ile_ma-=objetosc;
        return objetosc;
    }

};

#include<iostream>

int main() {
Bottle bottle(4.5);
std::cout << bottle.volume() << " ";
std::cout << bottle.fill(3.5) << " ";
std::cout << bottle.volume() << " ";
std::cout << bottle.pour(2.5) << " ";
std::cout << bottle.volume() << std::endl; }



