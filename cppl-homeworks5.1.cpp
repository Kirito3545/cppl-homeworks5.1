#include <iostream>
#include <vector>
#include <string>


template <class T>
T degree(T num)
{
	return num * num;
};


template <>
std::string degree(std::string num)
{
	return num;
};


template <class T>
std::vector<T> degree(std::vector<T> b)
{
	for (size_t i = 0; i < b.size(); i++)
	{
		b.at(i) *= b.at(i);
	};
	return b;
};

void printVector(std::vector<int>* v1)
{
	for (size_t i = 0; i < v1->size(); i++)
	{
		std::cout << v1->at(i) << "\t";
	};
};

int main()
{
	setlocale(LC_ALL, "ru");

	int a = 5;
	int x = degree(a);

	std::cout << "degree <int>(a) = " << x << std::endl;
	std::cout << "degree <string>(Privet) = " << degree <std::string>("Privet") << std::endl;
	std::cout << "degree <int>(2) = " << degree <int>(2) << std::endl;
	std::cout << "degree <double>(3.5) = " << degree <double>(3.5) << std::endl;
	std::cout << std::endl;

	std::vector<int> b = { -1, 4, 8, -7, 0 };

	std::cout << "Âåêòîð b äî" << std::endl;
	printVector(&b);
	std::cout << std::endl;

	std::vector<int> y = degree(b);

	std::cout << "Âåêòîð y" << std::endl;
	printVector(&y);

	std::cout << std::endl << "Âåêòîð b ïîñëå" << std::endl;
	printVector(&b);

	std::cout << std::endl;
	std::cout << std::endl;
};