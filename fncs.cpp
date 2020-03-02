#include <iostream>
#include <math.h>
#include "header.hpp" 

	
	//Default constructor
	Complex::Complex(){
		real = imag = 0;
	}
	//Parameterized Constructor
	Complex::Complex(double r, double im){
		std::cout << std::endl;
		real = r;
		imag = im;
	}
	
	Complex::Complex(double r){
		std::cout << std::endl;
		real = r;
	}

	//Copy Constructor
	Complex::Complex(const Complex &c){
		real = c.real;
		imag = c.imag;
	}
	//Deconstructor
	Complex::~Complex(){
		std::cout<<"Decontructed"<<std::endl;
	}

	
	//Defining Magnitude and Phase
	double Complex::magnitude() const{
		double temp = sqrt((real*real)+(imag*imag));
		return temp;
	}
	double Complex::phase(){
		double _phase = atan(imag/real);
		_phase = _phase * (180/M_PI);
		double ans = (_phase<0) ? -_phase : _phase;
		return ans;
	}

	//Operator Overloading
	Complex Complex::add(const Complex &c){
		Complex temp(real + c.real, imag + c.imag);
		return temp;
	}
	Complex Complex::sub(const Complex &c){
		Complex temp(real - c.real, imag - c.imag);
		return temp;
	}
	Complex Complex::mult(const Complex &c){
		Complex temp((real*c.real)+(imag*c.imag-1),(imag*c.real)+(real*c.imag));
		return temp;
	}
	Complex Complex::div(const Complex &c){
		double denom = c.magnitude()*c.magnitude();
		if(denom == 0){
			printf("Error: Attempt to divide by zero. \n");
		} else {
			Complex conj(c.real,c.imag*-1);
			Complex temp = mult(conj);
			temp.real /= denom;
			temp.imag /= denom;
			return temp;
		}
	}

	Complex Complex::operator+(const Complex &c){
		Complex temp(real + c.real, imag + c.imag);
		return temp;
	}
	Complex Complex::operator-(const Complex &c){
		Complex temp(real - c.real, imag - c.imag);
		return temp;
	}
	Complex Complex::operator*(const Complex &c){
		Complex temp((real*c.real)+(imag*c.imag-1),(imag*c.real)+(real*c.imag));
		return temp;
	}
	Complex Complex::operator/(const Complex &c){
		double denom = c.magnitude()*c.magnitude();
		if(denom == 0){
			printf("Error: Attempt to divide by zero. \n");
	} else {
			Complex conj((c.real),(c.imag*-1));
			Complex temp = mult(conj);
			temp.real /= denom;
			temp.imag /= denom;
			return temp;
		}
	}
	Complex Complex::operator=(const Complex &c){
		real = real/c.real;
		imag = imag/c.imag;
		return *this;
	}

	double Complex::getReal() const{
		return real;
	}
	double Complex::getImag() const {
		return imag;
	}

	void Complex::print() {
		std::cout << real << "  " << imag << "j" << std::endl;
	}

	std::ostream &operator<<(std::ostream &out, const Complex &c){
		out << c.real << " " << c.imag;
		return out;
	}

	std::istream  &operator>>(std::istream &in, Complex &c) {
		in >> c.real>> c.imag;
		return in;
	}

