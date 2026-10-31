//测试悬空指针
#include <iostream>
int main() {
    int* number=new int();
    *number=10;
    int** num_pointer=&number;

    std::cout << "释放堆内存空间前："<<**num_pointer<<std::endl;
    delete number;
    std::cout << "释放堆内存空间后：" <<**num_pointer <<std::endl;
}