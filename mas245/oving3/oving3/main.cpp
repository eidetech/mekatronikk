#include <iostream>
#include <string>

// Oppgave 1
bool askUserForYesNoInput();

// Oppgave 2
bool problemSolvingChart();
void problemsAndAnswers(int x);

// Oppgave 3
void vendingMachine();
void presentSodaMenu(const std::string brus[], const unsigned int pris[]);

int oppgave1(){
// Oppgave 1.1
int s;
std::cout << "Hva er tallet?" << std::endl;
std::cin >> s;
std::cout << "Du valgte: " << s << std::endl;

// Oppgave 1.2
char k;
std::cout << "Hva er tallet?" << std::endl;
std::cin >> k;
std::cout << "Du valgte: " << k << std::endl;

// Oppgaver 1.3
askUserForYesNoInput();
return 0;
}

int main()
{
//    // Oppgave 1
//    //oppgave1();

//    // Oppgave 2.1
//    // 6 løkker tror jeg

//    // Oppgave 2.2
//problemSolvingChart();

//    // Oppgave 2.3
//    /* Trenger mange tester... Kommer ikke gjennom alle på en run, man må prøve flere ganger. */

//    // Oppgave 3.1

//    const std::string brusTyper[] = {"cola", "pepsi", "fanta", "solo", "grimstadbrus"};
//    const unsigned int brusPriser[] = {20, 21, 22, 23, 24};

//    presentSodaMenu(brusTyper, brusPriser);
//    vendingMachine();

    askUserForYesNoInput();
    return 0;
}




bool askUserForYesNoInput()
{
    bool ans = false;

    char s;
    std::cout << "Y/N?" << std::endl;
    std::cin >> s;
    std::cout << "Du valgte: " << s << std::endl;

    if(s == "yes" || s == "Yes")
    {
    ans = true;
    }else if(s == "no" || s == "No")
    {
    ans = false;
    }else
    {
        askUserForYesNoInput();
    }
    return ans;
}


bool problemSolvingChart()
{
    bool problem = false; //
    char s;
    problemsAndAnswers(1); // Does it work?
    std::cin >> s;
    if (s == 'y') {
        problemsAndAnswers(2); // Mess with it?
        std::cin >> s;
        if (s == 'y') {
            problemsAndAnswers(4); // You idiot
            problemsAndAnswers(5); // Does anyone know?
            std::cin >> s;
            if (s == 'y') {
                problemsAndAnswers(7); // You poor idiot
                problemsAndAnswers(9); // Can you blame someone else?
                std::cin >> s;
                if (s == 'y') {
                    problemsAndAnswers(11); // No problem
                    problem = false;
                }else if (s == 'n') {
                    problemsAndAnswers(7); // You poor idiot
                    problem = true;
}
            }else if (s == 'n') {
                    problemsAndAnswers(6); // Hide it
                    problemsAndAnswers(11); // No problem
                    problem = false;
}
}else if (s == 'n') {
            problemsAndAnswers(11);
            problem = false;
}
    }else if (s == 'n') {
        problemsAndAnswers(3); // Did you mess with it?
        std::cin >> s;
        if (s == 'y') {
            problemsAndAnswers(4); // You idiot
            problemsAndAnswers(5); // Does anyone know?
            std::cin >> s;
            if (s == 'y') {
                problemsAndAnswers(7); // You poor idiot
                problemsAndAnswers(9); // Can you blame someone else?
                std::cin >> s;
                if (s == 'y') {
                    problemsAndAnswers(11); // No problem
                    problem = false;
                }else if (s == 'n') {
                    problemsAndAnswers(7); // You poor idiot
                    problem = true;
}
            }else if (s == 'n') {
                    problemsAndAnswers(6); // Hide it
                    problemsAndAnswers(11); // No problem
                    problem = false;
}
        }else if (s == 'n') {
            problemsAndAnswers(8); // Will you get into trouble?
            std::cin >> s;
            if (s == 'y') {
                problemsAndAnswers(7); // You poor idiot
                problemsAndAnswers(9); // Can you blame someone else?
                std::cin >> s;
                if (s == 'y') {
                    problemsAndAnswers(11); // No problem
                    problem = false;
                }else if (s == 'n') {
                    problemsAndAnswers(7); // You poor idiot
                    problem = true;
}
            }else if (s == 'n') {
                problemsAndAnswers(10);
                problemsAndAnswers(11);
}
}
}
    return problem;
}

void problemsAndAnswers(int x)
{
    switch (x) {
    case 1:
        std::cout << "Does it work?" << std::endl;
        break;
    case 2:
        std::cout << "Mess with it?" << std::endl;
        break;
    case 3:
        std::cout << "Did you mess with it?" << std::endl;
        break;
    case 4:
        std::cout << "You idiot!" << std::endl;
        break;
    case 5:
        std::cout << "Does anyone know?" << std::endl;
        break;
    case 6:
        std::cout << "Hide it!" << std::endl;
        break;
    case 7:
        std::cout << "You poor idiot..." << std::endl;
        break;
    case 8:
        std::cout << "Will you get into trouble?" << std::endl;
        break;
    case 9:
        std::cout << "Can you blame someone else?" << std::endl;
        break;
    case 10:
        std::cout << "Trash it" << std::endl;
        break;
    case 11:
        std::cout << "No problem!" << std::endl;
        break;
    }
}


void presentSodaMenu(const std::string brus[], const unsigned int pris[])
{
    std::cout << "*************" << std::endl;
    std::cout << "Brusmeny: " << std::endl;
    for (int i = 0;i<5;i++) {
        std::cout << i << ": " << brus[i] << ", " << pris[i] << ",-" << std::endl;
    }
    std::cout << "*************" << std::endl;
    std::cout << "Velg nummer på brusen du vil kjøpe:" << std::endl;
}

//void vendingMachine(){
//    int s;
//    std::cin >> s;
//    std::cout << "Du valgte: " << s << , "vennligst legg på " << pris << ",-" << std::endl;
//}
