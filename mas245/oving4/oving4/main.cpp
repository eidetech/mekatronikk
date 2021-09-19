#include <iostream>


int main()
{
    std::cout << "Oppgave 1" << std::endl;
    // Oppgave 1
    int tall = 42;

    std::cout << "Tallet er: " << tall << std::endl;

    // Oppgave 2
    std::cout << "Oppgave 2" << std::endl;
    // Printer ut adressen til tallet, bruker & operator:
    std::cout << &tall << std::endl;

    // Oppgave 3
    std::cout << "Oppgave 3" << std::endl;
    int liste[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    long int liste1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Oppgave 4
    std::cout << "Oppgave 4" << std::endl;
    for (int i=0;i<10;i++) {
    std::cout << (liste + i) << std::endl;
    }

    // & - henter ut adressen til variabelen
    // * - henter ut verdien til adressen

    // Oppgave 5
    std::cout << "Oppgave 5" << std::endl;
    for (int i=0;i<10;i++) {
    std::cout << "Element i listen: " << liste[i] << ", med adresse: " << & liste[i] << std::endl;
    }


    // Oppgave 6
    std::cout << "Oppgave 6" << std::endl;
    for (int i=0;i<10;i++) {
    std::cout << (liste1 + i) << std::endl;
    }
    // Ser at når vi bruker long som datatype så øker adressen med 8 byte om gangen.

    return 0;
}
