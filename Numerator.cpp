#include<iostream>
#include<fstream>



int main(int argc, char*argv[])
{
    std::ifstream input(argv[1]);
    std::ofstream output(argv[2]);
    int i=1, nowa=0;
    for(char znak; input.get(znak); ) {
        if(nowa==0) {
            output<<i<<" ";
            nowa++;
        }
        output<<znak;
        if(znak=='\n') {
            i++;
            nowa=0;
        }
    }
    input.close();
    output.close();




    return 0;
}
