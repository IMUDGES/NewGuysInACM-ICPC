#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 11;
    if/*#\makeremark{if语句又叫"条件语句"，是选择语句的一种。}#*/(a>b){
        cout<<"a is greater than b."<<endl;
    }else if(a<b){
        cout<<"a is less than b."<<endl;
    }else if(a==b){
        cout<<"a is equal to."<<endl;
    }else{
        cout<<"it can't happen!"<<endl;
    }
    
    char c = ';';
    switch/*#\makeremark{switch语句又叫"开关语句"，是选择语句的一种。}#*/(c){
        case ',':
            cout<<"这是一个逗号"<<endl;
            break/*#\makeremark{break;语句能够用来跳出这个switch语句。}#*/;
        case '.':
            cout<<"这是一个句号"<<endl;
            break;
        case ':':
            cout<<"这是一个冒号"<<endl;
            break;
        case ';':
            cout<<"这是一个分号"<<endl;
            break;
        default:
            cout<<"我也不知道这是个神马符号"<<endl;
            break;
    }
    
    int d = 1;
    int sum_d = 0;
    while/*#\makeremark{while语句是一种循环语句。}#*/(d<=100){
        sum_d += d;
        d++;
    }
    cout<<"while: 1 + 2 + 3 + ... + 100 = "<<sum_d<<endl;

    char e = 'a';
    do{
        cout<<e<<" ";
        e++;
    }while(e<='z');
    cout<<endl;
    
    int sum_f = 0;
    for/*#\makeremark{for语句也是一种循环语句。}#*/(int f=1;f<=100;f++){
        sum_f += f;
    }
    cout<<"for: 1 + 2 + 3 + ... + 100 = "<<sum_f<<endl;
    
    
    for(int i=1;true;i++){
        if(i==50)
            break/*#\makeremark{break语句可以用来跳出循环。}#*/;
        else if(i%2==0)
            continue/*#\makeremark{continue语句用来"跳过本次循环体。"}#*/;
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}
