#include <iostream>
#include <bitset>/*#\makeremark{bitset中包含了用来输出二进制的功能。在一些竞赛题中会出现类似"将十进制转换为二进制"的问题\footnote{例如将点分十进制的IP地址转换为二进制形式}，所以可以善用此工具。}#*/

using namespace std;

int main(){
    //测试不同数据类型占用内存大小
    cout<<"Size of char:\t"/*#\makeremark{"$\backslash$t"表示了一个制表符中的tab键,经常作对齐之用。（什么是制表符？）}#*/<<sizeof(char)/*#\makeremark{sizeof是C语言中的一个关键字，用来计算内存大小。括号中可以填入数据类型、结构体、甚至是变量或常量。返回结果是一个unsigned long类型的数值，表示括号中内容在内存中占用了多少个字节(byte)的空间。这个关键字在C++中非常常用！}#*/<<endl;
    cout<<"Size of short:\t"<<sizeof(short)<<endl;
    cout<<"Size of int:\t"<<sizeof(int)<<endl;
    cout<<"Size of long:\t"<<sizeof(long)<<endl;
    cout<<"Size of float:\t"<<sizeof(float)<<endl;
    cout<<"Size of double\t"<<sizeof(double)<<endl;

    //测试数据范围
    short short_number = 32767; //有符号short类型的最大值
    cout<<"short_number = "<<short_number<<endl;
    short_number = short_number + 1;//最大值+1会发生溢出/*#\footnote{溢出就是指当运算数字过大，超过上限或者下限，变成了另一个方向的极值。例如最大值+1变成了最小值，最小值-1变成了最大值}#*/，变成最小值。
    cout<<"short_number + 1 = "<<short_number<<endl;

    unsigned short ushort_number = 65535;
    cout<<"ushort_number = "<<ushort_number<<endl;
    ushort_number = ushort_number + 1;
    cout<<"ushort_number + 1 = "<<ushort_number<<endl;
    
    //测试内存内容
    int int_number = 123;
    cout<<"Binary format of 'int_number' is: "<<bitset<sizeof(unsigned int)*8>(int_number)/*#\makeremark{bitset的用法是：bitset<二进制位长度（是位数不是字节数，用整型表示）>(要表示的数字), 例如 bitset<32>(12345)  表示将12345用二进制表示，不足在前面补零，凑够32位。}#*/<<endl;

    float float_number = 123;
    cout<<"Binary format of 'float_number' is: "<<bitset<sizeof(float)*8>((int &)float_number)<<endl;
   
    //测试类型转换
    int convert_int = 1.2;/*#\makeremark{此处进行了隐式强制类型转换。就是说在没有告知的情况下，赋值的数字发生了精度的变化。由于int类型的先天不足，所以当将等号右边的一系列运算完成后的结果转换成为int类型时，会将小数部分删掉（绝非四舍五入）。}#*/
    cout<<"'1.2' saved in an int variable is: "<<convert_int<<endl;

    float float_a=1.2;
    float float_b=1.3;
    float float_c;

    float_c = float_a + float_b;
    cout<<"float_a + float_b = "<<float_c<<endl;

    float_c = float_a + 1/*#\makeremark{此处进行了隐含类型转换。int类型的1会被自动转换成float类型}#*/;
    cout<<"float_a + 1 = "<<float_c<<endl;

    float_c = float_a + (int)/*#\makeremark{在变量前放置一个用括号括起来的数据类型，这种操作叫做显式强制类型转换。所谓显式强制类型转换，即由用户强制地、将某种类型的内容不顾精度的损失而将其转换成为特定类型。基本数据类型通常是可以转换的，但用户自定义的数据类型并不那么容易转换。由于这种转换是强制的，能够绕过编译器的一些限制，所以虽然它非常容易出错，但仍然非常的实用！}#*/float_b;
    cout<<"float_a + (int)float_b = "<<float_c<<endl;
    return 0;
}
