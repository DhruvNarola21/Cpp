#include<iostream>
using namespace std;

class demo
{
	public:
		
		int a,b,add,mul,div,sub;
		
		demo()
		{
			cout<<"Enter A & B:";
			cin>>a>>b;
			
			add=a+b;
			sub=a-b;
			mul=a*b;
			div=a/b;
			
			cout<<"Addition is:"<<add<<endl;
			cout<<"Minus is:"<<sub<<endl;
			cout<<"Multiplication is:"<<mul<<endl;
			cout<<"Division is:"<<div<<endl;

		}
};
int main()
{
	
	demo obj;
	
	return 0;
	
}
