#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>

int main(int argc, char*argv[]){

std::ifstream input(argv[1]);
std::vector<std::string>punktMax, NazwiskaDane, Nazwiska;
std::vector<double>osiagniete, srednie;
double sumaPunktow=0., konwersja=0., suma=0, sumasrednia=0;
int rozmiar, rozmiar1;

    for (std::string line; std::getline(input, line);) {
    std::string word;
        for (std::istringstream stream(line); stream >> word;){
                double ocenaMax; char nazwa;
            if (std::istringstream (line) >> ocenaMax) {
                punktMax.push_back(word);}
            else if(std::istringstream (line) >> nazwa){
                NazwiskaDane.push_back(word);
            }
        }
    }

    for(int i=0; i<NazwiskaDane.size();i=i+punktMax.size()+1){
            Nazwiska.push_back(NazwiskaDane[i]);
    }
            rozmiar1=Nazwiska.size();
            rozmiar=NazwiskaDane.size();
    for(int i=0; i<rozmiar-rozmiar1;i=i+punktMax.size()){
            NazwiskaDane.erase(NazwiskaDane.begin() + i);
    }
    for(int i=0; i<NazwiskaDane.size();i++){
    osiagniete.push_back(std::stod(NazwiskaDane[i]));
    }

int j=0;
int ilosc=1;
    for(int i=0;i<Nazwiska.size();i++){
        std::cout<<Nazwiska[i]<<" ";
                while(j<osiagniete.size()){
                        if(ilosc==punktMax.size()){
                        suma+=osiagniete[j];
                        ilosc=1; j++; break;}
                        else{suma+=osiagniete[j];ilosc++; j++;
                        }
                }
    std::cout<<suma<<" ";
    suma=0;
    std::cout<<std::endl;
    }
    std::cout<<std::endl;

j=0; int z=0, rozmiarowo;
rozmiarowo=punktMax.size();
    for(int i=0;i<punktMax.size();i++){
        sumasrednia+=osiagniete[i];
        while(j<osiagniete.size()){
            if(j=rozmiarowo){
            sumasrednia+=osiagniete[j];
            rozmiarowo+=punktMax.size();
            }
            j++;
        }z++;
            rozmiarowo=punktMax.size()+z;
            sumasrednia=sumasrednia/Nazwiska.size();
            srednie.push_back(sumasrednia);
            sumasrednia=0; j=0;
    }
    for(int i=0; i<punktMax.size();i++){
    std::cout<<i+1<<" "<<srednie[i]<<std::endl;
    }
return 0;
}
