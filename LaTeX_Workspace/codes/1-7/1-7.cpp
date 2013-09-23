#include <iostream>
using namespace std;

int main(){
    int a = 0;
    float b = 0;

    cout<<(&a)<<endl;
    cout<<(&b)<<endl;

    cout<<(&"aaa")<<endl;
    cout<<(&"bbb")<<endl;
    return 0;
}
