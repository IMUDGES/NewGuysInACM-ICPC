#include <iostream>
#include <bitset>

using namespace std;

int main(){
    //测试不同数据类型占用内存大小
    cout<<"Size of char:\t"<<sizeof(char)/*#\makeremark{sizeof是C语言中的一个关键字，用来计算内存大小}#*/<<endl;
    cout<<"Size of short:\t"<<sizeof(short)<<endl;
    cout<<"Size of int:\t"<<sizeof(int)<<endl;
    cout<<"Size of long:\t"<<sizeof(long)<<endl;
    cout<<"Size of float:\t"<<sizeof(float)<<endl;
    cout<<"Size of double\t"<<sizeof(double)<<endl;

    //测试数据范围
    short short_number = 32767;
    cout<<"short_number = "<<short_number<<endl;
    short_number = short_number + 1;
    cout<<"short_number + 1 = "<<short_number<<endl;

    unsigned short ushort_number = 65535;
    cout<<"ushort_number = "<<ushort_number<<endl;
    ushort_number = ushort_number + 1;
    cout<<"ushort_number + 1 = "<<ushort_number<<endl;
    
    //测试内存内容
    int int_number = 123;
    cout<<"Binary format of 'int_number' is: "<<bitset<sizeof(unsigned int)*8>(int_number)<<endl;

    float float_number = 123.123;
    cout<<"Binary format of 'float_number' is: "<<bitset<sizeof(float)*8>(*(_ULonglong *)&float_number)<<endl;
    
    
    return 0;
}
