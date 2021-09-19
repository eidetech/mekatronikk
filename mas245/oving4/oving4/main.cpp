#include <iostream>
#include <algorithm>

int main()
{
    // Oppgave 1
    std::cout << "Oppgave 1.1" << std::endl;

    // Oppgave 1.1
    int tall = 42;
    std::cout << "Tallet er: " << tall << std::endl;

    // Oppgave 1.2
    std::cout << "Oppgave 1.2" << std::endl;
    // Printer ut adressen til tallet, bruker & operator:
    std::cout << &tall << std::endl;

    // Oppgave 1.3
    std::cout << "Oppgave 1.3" << std::endl;
    int liste[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Oppgave 1.4
    std::cout << "Oppgave 1.4" << std::endl;
    for (int i=0;i<10;i++) {
    std::cout << (*liste + i) << std::endl;
    }

    // & - henter ut adressen til variabelen
    // * - henter ut verdien til adressen

    // Oppgave 1.5
    std::cout << "Oppgave 1.5" << std::endl;
    for (int i=0;i<10;i++) {
    std::cout << "Element i listen: " << liste[i] << ", med adresse: " << & liste[i] << std::endl;
    }
    // Adressen øker med 4 byte for hver iterasjon.


    // Oppgave 1.6
    long int liste1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Oppgave 1.6" << std::endl;
    for (int i=0;i<10;i++) {
    std::cout << (liste1 + i) << std::endl;
    }
    // Ser at når vi bruker long som datatype så øker adressen med 8 byte om gangen.

    // Oppgave 2
    // Exercise 1
    int a, b;
    int *ptrA, *ptrB;
    std::cout << "Please enter first number: " << std::endl;
    std::cin >> a;
    std::cout << "Please enter second number: " << std::endl;
    std::cin >> b;

    ptrA = &a;
    ptrB = &b;

    std::cout << "You entered: " << *ptrA << " and " << *ptrB << std::endl;

    // Exercise 2
    int c;
    std::cout << "How many numbers will you input?" << std::endl;
    std::cin >> c;
    std::cout << "Please input " << c << " values:" << std::endl;
    int buf[c];
    for (int i=0; i < c; i++) {
    std::cin >> buf[i];
    }
    int n = sizeof(buf) / sizeof(buf[0]);
    std::cout << "The highest number you wrote was: " << *std::max_element(buf , buf+n) << std::endl;

    // Exercise 3
    std::cout << "Please input an integer:" << std::endl;
    int d;
    std::cin >> d;

    int* ptrD = &d;
    std::cout << "The integer was: " << *ptrD << " and it is stored in address: " << ptrD << std::endl;


    return 0;
}
