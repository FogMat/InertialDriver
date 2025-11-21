#include "MyVector.h"
#include <algorithm> //per std::copy
#include <stdexcept> //per out_of_range
#include <initializer_list>
#include <iostream>

MyVector::MyVector()
{
	maxElem = 10;
	numElem = 0;
	array = new double[maxElem];
}

MyVector::MyVector(const int& size)
{
	if(10 > size)
	{
		maxElem = 10;
	} else
	{
		maxElem = size + 10;
	}
	
	numElem = 0;
	array = new double[maxElem];
}

MyVector::MyVector(std::initializer_list<double> lst)
{
	maxElem = lst.size();
	numElem = maxElem;
	array = new double[maxElem];
	std::copy(lst.begin(), lst.end(), array);
	
}

MyVector::MyVector(MyVector& other)
{
	this->maxElem = other.maxElem;
	this->numElem = other.numElem;
	std::copy(other.array, other.array + other.numElem, this->array);
}

MyVector::MyVector(MyVector&& other)
{
	this->maxElem = other.maxElem;
	this->numElem = other.numElem;
	std::copy(other.array, other.array + other.numElem, this->array);
	other.maxElem = 0;
	other.numElem = 0;
	other.array = nullptr;
}

void MyVector::push_back(const double& elem)
{
	if(numElem < maxElem)
	{
		array[numElem] = elem;
	}
	else
	{
		reserve(maxElem*2);
		array[numElem] = elem;
	}
	numElem++;
}

double MyVector::pop_back(void)
{
	if(numElem > 0)
	{
		numElem--;
		return array[numElem];
	}else
	{
		throw std::runtime_error("pop_back() chiamato su MyVector vuoto");
	}
}

double& MyVector::at(const int& i)
{
	if(i >= 0 && i < numElem)
	{
		return array[i];
	} else
	{
		throw std::out_of_range("MyVector::at() -> Indice fuori dai limiti");
	}
}

const double& MyVector::at(const int& i) const
{
	if(i >= 0 && i < numElem)
	{
		return array[i];
	} else
	{
		throw std::out_of_range("MyVector::at() -> Indice fuori dai limiti");
	}
}

void MyVector::reserve(const int& newSize)
{
	if(newSize <= maxElem)
	{
		return;
	}else
	{
		double* newArray = new double[newSize];
		std::copy(array, array + numElem, newArray);
		delete[]array;
		array = newArray;
		maxElem = newSize;
	}
}

void MyVector::print()
{
	std::cout << "Il contenuto del vettore e' {";
	int i;
	for(i = 0; i < numElem - 2; i++)
	{
		std::cout << array[i] << ", ";
	}
	std::cout << array[++i] << "}";
}


double& MyVector::operator[](const int& i)
{
	return array[i];
}

const double& MyVector::operator[](const int& i) const
{
	return array[i];
}

MyVector& MyVector::operator=(MyVector& other)
{
	delete[] array;
	array = other.array;
	maxElem = other.maxElem;
	numElem = other.numElem;
	return *this;
}

MyVector& MyVector::operator=(MyVector&& other)
{
	delete[] array;
	array = other.array;
	maxElem = other.maxElem;
	numElem = other.numElem;
	other.array = nullptr;
	return *this;
}
MyVector::~MyVector()
{
	delete[] array;
}




