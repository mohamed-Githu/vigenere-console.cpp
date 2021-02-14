#include "Header.h"

std::string letters = "abcdefghijklmnopqrstuvwxyz", word, key;

int main()
{
	std::cout << "Enter the phrase : ";
	std::cin >> word;
	std::cout << "Enter the key word : ";
	std::cin >> key;
	std::string incryption = decrypt();
	std::cout << incryption;
}