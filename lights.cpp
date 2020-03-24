
class Lights{
private:
    bool r=true;
    bool y=false;
    bool g=false;
public:
bool red() const{
if(r==true){
return true;
}else{
return false;}
}
bool yellow() const{
if(y==true){
return true;
}else{
return false;}
}
bool green() const{
if(g==true){
return true;
}else{
return false;}
}

void flip(){
static int liczba=1;
if(liczba==0){r=true, y=false, g=false; }
else if(liczba==1){r=true, y=true, g=false; }
else if(liczba==2){r=false, y=false, g=true; }
else if(liczba==3){r=false, y=true, g=false; }
else{liczba=0; r=true, y=false, g=false;}
liczba++;
}

};



#include<iostream>
int main() {
std::cout << std::boolalpha;
Lights lights;
std::cout << lights.red() << " " << lights.yellow() << " " << lights.green() << std::endl;
lights.flip();
std::cout << lights.red() << " " << lights.yellow() << " " << lights.green() << std::endl;
lights.flip();
std::cout << lights.red() << " " << lights.yellow() << " " << lights.green() << std::endl;
lights.flip();
std::cout << lights.red() << " " << lights.yellow() << " " << lights.green() << std::endl;
lights.flip();
std::cout << lights.red() << " " << lights.yellow() << " " << lights.green() << std::endl;
lights.flip();
std::cout << lights.red() << " " << lights.yellow() << " " << lights.green() << std::endl;}
