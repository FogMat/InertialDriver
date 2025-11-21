#include "../include/Misura.h"
#include <stdexcept> //per out_of_range

Misura::Misura()
{
	curElem = 0;
}

void Misura::push_lettura(const Lettura& elem)
{
	if(curElem < size)
	{
		array[curElem] = elem;
		curElem++;
	}
	else
	{
		throw std::out_of_range("Misura::push_lettura() -> array pieno");
	}
}
