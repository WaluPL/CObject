#include<iostream>
#include<vector>
#include<fstream>
#include<iomanip>
int main(int argc, char *argv[])
{
    std::ifstream input(argv[1]);
    std::vector<int>v1;
    std::vector<char>v2;
    int liczba=0, liczba2=0, wynik=0, jedn=0, dzies=0, setk=0, tys=0;
    int i=0, ilosc=0;

    for(char znak2; input.get(znak2);)
    {
        if(znak2!=' ')
        {
            if(znak2==':')
            {
                if(liczba2>99)
                {
                    i=4;
                }
                else
                {
                    i=3;
                }
            }
            else
            {
                liczba2*=10;
                liczba2+=znak2-'0';
                i++;
                if(i==5)
                {
                    v1.push_back(liczba2);

                }
            }
        }
        else
        {
            i=0;
            liczba2=0;
        }
    }

    for(char znak1; std::cin.get(znak1);)
    {
        if(znak1==':'||znak1=='\n'||znak1==' ') {}

        else
        {
            liczba*=10;
            liczba+=znak1-'0';
        }
        if(znak1=='\n'||znak1==' ')
        {
            for(int i=0; i<v1.size(); i++)
            {   if(ilosc>0){std::cout<<" "; ilosc=0;}
                if(liczba<=v1[i])
                {
                    wynik=v1[i];
                    jedn=(wynik%10);
                    dzies=((wynik/10)%10);
                    setk=((wynik/100)%10);
                    tys=((wynik/1000)%10);
                    if(tys!=0)
                    {
                        v2.push_back('0'+tys);
                    }
                    v2.push_back('0'+setk);
                    v2.push_back(':');
                    v2.push_back('0'+dzies);
                    v2.push_back('0'+jedn);
                    for(int j=0; j<v2.size(); j++)
                    {
                        std::cout<<v2[j];
                    }
                   v2.clear();
                    liczba=0;
                    ilosc++;
                    break;
                }
                else if(v1[v1.size()-1]<liczba)
                {
                    wynik=v1[0];
                    jedn=(wynik%10);
                    dzies=((wynik/10)%10);
                    setk=((wynik/100)%10);
                    tys=((wynik/1000)%10);
                    if(tys!=0)
                    {
                        v2.push_back('0'+tys);
                    }
                    v2.push_back('0'+setk);
                    v2.push_back(':');
                    v2.push_back('0'+dzies);
                    v2.push_back('0'+jedn);
                    for(int j=0; j<v2.size(); j++)
                    {
                        std::cout<<v2[j];

                    }
                   v2.clear();
                    liczba=0;
                    ilosc++;
                    break;
                }
            }
        }
    }
    input.close();
    return 0;
}
