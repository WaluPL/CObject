#include<iostream>
#include<vector>


int main()
{
    int wielkosc;
    std::vector<double> v1, v2;
    for(double liczba; std::cin>>liczba;) {
        v1.push_back (liczba);
    }
    wielkosc=v1.size()-1;
    for(int i=0; wielkosc>=0; i++) {
        v2.push_back(v1[wielkosc]);
        std::cout<<v2[i]<<" ";
        wielkosc--;
    }
    return 0;
}
