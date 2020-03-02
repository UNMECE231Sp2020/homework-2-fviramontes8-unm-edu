//notes :https://www3.ntu.edu.sg/home/ehchua/programming/cpp/cp6_Inheritance.html
#ifndef header_hpp
#define header_hpp
class Complex{
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


	Complex operator+(const Complex c);
	Complex operator-(const Complex &c);
	Complex operator*(const Complex &c);
	Complex operator/(const Complex &c);
	Complex operator=(const Complex &c);
	void real();
	void imag();
	friend std::ostream& operator<<(std::ostream &out, const Complex &c);
	friend std::istream& operator>>(std::istream &in, Complex &c); 
};

#endif
