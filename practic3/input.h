#ifndef INPUT_H
#define INPUT_H

#include <iostream>
// Аргументи функціїї
void inputData(double& amount, std::string& fromCurrency, std::string& toCurrency) {
    // Запит введеня даних користувача
    std::cout << "Input $: ";
    std::cin >> amount;
    // Функція перевіряє, чи є amount меншим або рівним нулю.
        if (amount <= 0) {
        throw std::invalid_argument("Invalid input."); 
        }
// Запит введеня даних користувача
std::cout << "Currency (USD, EUR, UAH): ";
std::cin >> fromCurrency;
// Запит введеня даних користувача
std::cout << "Currency convert (USD, EUR, UAH): ";
std::cin >> toCurrency; 
}
#endif