#ifndef INPUT_H
#define INPUT_H

#include <iostream>

void inputData(double& amount, std::string& fromCurrency, std::string& toCurrency) {
    std::cout << "Введіть кількість грошей: ";
    std::cin >> amount;

    std::cout << "Введіть валюту, з якої конвертувати (USD, EUR, UAH): ";
    std::cin >> fromCurrency;

    std::cout << "Введіть валюту, в яку конвертувати (USD, EUR, UAH): ";
    std::cin >> toCurrency;
}

#endif