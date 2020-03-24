#include<cmath>

class Geometric{

private:
    double a0, q;

public:
    Geometric();
    Geometric(double a0, double q):a0(a0), q(q){}
    Geometric operator [](int n) const{

    return Geometric(q);

    }

};





#include<iostream>
int main() {
const Geometric geometric(1., 0.5);
std::cout << geometric[2] << std::endl; }
