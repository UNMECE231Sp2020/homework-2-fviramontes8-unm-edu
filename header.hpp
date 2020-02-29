
//notes :https://www3.ntu.edu.sg/home/ehchua/programming/cpp/cp6_Inheritance.html
class Complex{
	private:
		double real;
		double imag;
	public:
	Complex();
	Complex(double r, double imag);
	Complex(const Complex &c);
	~Complex();
	void print();
	double real() const; 
	double imag() const;
	Complex add(const Complex &c);
	Complex sub(const Complex &c);
	Complex mult(const Complex &c);
	Complex div(const Complex &c);
	double magnitude();
	double phase();
};