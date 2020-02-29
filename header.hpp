//notes :https://www3.ntu.edu.sg/home/ehchua/programming/cpp/cp6_Inheritance.html
#ifndef header
#define header

class Complex{
	private:
		double real;
		double imag;
	public:

	Complex();
	Complex(double r);
	Complex(double r, double imag);
	Complex(const Complex &c);
	~Complex();

	Complex add(const Complex &c);
	Complex sub(const Complex &c);
	Complex mult(const Complex &c);
	Complex div(const Complex &c);
	
	double magnitude();
	double phase();

	void print();
};

#endif
