#include<iostream>


int main()
{
    int count=0;
    for(bool logic; std::cin>>std::boolalpha>>logic; ) {

        if(logic==true) {
            count++;
        }
    }
    if(count%2==0) {
        std::cout<<std::boolalpha<<false;

    } else {
        std::cout<<std::boolalpha<<true;
    }

    return 0;
}
