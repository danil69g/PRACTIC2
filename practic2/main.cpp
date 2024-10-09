#include <iostream>
#include "input.h"
#include "converter.h"
#include "output.h"

int main() 
{
    double amount;
    std::string fromCurrency, toCurrency;

    inputData(amount, fromCurrency, toCurrency);

    double convertedAmount = convertCurrency(amount, fromCurrency, toCurrency);

    printResult(convertedAmount, toCurrency);

    return 0;
}