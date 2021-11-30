#include <iostream>

using namespace std;

int main()
{
    const int x = 3;
    const int y = 2;
    int z = 42;
    const int a = x*y;
    int& b = z;
    b++;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "z = " << z << std::endl;

    return 0;
}
