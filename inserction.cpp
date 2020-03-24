#include<iostream>
#include<vector>

std::vector<int> intersection(const std::vector<int> &v1, const std::vector<int> &v2)
{
    int w1=v1.size();
    int w2=v2.size();
    std::vector<int> v3;
    for(int i=0; i<w1; i++) {
        for(int j=0; j<w2; j++) {
            if(v1[i]==v2[j]) {
                v3.push_back(v1[i]);

            }
        }

    }
    return v3;
}
int main () {
for (int element: intersection(std::vector<int> {-7, 2, 3, 7, 15, 18, 23},
std::vector<int> {-8, 3, 5, 8, 15, 23, 30})) {
std::cout << element << " "; }
std::cout << std::endl; }
