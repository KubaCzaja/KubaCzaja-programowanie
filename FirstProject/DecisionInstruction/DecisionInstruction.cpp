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
	Napisz funkcjê która wczyta liczbê i wyœwietli czy jest ona parzysta czy nie.
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

	std::cout << "podaj pierwsz¹ liczbê\n";
	std::cin >> firstNumber;

	std::cout << "podaj drug¹ liczbê\n";
	std::cin >> secondNumber;

	if (firstNumber > secondNumber)
		std::cout << firstNumber << "jest wiêksza";
	else
		std::cout << secondNumber << "jest wiêksza";
}

void task7()
{
	int firstNumber, secondNumber, thirdNumber;

	std::cout << "podaj pierwsz¹ liczbê";
	std::cin >> firstNumber;

	std::cout << "podaj drug¹ liczbê";
	std::cin >> secondNumber;

	std::cout << "podaj trzeci¹ liczbê";
	std::cin >> thirdNumber;

	if (firstNumber > secondNumber > thirdNumber)
		std::cout << firstNumber << "pierwsza liczba jest najwiêksza";
	else if (secondNumber > firstNumber > thirdNumber)
		std::cout << secondNumber << "druga liczba jest najwiêksza";
	else if (thirdNumber > secondNumber > firstNumber)
		std::cout << thirdNumber << "trzecia liczba jest najwiêksza";


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

