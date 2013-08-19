#include <iostream> /*#\makeremark{导入库文件，当你想要使用某些系统库提供的功能时，必须include相应的库文件}#*/
#include <cstring> 
using namespace std; /*#\makeremark{使用命名空间，这个涉及到C++对模块的组织规划，已超出本书的范围。但一般情况下这句话是必不可少的！}#*/

int main(){ /*#\makeremark{主函数}#*/

    /* 字符串最大长度  */ /*#\makeremark{代码注释}#*/
    const int trunk_size = 100; /*#\makeremark{变量定义}#*/

    /* 保存名字的字符串指针  */
    char *name = (char*)malloc(sizeof(char)*trunk_size);
    
    /* 保存性别的字符串指针  */
    char *sex_str;
    sex_str = (char*)malloc(sizeof(char)*trunk_size);

    cout/*#\makeremark{标准输出流，在控制台程序下控制输出}#*/<<"  Who are you?"<<endl;
    cout<<">>";
    cin/*#\makeremark{标准输入流，可以将输入到计算机中的内容读入程序}#*/>>name;
    cout<<"  Hello, "<<name<<"!"<<endl;
    cout<<"  Are you a boy or girl?"<<endl;
    cout<<">>";
    cin>>sex_str;
    if(!strcmp("boy",sex_str)/*#\makeremark{调用字符串比较函数}#*/){ //判断这里是"boy"还是"girl" 
        cout<<"OH! NO! We have a tons of boys!"<<endl/*#\makeremark{endl表示换行。cout、cin、endl等功能必须在usint namespace std；后才能使用}#*/;
    }else{
        cout<<"Hey! Welcome to IMUDGES!!!!!!"<<endl;
    }
    return 0;/*#\makeremark{主函数的返回值}#*/
}
