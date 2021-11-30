#include <iostream>
#include <algorithm>
#include <sstream>

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

int count(int arr[], int number)
{
    int counted_nums = 0;
    for (int i = 0;i < 10;i++) {
        if (arr[i] == number) {
            counted_nums++;
        }
    }

    return counted_nums;
}

void opg4_ex1()
{
    // Create an array that can hold ten integers, and get input from user.
    //Display those values on the screen, and then prompt the user for an integer.
    //Search through the array, and count the number of times the item is found.

    int arr[10];

    std::cout << "Please input 10 integers:" << std::endl;
    int input;
    for (int i = 0; i < 10;i++) {
        std::cin >> input;
        arr[i] = input;
    }
    std::cout << "You entered these numbers:" << std::endl;
    for (int i=0;i<10;i++) {
    std::cout << (arr[i]) << std::endl;
    }

    std::cout << "Now please enter a number, and I will find it in the array for you:" << std::endl;
    int number;
    std::cin >> number;

    for (int i=0;i<10;i++) {
        if (arr[i] == number)
        {
            std::cout << "The number you entered was: " << arr[i] << " and it is located in place number " << i << " of the array." << std::endl;
        }
    }
    int counted_nums = count(arr, number);
    std::cout << number << " was found " << counted_nums << " times in the array." << std::endl;
}

void opg4_ex2()
{
    // Write a program that asks for an index and a number.
    // Then it includes the number at the indicated index of the array ={1,2,3,4,5,6}
    // and moves a position forward (from u to u+1) each element after the selected index.

    int index, number;
    int array[6] = {1,2,3,4,5,6};
    std::cout << "Please enter an index, and then a number:" << std::endl;
    std::cin >> index;
    std::cin >> number;

    array[index] = number;
    std::cout << "Current array: ";
    for (int i = 0;i<6;i++) {
        std::cout << " " << array[i] << " ";
    }
    std::cout << std::endl;

    // Koden nedenfor forstår jeg ikke, og fasit virker ikke heller...
    //relocate_print(index, array, number);
}

void opg4_ex3()
{
    char halla[] = "Hallaisikken! Du e nu tjekk da!";
    int lenHalla = sizeof(halla);
    char newHalla[lenHalla];
    int countdown = lenHalla;

    for (int i=0;i<=lenHalla;i++) {
        //std::cout << halla[countdown];
        newHalla[i] = halla[countdown];
        countdown--;

    }

    std::cout << "Reversed string: " << std::endl;
    for (int i=0;i<=lenHalla;i++) {
        std::cout << newHalla[i];
        }
        std::cout << std::endl;
}

void opg5()
{
    std::string sensorReadings =
     "name: Sensor A, value: 34.9;"
     "name: Sensor B, Value: -9.2334200";

}

int main()
{
    //opg1();
    //opg2();
    //opg3();
    //problemSolver(noProblem);
    //opg4_ex1();
    //opg4_ex2();
    //opg4_ex3();
    opg5();
    return 0;
}
