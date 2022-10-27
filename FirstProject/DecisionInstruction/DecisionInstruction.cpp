#include <iostream>

/*
DRY - don't repeat youself - nie powtarzaj siê
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

/*    if (secondNumber != 0)
        quotient = firstNumber / secondNumber;
    
    if (secondNumber !=0)
        std::cout << "Iloraz: " << quotient << "\n";

    if (secondNumber == 0)
        std::cout << "Dzielenie przez zero!!!\n";
        */

    if (secondNumber != 0)
    {
        quotient = firstNumber / secondNumber;
        std::cout << "Iloraz: " << quotient << "\n";
    }
    else
    {
        std::cout << "Dzielenie przez zero!!!\n";
    }

    std::cout << "Koniec programu\n";

   
}

void task2()
{
    int numberToCheck;

    std::cout << "Podaj liczbe do sprawdzenia:\n";
    std::cin >> numberToCheck;

    if (numberToCheck > 0)
        std::cout << "liczba dodatnia\n";
    else
        std::cout << "liczba ujemna\n";
}



int main()
{
  //task1();
      task2();
}

