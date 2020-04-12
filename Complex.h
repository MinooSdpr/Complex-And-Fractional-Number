#include <iostream>
#include <math.h>

using namespace std;

class complex
{
	double a,b;
	friend void dest(int a,int b);
	friend void polarshowing(int a,int b);
	friend complex& operator+(const complex &cplx,const complex &cplx1);
	friend complex& operator-(const complex &cplx,const complex &cplx1);
	
	public:
		
		
		complex(double x,double y);
		
		~complex();
		double geta();
		double getb();
		void setab(double re,double im);
		void printValue();
		void Csum(double c,double d);
		void Cdeduce(double c,double d);
		void Cmultiply(double c,double d);
		void Coposite();
		void Cdivide(double c,double d);
		void Creverse();
		void mozdavaj();
};

complex::complex(double x,double y)
{
	a=x;
	b=y;
}


complex::~complex()
{
	cout<<"\n The Process complete \n";
	cin.get();
}

double complex::geta()
{return a;}

double complex::getb()
{return b;}

void complex::setab(double re,double im)
{a=re; b=im;}

void complex::printValue()
{
	cout<<"\t"<<a<<" + "<<b<<"i"<<endl;
}

complex &operator+(const complex &cplx,const complex &cplx1)
{
	complex cpx(cplx.a+cplx1.a,cplx.b+cplx1.b);
	return cpx;
}

complex &operator-(const complex &cplx,const complex &cplx1)
{
	complex cpx(cplx.a-cplx1.a,cplx.b-cplx1.b);
	return cpx;
}
void complex::Csum(double c,double d)
{
	cout<<"( "<<a<<" + "<<b<<"i ) + ( "<<c<<" + "<<d<<"i ) = ( "<<a+c<<" + "<<b+d<<"i )"<<endl;
}

void complex::Cdeduce(double c,double d)
{
	cout<<"( "<<a<<" + "<<b<<"i ) - ( "<<c<<" + "<<d<<"i ) = ( "<<a-c<<" + "<<b-d<<"i )"<<endl;
}

void complex::Cmultiply(double c,double d)
{
	double mreal,mimage;
	mreal=a*c-b*d;
	mimage=a*d+b*c;
	cout<<"( "<<a<<"+"<<b<<"i ) * ( "<<c<<"+"<<d<<"i ) = ( "<<mreal<<"+"<<mimage<<"i )"<<endl;
}

void complex::Coposite()
{cout<<(-1)*a<<"+("<<(-1)*b<<")i\n";}

void complex::Cdivide(double c,double d)
{
	double r,i,mr,mi;
	r=c/(c*c+d*d);
	i=(-1)*d/(c*c+d*d);
	mr=a*r-b*i;
	mi=a*i+b*r;
	cout<<"division is "<<mr<<"+"<<mi<<"i"<<endl;
}

void complex::Creverse()
{
	double r,i;
	r=a/(a*a+b*b);
	i=(-1)*b/(a*a+b*b);
	cout<<"Reverse is "<<r<<"+"<<i<<"i"<<endl;
}

void complex::mozdavaj()
{cout<<a<<"+"<<"("<<(-1)*b<<")i"<<endl;}

void dest(int a,int b)
{
	double z=a*a+b*b;
	cout<<"Distance is "<<sqrt(z);
}

void polarshowing(int a,int b)
{
	double t;
	t=atan(b/a);
	cout<<"The angle is "<<t;
}
