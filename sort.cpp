#include <iostream>
#include <string>
#include<vector>

int main(){

std::vector<std::string>result;

for(std::string line; std::getline(std::cin, line);){
    char spacja = ' ';
    std::string::size_type b = 0;
    while ((b = line.find_first_not_of(spacja, b)) != std::string::npos) {
        auto e = line.find_first_of(spacja, b);
        result.push_back(line.substr(b, e-b));
        b = e;
    }
    for(int i=1; i<result.size();i++){
        for (int j=0; j<(result.size()-1);j++)
        {
                if(result[j]>result[j+1])
                {
                std::string const temp=result[j];
                result[j]=result[j+1];
                result[j+1]=temp;
                }
        }
    }
}
for(int i=0; i<result.size();i++){
                std::cout<<result[i];
                if(i!=result.size()-1){
                std::cout<<" ";
                }
    }
return 0;}
