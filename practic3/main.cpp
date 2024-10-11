#include <iostream>
#include "input.h"
#include "converter.h"
#include "output.h"
int main() {
   try {
       // Введення даних
       double amount;
       std::string fromCurrency, toCurrency;

       // Конвертація
       inputData(amount, fromCurrency, toCurrency);
       double convertedAmount = convertCurrency(amount, fromCurrency, toCurrency);;

       // Виведення результату
       printResult(convertedAmount, toCurrency);

     } catch (const std::invalid_argument& e) {
       std::cerr << "Error: " << e.what() << std::endl;
   }
   return 0;
}