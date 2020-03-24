#include<iostream>
#include<vector>
std::vector<int>::iterator find( const std::vector<int>::const_iterator begin, const std::vector<int>::const_iterator end, int liczba){
auto iter=begin;
int a=0;
for(auto i=begin; i<end;i++)
{
   if(*i==liczba){
   iter=i;
   a++;
   break;
    }
}
if(a==0){iter=end;}
}


int main() {
const std::vector<int> vector {2, -1, 15};
std::cout << find(vector.begin(), vector.end(), 2) - vector.begin() << std::endl; }


