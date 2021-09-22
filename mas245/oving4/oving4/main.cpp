#include <iostream>
#include <algorithm>

void opg1(){
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
}

void opg2() {
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
}

void opg3(){
// Oppgave 3

// Oppgave 3.1
bool problem = true;
char s;

while(problem == true){
std::cout << "Does it move? (y/n)" << std::endl;
std::cin >> s;
if (s == 'y') {
    std::cout << "Should it? (y/n)" << std::endl;
    std::cin >> s;
    if (s =='y') {
        problem = false;
        std::cout << "No problem." << std::endl;
    }else if (s == 'n') {
        std::cout << "Gaff it girl!" << std::endl;
    }
}else if (s == 'n') {
    std::cout << "Should it? (y/n)" << std::endl;
    std::cin >> s;
    if (s =='y') {
        std::cout << "WD-40 is your friend." << std::endl;
    }else if (s == 'n') {
        problem = false;
        std::cout << "No problem." << std::endl;
    }
}
}
}

// Oppgave 3.1
enum solutions { noProblem, tape, oil };

void problemSolver(enum solutions s){
    solutions input = s;

    if (input == oil) {
        std::cout << "Use oil" << std::endl;
    }else if (input == tape) {
        std::cout << "Use duct tape" << std::endl;
    }else if (input == noProblem) {
            std::cout << "No problem" << std::endl;
    }
}



int main()
{
    //opg1();
    //opg2();
    //opg3();
    //problemSolver(noProblem);


    return 0;
}
