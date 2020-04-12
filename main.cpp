#include <iostream>
#include "Complex.h"
#include "Fraction.h"

using namespace std;

int main ()
{
	double a,b;
	double a1,b1;
	int choose;
	
	cout<<" First complex : \n Please Enter 2 number : \n";
	cin>>a>>b;
		system("cls");
		cout<<endl; 
		complex cplx(a,b);
		cplx.printValue();
		cout<<"\n what do want to do with the complex??\n Enter number :\n";
		cout<<" 1.sumation \t 2.deduce \t 3.multiply \t 4.oposite \t 5.divide \n 6.reverce\t 7.mozdavaj\t 8.destintion\t 9.polar showing\t 10.next\n";
	int n;
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<"you choose sumation :\n please enter 2 other numbers \n";
			cin>>a1>>b1;
			cplx.Csum(a1,b1);
			break;
			case 2:
				cout<<"you choose deduce :\n please enter 2 other numbers \n";
				cin>>a1>>b1;
				cplx.Cdeduce(a1,b1);
				break;
			case 3:
			cout<<"you choose multiply :\n please enter 2 other numbers \n";
			cin>>a1>>b1;
			cplx.Cmultiply(a1,b1);
			break;
			case 4:
				cout<<"you choose oposite :\n ";
				cplx.Coposite();
				break;
			case 5:
				cout<<"you choose divide :\n please enter 2 other numbers \n";
			cin>>a1>>b1;
			cplx.Cdivide(a1,b1);
			break;
			case 6:
			cout<<"you choose reverce :\n ";
				cplx.Creverse();
				break;
			case 7:
				cout<<"you choose mozdavzj :\n ";
				cplx.mozdavaj();
				break;
				case 8:
					cout<<"you choose destintion :\n";
					dest (a,b);
					break;
					case 9:
						cout<<"you choose polar showing :\n";
						polarshowing (a,b);
						break;
						case 10:
							cout<<"Ok ! lets go to another kind of number ;)\n";
							break;
				default:
					cout<<"\n you choose wrong.try again later... ";
	}
	cout<<"\n *if you enter your number wrong or you want to use other numbers try it again !* \n **Thank you**\n";
	int x,u,v,u1,v1;
	cout<<"Do you want to continue : 0 no 1.yes\n";
	cin>>x;
	if (x!=1){
		system("cls");
		cout<<"wrong :( \n";
		return 0;
	}
	
	else if (x==1 )
	{
		cout<<" Second deciminal number : \n Please Enter 2 number : \n";
		cin>>u>>v;
		numk num(u,v);
		system("cls");
		cout<<endl;
		num.printValue();
		cout<<"\n what do want to do with the number??\n Enter number :\n";
		cout<<" 1.sumation \t 2.deduce \t 3.multiply \t 4.divide\n";
	int newn;
	cin>>newn;
	switch(newn)
	{
		case 1:
			cout<<"you choose sumation :\n please enter 2 other numbers \n";
			cin>>u1>>v1;
			num.ksum(u1,v1);
			break;
			case 2:
				cout<<"you choose deduce :\n please enter 2 other numbers \n";
				cin>>u1>>v1;
				num.kdeduce(u1,v1);
				break;
			case 3:
			cout<<"you choose multiply :\n please enter 2 other numbers \n";
			cin>>u1>>v1;
			num.kmultiply(u1,v1);
			break;
			case 4:
				cout<<"you choose divide :\n please enter 2 other numbers \n";
			cin>>u1>>v1;
			num.kdivide(u1,v1);
			break;
				default:
					cout<<"\n you choose wrong.try again later... ";
	}
	}

	cin.get();
}
