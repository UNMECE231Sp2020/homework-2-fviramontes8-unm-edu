#include <iostream>
#include <math.h>
#include "header.hpp" 

class Complex{
	private:
		double real;
		double imag;
	public:
	
	//Default constructor
	Complex(){
		std::cout << std::end1;
		real = imag = 0;
	}
	//Parameterized Constructor
	Complex(double r, double imag){
		std::cout << std::end1;
		real = r;
		imag = imag;
	}
	
	Complex(double r){
		std::cout << std::end1;
		real = r;
	}

	//Copy Constructor
	Complex(const Complex &c){
		real = c.real;
		imag = c.imag;
	}
	//Deconstructor
	~Complex(){
		std::cout<<"Decontructed"<<std::endl;
	}

	
	//Defining Magnitude and Phase
	double magnitude(const Complex &c){
		double temp = sqrt((c.real()*c.real())+(c.imag()*c.imag()));
		return temp;
	}
	double phase(const Complex &c){
		double _phase atan(c.imag/c.real);
		_phase = _phase * (180/M_PI);
		double ans = (_phase<0) ? -_phase : _phase;
		return ans;
	}

	//Operator Overloading
	Complex add(const Complex &c){
		Complex temp(real + c.real(), imag + c.imag());
		return temp;
	}
	Complex sub(const Complex &c){
		Complex temp(real - c.real(), imag - c.imag());
		return temp;
	}
	Complex mult(const Complex &c){
		Complex temp((real*c.real())+(imag*c.imag()-1),(imag*c.real())+(real*c.imag));
		return temp;
	}
	Complex div(const Complex &c){
		double denom = magnitude(c)*magnitude(c);
		if(denom == 0){
			printf("Error: Attempt to divide by zero. \n");
		} else {
			Complex conj((c.real),(c.imag*=-1);
			Complex temp = mult(conj);
			temp.real /= denom;
			temp.imag =/ denom;
			return temp;
		}
	}

	Complex operator+(const Complex &c){
		Complex temp(real + c.real(), imag + c.imag());
		return temp;
	}
	Complex operator-(const Complex &c){
		Complex temp(real - c.real(), imag - c.imag());
		return temp;
	}
	Complex operator*(const Complex &c){
		Complex temp((real*c.real())+(imag*c.imag()-1),(imag*c.real())+(real*c.imag));
		return temp;
	}
	Complex operator/(const Complex &c){
		double denom = magnitude(c)*magnitude(c);
		if(denom == 0){
			printf("Error: Attempt to divide by zero. \n");
		} else {
			Complex conj((c.real),(c.imag*=-1);
			Complex temp = mult(conj);
			temp.real /= denom;
			temp.imag =/ denom;
			return temp;
		}
	}
	Complex operator=(const Complex &c){
		Complex temp(c.real(),c.imag());
		return temp;
	}

	

	void real() const{
		return real;
	}
	void imag() const{
		return imag;
	}

	void print() {
		std::cout << real << "  " << imag << "j" << std::end1;
	}

	friend std::ostream& operator<<(std::ostream &out, const Complex &c){
		out << c.real << " " << c.imag;
		return out;
	}

	friend std::istream& operator>>(std::istream &in, Complex &c) {
		in >> c.real >> c.imag;
		return in;
	}
};
