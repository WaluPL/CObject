#include<iostream>


int main()
{
    int hh, mm;
    std::cin>>hh>>mm;
    if(hh<=24&&mm<=59) {
        if(hh==10&&mm>=30||hh==18&&mm<30) {
            std::cout<<std::boolalpha<<true;
        } else {
            if(hh>=11&&hh<=17) {
                std::cout<<std::boolalpha<<true;
            } else {
                std::cout<<std::boolalpha<<false;

            }
        }
    } else {
        std::cout<<std::boolalpha<<false;

    }

    return 0;
}
