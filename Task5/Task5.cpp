#include <iostream>
#include <string>

std::string dash = "--- ";
std::string dot = " * :";


int main()
{
    std::cout << "     1   2   3   4   5   6   \n";
    std::cout << "    " << dash << dash << dash << dash << dash << dash << '\n';
    std::cout << " A :" << dot << dot << dot << dot << dot << dot << " A\n";
    std::cout << "    " << dash << dash << dash << dash << dash << dash << '\n';
    std::cout << " B :" << dot << dot << dot << dot << dot << dot << " B\n";
    std::cout << "    " << dash << dash << dash << dash << dash << dash << '\n';
    std::cout << " C :" << dot << dot << dot << dot << dot << dot << " C\n";
    std::cout << "    " << dash << dash << dash << dash << dash << dash << '\n';
    std::cout << " D :" << dot << dot << dot << dot << dot << dot << " D\n";
    std::cout << "    " << dash << dash << dash << dash << dash << dash << '\n';
    std::cout << "     1   2   3   4   5   6   \n";


}