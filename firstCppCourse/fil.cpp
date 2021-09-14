#include <iostream>
#include <numeric>

using namespace std;
int main()
{
    int n=gcd(2,3);
    // figured out how it is correct to compile cpp
    //files in order to use lastest c++17 version!
    // g++ --std=c++17 -o ./filename ./filename.cpp
    cout<<n;
    return 0;
}
