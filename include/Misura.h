#ifndef MISURA_H
#define MISURA_H
#include "Lettura.h"
class Misura
{

	static constexpr int size = 17;
	Lettura array[size];
	int curElem;
	
	public:
	Misura(); 
	
	void push_lettura(const Lettura& elem);
	
	
};

#endif
