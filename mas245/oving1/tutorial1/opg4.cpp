#include <cmath>
#include <iostream>

int main(){
    const double a = 2.0;
    const double b = 5.0;
    double f = a * pow(b, 2.0);
    double f_2 = a * b*b;
    std::cout << "Svaret er f = " << f << std::endl;
    std::cout << "Svaret er f_2 = " << f_2 << std::endl;
}