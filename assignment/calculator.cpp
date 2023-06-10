#include<iostream>
using namespace std;

class cal
{
public:
	int a,b;
	char op;
	void demo()
	{
	
	cout<<"Please enter Arrithmeatic operator(+,-,*,/,Mod):"<<endl;
	cin>>op;
	
	cout<<"Enter A:";
	cin>>a;
	
	cout<<"Enter B:";
	cin>>b;
	
		switch(op)
		{
			case '+':
				cout<<"Addition of two number is:"<<a+b;
				break;
			case '-':
				cout<<"substraction of two number is:"<<a-b;
				break;
			case '*':
				cout<<"Multiplication of two number is:"<<a*b;
				break;
			case '/':
				cout<<"division of two number is:"<<a/b;
				break;
			case '%':
				cout<<"Module of two number is:"<<a%b;
				break;
			default:
				cout<<"Please enter valid operator";
		}
	}
};
int main()
{
	cal c1;
	c1.demo();
	
	return 0;
}
	
