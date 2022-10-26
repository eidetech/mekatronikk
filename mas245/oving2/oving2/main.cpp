#include <iostream>

// 1.1
#include <cmath>

int main()
{
    // Oppgave 1 - Sammenlikning
    // 1.3
    const double angle1 = 123.9;
    const double angle2 = 0.3;

    // 1.4
    double answer1 = std::sin(angle1);
    double answer2 = std::sin(angle2);

    // 1.5
    if(answer1 < 0)
    {
        std::cout << "Negativ" << std::endl;
    }

    // 1.6
    if(answer1 > answer2)
    {
        std::cout << "Answer 1 er størst" << std::endl;
    }
    else if (answer2 > answer1)
    {
        std::cout << "Answer 2 er størst" << std::endl;
    }
    else if (answer1 == answer2)
    {
        std::cout << "Identisk" << std::endl;
    }

    // Oppgave 2 - Løkker
    // 1.
    for(int i = 1; i <= 20; i++)
    {
        std::cout << i << std::endl;
    }

    // 2.
    for(int i = 20; i > 0; i--)
    {
        std::cout << i << std::endl;
    }

    // 3.
    std::cout << "[";
    for(int i = -5; i < 6; i++)
    {
        std::cout << i;
        if (i < 5) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;

    // 4.
    // 4.1
    int k = 1;
    while (k < 21) {
        std::cout << k << std::endl;
        k +=1;
    }
    // 4.2
    int m = 20;
    while (m > 0) {
        std::cout << m << std::endl;
        m -=1;
    }

    // Oppgave 3
    std::cout << "Oppgave 3" << std::endl;
    float v0 = 20.0;
    float x;
    const float a = -9.81;
    int counter = 1.0;
    for (double t = 0; t <= 20; t +=0.01) {

        x = v0*t + 0.5 * a * pow(t,2);
        std::cout << "t: " << t << std::endl;
        std::cout << "counter: " << counter << std::endl;
        if (t >= counter) {
            std::cout << "x: " << x << std::endl;
            counter++;
        }

        if (t > 0 && x <= 0) {
            std::cout << "Treff på tidspunkt: " << t << "s" << std::endl;
            break;
        }
    }
    // Oppgave 4
    for (char i = 'a'; i <= 'z';i++) {
        std::cout << i << std::endl;
    }

    return 0;
}

