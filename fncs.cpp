#include <iostream>
#include "header.hpp"

class Complex
{
	private:
		double real;
		double imag;
	public:
	Complex(){
		std::cout << "Made by default constructor!" << std::endl;
		real = imag = 0;
	}
	Complex(double r, double imag){
		std::cout << "Made by parametrized constructor!" << std::endl;
		real = r;
		imag = imag;
	}
	Complex(const Complex &c){
		real = c.real;
		imag = c.imag;
	}
	~Complex(){
		std::cout<<"decontructed"<<std::endl;
	}
	void print(){
		std::out<< real << "  " << imag << "j"<< std::endl;
	}
	double real() const {
		return real;
	}
	double imag() const{
		return imag;
	}
	Complex add(const Complex &c){
		Complex temp(real + c.real(), imag + c.imag());
		return temp;
	}
	Complex sub(const Complex &c){
		Complex temp(real - c.real(), imag - c.imag());
		return temp;
	}
	Complex mult(const Complex &c){

	}
	Complex div(const Complex &c){

	}
	double magnitude(){

	}
	double phase(){

	}	
};
