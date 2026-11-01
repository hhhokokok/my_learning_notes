//测试悬空指针
//悬空指针：指针指向的内存空间被释放，此时解引用指针打印出垃圾值
#include <iostream>
int main() {
    int* number=new int();
    *number=10;
    int** num_pointer=&number;

    std::cout << "释放堆内存空间前："<<**num_pointer<<std::endl;
    //此时打印值正常
    delete number;
    std::cout << "释放堆内存空间后：" <<**num_pointer <<std::endl;
    //打印出垃圾值
}