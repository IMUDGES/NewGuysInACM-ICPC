#include <iostream>
using namespace std;

int main(){
    bool bool_a = true/*#\makeremark{true是C++中的关键字，表示"真"。"假"为false}#*/;
    bool bool_b = 2/*#\makeremark{布尔类型可以赋值数字}#*/;
    bool bool_c = 0/*#\makeremark{0就代表false}#*/;

    cout<<"bool_a:"<<bool_a<<endl;
    cout<<"bool_b:"<<bool_b<<endl;
    cout<<"bool_c:"<<bool_c<<endl;

    cout<<"int value of bool_a:"<<(int)bool_a<<endl;
    cout<<"int value of bool_b:"<<(int)bool_b<<endl;
    cout<<"int value of bool_c:"<<(int)bool_c<<endl;

    bool_c = bool_c + 1;/*#\makeremark{布尔类型也是可以进行一些运算的！但此处的运算时经过隐含类型转换之后进行的}#*/
    cout<<"bool_c + 1 = "<<bool_c<<endl;

    bool_c = bool_c - 1;
    cout<<"bool_c - 1 = "<<bool_c<<endl;


    if(bool_c/*#\makeremark{布尔类型能够用来作为if的判断条件}#*/){
        cout<<"bool_c is true or something like"<<endl;
    }else{
        cout<<"bool_c is false or something like"<<endl;
    }

    short a = 385;
    short b = 130;
    cout<<"a & b = "<<(a&b)/*#\makeremark{用括号括起来是因为"<<"的优先级要比"\&"高}#*/<<endl;
    cout<<"a | b = "<<(a|b)<<endl;
    cout<<"~a = "<<(~a)<<endl;
    cout<<"~b = "<<(~b)<<endl;
    return 0;
}
