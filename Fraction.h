#include <iostream>

using namespace std;

class numk
{
	int m,n;
	public:
		
		numk(int x,int y);
		
		~numk();
		int getm();
		int getn();
		void setm(int x);
		void setn(int y);
		void printValue();
		void ksum(int v,int u);
		void kdeduce(int v,int u);
		void kmultiply(int v,int u);
		void kdivide(int v,int u);
};

numk::numk(int x, int y)
{
	m=x;
	n=y;
}


numk::~numk()
{
	cout<<"\n The Process complete\n";
	cin.get();
}

int numk::getm()
{return m;}

int numk::getn()
{return n;}

void numk::setm(int x)
{m=x;}

void numk::setn(int y)
{n=y;}

void numk::printValue()
{
	cout<<m<<"/"<<n<<" = "<<(double)m/n<<endl;
}

void numk::ksum(int v,int u)
{
	double s;
	s=(double)((m*u+n*v)/(n*u));
	cout<<m<<"/"<<n<<" + "<<v<<"/"<<u<<" = "<<s<<endl;
}

void numk::kdeduce(int v,int u)
{
	double d;
	d=(double)((m*u-n*v)/(n*u));
	cout<<m<<"/"<<n<<" - "<<v<<"/"<<u<<" = "<<d<<endl;
}

void numk::kmultiply(int v,int u)
{
	double mul;
	mul=(double)((m*v)/(n*u));
	cout<<m<<"/"<<n<<" * "<<v<<"/"<<u<<" = "<<mul<<endl;
}

void numk::kdivide(int v,int u)
{
	double di;
	di=(double)((m*u)/(n*v));
	cout<<m<<"/"<<n<<" / "<<v<<"/"<<u<<" = "<<di<<endl;
}
