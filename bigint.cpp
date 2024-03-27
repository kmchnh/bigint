#include<iostream>
#include<string>
#include<cstring>


std::string sum(std::string num1, std::string num2);
std::string sub(std::string num1, std::string num2);


int main() {

    std::string num1, num2;

    std::cout << "First Number: ";
    std::cin >> num1;
    std::cout << "Second Number: ";
    std::cin >> num2;

    std::cout << "Sum: " << sum(num1, num2) << std::endl;
    std::cout << "Sub: " << sub(num1, num2) << std::endl;

    return 0;
}
