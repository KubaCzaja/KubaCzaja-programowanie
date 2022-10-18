#include <iostream>

/*
Napisz funkcjê, która wczyta dwie liczby i wykona dzielenie na nich.
*/

void task1()
{


    int firstNumber, secondNumber;

    std::cout << "Podaj pierwsza liczbe:\n";
    std::cin >> firstNumber;

    std::cout << "Podaj druga liczbe:\n";
    std::cin >> secondNumber;

    // iloraz
    int  quotient = 0;

    if (secondNumber !=0)
        quotient = firstNumber / secondNumber;
    
    std::cout << "Iloraz: " << quotient << "\n";
 
}
int main()
{
    task1();
}

