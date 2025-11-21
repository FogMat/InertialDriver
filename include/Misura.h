#ifndef MISURA_H
#define MISURA_H
#include "Lettura.h"

constexpr int numSensori = 17;

struct Misura
{
	Lettura array[numSensori];
};

#endif
