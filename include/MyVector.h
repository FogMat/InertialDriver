#ifndef MYVECTOR_H
#define MYVECTOR_H
#include <initializer_list>

class MyVector
{
	int maxElem;
	int numElem;
	double* array;
	
	public:
		MyVector(void);
		MyVector(const int& size);
		MyVector(std::initializer_list<double> lst);
		MyVector(MyVector& other);
		MyVector(MyVector&& other);
		
		void push_back(const double& elem);
		double pop_back(void);
		void reserve(const int& newSize);
		double& at(const int& i);
		const double& at(const int& i) const;
		void print();
		
		//overload
		double& operator[](const int& i);
		const double& operator[](const int& i) const;
		MyVector& operator=(MyVector& other);
		MyVector& operator=(MyVector&& other);
		
		~MyVector();
};

#endif
