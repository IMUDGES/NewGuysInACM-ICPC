#include <iostream>
using namespace std;

int main(){
    char char_A = 'a'/*#\makeremark{就如同"int a = 1;"中的1是整型字面常量一样，这行代码中的'a'被称为字符型字面常量。因为它的值也就体现在它的字面意义上。}#*/;
    cout<<"char_A: "<<char_A<<endl;
    cout<<"int of char_A: "<<(int)char_A/*#\makeremark{用"int"的方式去窥探char类型}#*/<<endl;

    char_A = char_A + 1;/*#\makeremark{char类型如同int一样，是可以进行四则运算的。}#*/;
    cout<<"char_A + 1: "<<char_A<<endl;
    cout<<"int of char_A + 1: "<<(int)char_A<<endl;

    cout<<"char of int '48': "<<(char)48/*#\makeremark{当然也可以用char的方式去窥探int类型！}#*/<<endl;
    cout<<"char of int '7': "<<(char)7/*#\makeremark{有些ascii字符是能够被人看得到的文字，但有些字符并非是文字，而是代表了一些操作，例如ascii中的7表示了"响铃"}#*/<<endl;
    cout<<"int of '\\n': "<<(int)'\n'/*#\makeremark{像'$\backslash$n'这样的字符，其实也是ascii码中的一种，我们可以看看其具体的值是多少！}#*/<<endl;
    return 0;
}
