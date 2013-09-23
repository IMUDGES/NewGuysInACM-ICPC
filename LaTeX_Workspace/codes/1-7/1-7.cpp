#include <iostream>
#include <cmath>/*#\makeremark{cmath是C++中的数学函数库，其中可以使用sqrt、pow等数学功能}#*/
using namespace std;


void showInt(int number)/*#\makeremark{这里就是函数的原型，在C++中，任何变量甚至是函数都需要"先定义，后使用"}#*/;
bool isPrimeNumber(int/*#\makeremark{函数参数可以像上一行中"包含了参数名"，也可以像此处"只有参数类型，没有参数名。"}#*/);
float distance(float,float,float,float/*#\makeremark{函数内可以有多个参数}#*/);

int main(){
    cout<<"------不使用函数时的情况--------"<<endl;
    
    cout<<"Hello there! ";
    cout<<"the number is "<<1<<endl;
    
    cout<<"Hello there! ";
    cout<<"the number is "<<4<<endl;

    cout<<"Hello there! ";
    cout<<"the number is "<<10<<endl;

    cout<<"---------使用函数时的情况-----------"<<endl;
    showInt(1);
    showInt(4);
    showInt(10);
    
    cout<<"------------函数返回值--------------"<<endl;
    for(int i=1;i<20;i++){
        if(isPrimeNumber(i)){
            cout<<"Find a prime number: "<<i<<endl;
        }
    }

    cout<<"Distance from (1,1) to (4,5) is "<<distance(1,1,4,5)<<endl;

    return 0;
}

void showInt(int number)/*#\makeremark{函数的实现，如同main函数一样。}#*/{
    cout<<"Hello there! ";
    cout<<"the number is "<<number<<endl;
    return;
}

bool isPrimeNumber(int number)/*#\makeremark{这个函数用来验证参数'number'是不是质数，是质数则返回true，不是则返回false}#*/{
    if(number==1)   //1不是质数
        return false;
    if(number==2)   //2是质数
        return true;
    for(int i=2;i<number;i++){
        if(number%i==0)
            return false;
    }
    return true;
}

float distance(float x1,float y1, float x2, float y2){
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));/*#\makeremark{pow(a,b)函数的功能是求a的b次方。sqrt(a)函数的功能是求a的平方根}#*/
}
