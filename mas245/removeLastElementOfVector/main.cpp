#include <iostream>
#include <vector>

std::vector<double> removeLastElement(std::vector<double> input);

std::vector<double> removeLastElement(std::vector<double> input)
{
    input.pop_back();
    return input;
}


int main()
{
    std::vector<double> inputVector = {1,2,3,4};

    inputVector = removeLastElement(inputVector);
    for (unsigned i = 0;i < inputVector.size();i++) {
        std::cout << inputVector[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
