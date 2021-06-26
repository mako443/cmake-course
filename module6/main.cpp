#include <iostream>

#include "my_math/add.h"
#include "my_math/divide.h"
#include "my_print/print_result.h"

main()
{
    float no1, no2, result_add, result_div;
    std::cout << "First number \t";
    std::cin >> no1;
    std::cout << "Second number \t";
    std::cin >> no2;

    result_add = add(no1, no2);
    result_div = divide(no1, no2);

    print_result(result_add, result_div);

    return 0;
}