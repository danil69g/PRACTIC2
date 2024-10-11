#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
// Значення параметрів
double convertCurrency(double amount, const std::string& fromCurrency, const std::string& toCurrency) {
    // якщо валюти однакові (в такому випадку конвертація не потрібна)
    double conversionRate = 1.0;
// Використовуємо умовні оператори для визначення коефіцієнта конвертації між різними валютами
    if (fromCurrency == "USD" && toCurrency == "EUR") {
        conversionRate = 0.89;
    } else if (fromCurrency == "USD" && toCurrency == "UAH") {
        conversionRate = 41;
    } else if (fromCurrency == "EUR" && toCurrency == "USD") {
        conversionRate = 1.11;
    } else if (fromCurrency == "EUR" && toCurrency == "UAH") {
        conversionRate = 43;
    } else if (fromCurrency == "UAH" && toCurrency == "USD") {
        conversionRate = 0.025;
    } else if (fromCurrency == "UAH" && toCurrency == "EUR") {
        conversionRate = 0.02;
    } else {
        throw std::invalid_argument("Unable to find exchange rate to convert from " + fromCurrency + " TO " + toCurrency);
    }
//Обчислення і повернення результату
    return amount * conversionRate;
}

#endif