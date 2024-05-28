#include <iostream>
#include <Windows.h>

#define A  for (;;) { \
std::cout <<"dsfdsdfsdfasdfas"; \
}


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
    //std::cout << &t << std::endl;

    return 0;

    char str[100];

    std::cin.getline(str, 100);

    std::cout << str << std::endl;


    /*FILE* out;
    if (fopen_s(&out, "russ.txt", "w") != 0)
        std::cout << "The file cannot be opened for !" << "\n";
    else {
        fputs("Привет!", out);
        fclose(out);
    }*/
    return 0;
}