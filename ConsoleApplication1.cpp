// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int aa = 1;
short ab(2);
long ac = 3;
long long ad(4);

bool istina = true;
bool no_istina = 0;

float ba = 5.2;
double bb;
long double bc;

char simvol = 'a';


int main()
{
    int del1;
    float del2;
    del1 = ad / ac;
    del2 = ad / ac;

    int plus;
    plus = ad + ac;

    int minus;
    minus = ad - ac;

    float umnog;
    umnog = ba * ad;

    int del_s_ost;
    del_s_ost = ad / ac;

    int x, y;
    x = 10;

    int bit1 = 00000101;
    int bit2 = 00000011;
    int bit11, bit12, bit13, bit14, bit15, bit16; 

    bit11 = bit1 << 2;
    bit12 = bit1 >> 2;
    bit13 = ~bit1;
    bit14 = bit1&bit2;
    bit15 = bit1|bit2;
    bit16 = bit1^bit2;


    std::cout << "Hello World!\n";

    std::cout << "bool:\t\t" << sizeof(bool) << " bytes" << std::endl;
    std::cout << "char:\t\t" << sizeof(char) << " bytes" << std::endl;
    std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << std::endl;
    std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << std::endl;
    std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << std::endl;
    std::cout << "short:\t\t" << sizeof(short) << " bytes" << std::endl;
    std::cout << "int:\t\t" << sizeof(int) << " bytes" << std::endl;
    std::cout << "long:\t\t" << sizeof(long) << " bytes" << std::endl;
    std::cout << "long long:\t" << sizeof(long long) << " bytes" << std::endl;
    std::cout << "float:\t\t" << sizeof(float) << " bytes" << std::endl;
    std::cout << "double:\t\t" << sizeof(double) << " bytes" << std::endl;
    std::cout << "long double:\t" << sizeof(long double) << " bytes" << std::endl;
    
    std::cout << "aa = " << aa << std::endl;
    std::cout << "istina = " << istina << std::endl;
    std::cout << "ba = " << ba << std::endl;
    std::cout << "no_istina = " << no_istina << std::endl;
    std::cout << "simvol = " << simvol << std::endl;

    std::cout << "del1 = " << del1 << std::endl;
    std::cout << "del2 = " << del2 << std::endl;
    std::cout << "plus = " << plus << std::endl;
    std::cout << "minus = " << minus << std::endl;
    std::cout << "umnog = " << umnog << std::endl;
    std::cout << "del_s_ost = " << del_s_ost << std::endl;

    std::cout << "x1 = " << x++ << std::endl;
    std::cout << "x2 = " << ++x << std::endl;
    std::cout << "x3 = " << x-- << std::endl;
    std::cout << "x4 = " << --x << std::endl;

    std::cout << "bit1 = " << bit1 << std::endl;
    std::cout << "bit2 = " << bit2 << std::endl;

    std::cout << "bit11 = " << bit11 << std::endl;
    std::cout << "bit12 = " << bit12 << std::endl;
    std::cout << "bit13 = " << bit13 << std::endl;
    std::cout << "bit14 = " << bit14 << std::endl;
    std::cout << "bit15 = " << bit15 << std::endl;
    std::cout << "bit16 = " << bit16 << std::endl;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
