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

	int numberToCheck;

	std::cout << "Podaj liczbe do sprawdzenia:\n";
	std::cin >> numberToCheck;

	int rest = numberToCheck % 2;

	if (numberToCheck  %2 == 0)
		std::cout << "liczba nie jest parzysta";
	else
		std::cout << "liczba  jest parzysta";

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

void task8()
{
	int daynumber;
	std::cout << "podaj dzieñ tygodnia\n";
	std::cin >> daynumber;

		switch (daynumber)
		{
		case 1:
			std::cout << "Poniedzia³ek\n";
			break;
		case 2:
			std::cout << "Wtorek\n";
			break;
		case 3:
			std::cout << "Œroda\n";
			break;
		case 4:
			std::cout << "Czwartek\n";
			break;
		case 5:
			std::cout << "Pi¹tek\n";
			break;
		case 6:
			std::cout << "Sobota\n";
			break;
		case 0:
		case 7:
			std::cout << "Niedziele\n";
			break;
		default:
			std::cout << "B³êdny dzieñ\n";
		}




}

void task9()
{
	int temperature;
	std::cout << "Podaj temperaturê\n";
	std::cin >> temperature;




}


int main()
{

	setlocale(LC_CTYPE, "polish");

		int numberOfTask;
		std::cout << "podaj numer zadania\n";
		std::cin >> numberOfTask;

		switch (numberOfTask)
		{
		case 1:
			task1();
			break;
		case 2:
			task2();
			break;


		}
	


	//task1();
	//task2();
	//task3();
	//task4();
	//task6();
	//task7();

	task9();
}

