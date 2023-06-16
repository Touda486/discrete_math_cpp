#include "combination.hpp"
#include "lucas.hpp"
#include "power.hpp"
#include "stirling_2nd_kind.hpp"

#include <iostream>

int main(void)
{
    std::cout << "12C5 = " << combination<12, 5>();
    std::cout << "\n10th number of fibonacci sequence is " << fibonacci<10>();
    std::cout << "\n10th number of lucas sequence is " << lucas<10>();
    std::cout << "\n2^10 = " << power<2, 10>();
    std::cout << "\nM_16 = " << mersenne<16>();
    std::cout << "\nS_7^5 = " << stirling_2nd<7, 5>() << std::endl;
    return 0;
}

