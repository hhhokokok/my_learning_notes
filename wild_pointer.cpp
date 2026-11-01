//测试野指针
//未对指针进行初始化，里面存放随机数据，编译器和操作系统随意处理
#include <iostream>
int main() {
    int* pointer;
    std::cout << pointer<<std::endl;
    //解引用后打印值是0
    std::cout << *pointer<<std::endl;
}