#include "Header.h"

extern std::string letters, word, key;

static int indice(int index, std::string parola)
{
	for (int x = 0; x < letters.size(); x++)
	{
		if (parola[index] == letters[x])
			return x;
	}
}

std::string incrypt()
{
	std::string incryption;
	int keyIndex = 0;
	for (int x = 0; x < word.size(); x++)
	{
		int index1 = indice(x, word);
		int index2 = indice(keyIndex, key);

		keyIndex = (keyIndex + 1) % key.size();

		incryption += letters[(index1 + index2) % letters.size()];
	}

	return incryption;
}

std::string decrypt()
{
	std::string incryption;
	int keyIndex = 0;
	for (int x = 0; x < word.size(); x++)
	{
		int index1 = indice(x, word);
		int index2 = indice(keyIndex, key);

		keyIndex = (keyIndex + 1) % key.size();
		int in = (index1 - index2) % letters.size();
		if (in < 0)
			in *= -1;
		incryption += letters[in];
	}

	return incryption;
}