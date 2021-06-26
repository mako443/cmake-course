#include <iostream>
#include "my_math/add.h"
#include "my_math/divide.h"

int main()
{
    float no1, no2;
    std::cout << "Enter numbers\n";
    std::cin >> no1 >> no2;
    std::cout << "ADD: " << add(no1, no2) << " DIV: " << divide(no1, no2) << "\n";

    std::cout << "CMAKE VAR:" << cmake_var << std::endl;
    return 0;
}