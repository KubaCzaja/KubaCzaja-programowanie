#include <iostream>

/*
DRY - don't repeat youself - nie powtarzaj si�
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

void task3()
{
	int numberToCheck;

	std::cout << "Podaj liczbe do sprawdzenia:\n";
	std::cin >> numberToCheck;

	if (numberToCheck <= 10)
	{
		if (numberToCheck >= 25)
		{
			std::cout << "liczba jest w zakresie\n";
		}
		else
		{
			std::cout << "liczba nie jest w zakresie\n";
		}




	}
	else
	{
		std::cout << "liczba nie jest w zakresie\n";
	}


}

void task4()
{
	/*
	Napisz funkcj� kt�ra wczyta liczb� i wy�wietli czy jest ona parzysta czy nie.
	*/

	int numberToCheck, checkedNumber;

	std::cout << "Podaj liczbe do sprawdzenia:\n";
	std::cin >> numberToCheck;

	checkedNumber = numberToCheck % 2;

	if (checkedNumber > 0)
		std::cout << "liczba nie jest parzysta";

	else
		std::cout << "liczba jest parzysta";

}

void task6()
{
	int firstNumber, secondNumber;

	std::cout << "podaj pierwsz� liczb�\n";
	std::cin >> firstNumber;

	std::cout << "podaj drug� liczb�\n";
	std::cin >> secondNumber;

	if (firstNumber > secondNumber)
		std::cout << firstNumber << "jest wi�ksza";
	else
		std::cout << secondNumber << "jest wi�ksza";
}

void task7()
{
	int firstNumber, secondNumber, thirdNumber;

	std::cout << "podaj pierwsza liczbe";
	std::cin >> firstNumber;

	std::cout << "podaj druga liczbe";
	std::cin >> secondNumber;

	std::cout << "podaj trzecia liczbe";
	std::cin >> thirdNumber;

	if (firstNumber > secondNumber && firstNumber > thirdNumber)
		std::cout << "pierwsza liczba jest najwieksza";
	else if (secondNumber > firstNumber && secondNumber > thirdNumber)
		std::cout << "druga liczba jest najwieksza";
	else if (thirdNumber > secondNumber && thirdNumber > firstNumber)
		std::cout << "trzecia liczba jest najwieksza";


}






int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	//task6();
	task7();
}

