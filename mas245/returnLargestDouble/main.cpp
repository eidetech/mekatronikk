#include <iostream>

double returnLargestDouble(double* inputArray, int lenght);

double returnLargestDouble(double* inputArray, int length)
{
    double largest = inputArray[0];

    for (int i = 0; i<length;i++) {
        if (largest < inputArray[i]) {
            largest = inputArray[i];
        }
    }
    return largest;
}

int main()
{
    double input[4] = {55, 1200, 79, 455};
    double output = returnLargestDouble(input, 4);
    std::cout << output << std::endl;
}
