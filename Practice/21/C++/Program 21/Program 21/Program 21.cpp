#include <iostream>

using namespace std;

double BMI(double weight, double height)
{
    return weight / (height * height);
}

void printBMI(double BMI)
{
	if (BMI < 18.5)
	{
		std::cout << "Underweight" << std::endl;
	}
	else if (BMI < 25)
	{
		std::cout << "Normal" << std::endl;
	}
	else if (BMI < 30)
	{
		std::cout << "Overweight" << std::endl;
	}
	else
	{
		std::cout << "Obesity" << std::endl;
	}
}

int main()
{
	double weight, height;
    setlocale(LC_ALL, "Rus");
	cin >> weight >> height;

	printBMI(BMI(weight, height * 0.01));
}