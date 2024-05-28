#include <iostream>
#include <Windows.h>

struct Test {
    int x;
    int y;
    int z;
};


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Test t{ 1,2,3 };
    int* a = (int*) & t;

    std::cout << *(a+2) << std::endl;    
    char str[100];
    std::cin.getline(str, 100);
    std::cout << str << std::endl;
    std::cout <<"Мы начали изучать Git!" << std::endl;
    return 0;
}