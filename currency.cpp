#include <iostream>


int main() {
    double pesos, reais, soles, dollars;

    const double peso_usd = 0.00032;
    const double reais_usd = 0.27;
    const double soles_usd = 0.3;

    std::cout << "Enter number of Columbian Pesos, Brazilian Reais, Peruvian Soles (separated by spaces):\t";
    std::cin >> pesos >> reais >> soles;

    dollars = (peso_usd * pesos) + (reais_usd*reais) + (soles_usd * soles);

    std::cout << "US Dollars = $" << dollars << std::endl;
    return 0;
};
