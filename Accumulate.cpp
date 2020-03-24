#include<iostream>
#include<vector>

double accumulate(std::vector<double>::iterator begin, std::vector<double>::iterator end ){
double sum;
for(auto il=begin;il<end;il++){
if(il==begin){}else{
*il+=sum;
}
sum=(*il);
}
}

int main() {
std::vector<double> vector {2.3, -1.5, 15.1, 0.3, 8, 0, 12.5, -0.5, 9.7, 10.5};
accumulate(vector.begin()+2, vector.begin() +7);
for (double element: vector) {
std::cout << element << " "; }
std::cout << std::endl; }
