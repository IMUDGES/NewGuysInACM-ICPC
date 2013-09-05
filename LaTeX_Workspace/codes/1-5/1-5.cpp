#include <iostream>
using namespace std;
int main(){
    cout<<"------赋值与复合赋值------"<<endl;
    int a = 1;
    cout<<"a+=9 = "<<(a+=/*#\makeremark{这种"+=9"的方式就是复合赋值，其功能就是a=a+9，下面的"*=功能也一致"}#*/9)<<endl;
    cout<<"a*=10 = "<<(a*=10)<<endl;
    cout<<"a/=25 = "<<(a/=25)<<endl;

    cout<<"---特殊数学运算（求模）---"<<endl;
    int b = 123;
    cout<<"b%100 = "<<(b%/*#\makeremark{"\%"运算符是"取模"的意思，所谓取模就是计算余数，例如123\%100，就是指123除100后的余数。}#*/100)<<endl;

    cout<<"------后缀自增自减操作------"<<endl;
    int c = 10;
    cout<<"before d=c--, c = "<<c<<endl;
    int d = c--/*#\makeremark{"--"是一种一种自减操作，如同"c\-\-"的形式则是后缀自减操作，功能是"先用c的值，再c+=1"}#*/;
    cout<<"after d=c--, c = "<<c<<endl;
    cout<<"after d=c--, d = "<<d<<endl;

    cout<<"------前缀自增自减操作------"<<endl;
    int e = 10;
    cout<<"before f=--e, e = "<<e<<endl;
    int f = --/*#\makeremark{形如"--e"的形式是前缀自减操作，功能是"先e-=1，再用e的值"}#*/e;
    cout<<"after f=--e, e = "<<e<<endl;
    cout<<"after f=--e, f = "<<f<<endl;

    cout<<"----------关系运算----------"<<endl;
    int g = 10;
    int h = 11;
    cout<<"g == h? :"<<(g==h)<<endl;
    cout<<"g > h? :"<<(g>h)<<endl;
    cout<<"g < h? :"<<(g<h)<<endl;

    cout<<"----------逻辑运算----------"<<endl;
    bool i = true;
    bool j = false;
    cout<<"i&&j = "<<(i&&j)<<endl;
    cout<<"i||j = "<<(i||j)<<endl;
    cout<<"!i = "<<(i)<<endl;
    cout<<"!j = "<<(!j)<<endl;

    cout<<"--------条件运算符---------"<<endl;
    int k = g>h?g:h/*#\makeremark{条件运算符是一个三目运算符（三个操作数组成）。形式是："A?B:C"，即：当A成立则其值为B，不成立则为C。这种运算与我们后面讲到的if语句非常相似。在一些简单的情况下也可以相互替代。}#*/;
    cout<<"Bigger number between "<<g<<" and "<<h<<" is: "<<k<<endl;
    
    cout<<"---=-左运算符与右运算符-----"<<endl;
    cout<<"10<<1 = "<<(10<</*#\makeremark{对于数值类型，左右运算符的功能是"位移"}#*/1)<<endl;
    cout<<"10<<2 = "<<(10<<2)<<endl;
    cout<<"8>>1 = "<<(8>>1)<<endl;
    cout<<"8>>2 = "<<(8>>2)<<endl;
    
    cout<<"------复杂表达式例子-------"<<endl;
    int _a = 10;
    int _b = 10;
    bool _c = (!(_a==_b))?false:true;
    cout<<"_c = "<<_c<<endl;
    return 0;
}
