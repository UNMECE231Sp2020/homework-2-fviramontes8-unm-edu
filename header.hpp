//notes :https://www3.ntu.edu.sg/home/ehchua/programming/cpp/cp6_Inheritance.html
#ifndef header_hpp
#define header_hpp
class Complex{
	private:
	
	double imag;
	double real;
	
	public:
	Complex();
	Complex(double r);
	Complex(double r, double im);
	Complex(const Complex &c);
	~Complex();

	Complex add(const Complex &c);
	Complex sub(const Complex &c);
	Complex mult(const Complex &c);
	Complex div(const Complex &c);
	
	double magnitude()const;
	double phase();
	Complex conj() const;

	void print();


	Complex operator+(const Complex &c);
	Complex operator-(const Complex &c);
	Complex operator*(const Complex &c);
	Complex operator/(const Complex &c);
	Complex operator=(const Complex &c);
	
		
	double getReal()const;
	double getImag()const;
	friend std::ostream& operator<<(std::ostream &out, const Complex &c);
	friend std::istream& operator>>(std::istream &in, Complex &c); 
};

#endif
