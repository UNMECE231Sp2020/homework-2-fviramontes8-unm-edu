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
		imag = 0;
	}

	//Copy Constructor
	Complex::Complex(const Complex &c){
		real = c.real;
		imag = c.imag;
	}
	//Deconstructor
	Complex::~Complex(){
		;
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

	Complex Complex::conj() const {
		Complex temp(*this);
		temp.imag = temp.imag*-1;
		return temp;
	}	

	//Operator Overloading
	Complex Complex::add(const Complex &c){
		Complex temp(real+c.real, imag+c.imag);
		return temp;
	}
	Complex Complex::sub(const Complex &c){
		Complex temp(real - c.real, imag - c.imag);
		temp.real = temp.real*-1;
		temp.imag = temp.imag*-1;
		return temp;
	}
	Complex Complex::mult(const Complex &c){
		Complex temp;
		temp.real = real*c.real - imag*c.imag;
		temp.imag = imag*c.real + real*c.imag;
		return temp;
	}
	Complex Complex::div(const Complex &c){
		double denom = c.magnitude()*c.magnitude();
		if(denom == 0){
			printf("Error: Attempt to divide by zero. \n");
			return 1;
		} else {
			Complex temp = mult(c.conj());
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
		temp.real = temp.real*-1;
		temp.imag = temp.imag*-1;
		return temp;
	}
	Complex Complex::operator*(const Complex &c){
		Complex temp(mult(c));
		return temp;
	}
	Complex Complex::operator/(const Complex &c){
		double denom = c.magnitude()*c.magnitude();
		if(denom == 0){
			printf("Error: Attempt to divide by zero. \n");
	} else {
			Complex temp = mult(c.conj());
			temp.real = temp.real/denom;
			temp.imag = temp.imag/denom;
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
		std::cout << real << " +  " << imag << "j" << std::endl;
	}

	std::ostream &operator<<(std::ostream &out,const Complex &c){
		out << c.real << " + " << c.imag << "j";
		return out;
	}

	std::istream  &operator>>(std::istream &in, Complex &c) {
		in >> c.real>> c.imag;
		return in;
	}

