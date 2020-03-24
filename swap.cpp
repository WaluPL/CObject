#include<iostream>

void swap(double &a, double &b){
double x;
x=b;
b=a;
a=x;
}



int main() {
double a = 2.71828, b = 3.14159;
swap(a, b);
std::cout << a << " " << b << std::endl; }

