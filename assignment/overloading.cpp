#include<iostream>
using namespace std;
class demo
{
	public:
		int a,b,ans;
		
		void math()
		{
			cout<<"Enter A & B:";
			cin>>a>>b;
			
			ans=a+b;
			cout<<"Addition is:"<<ans<<endl;
		}
		void math(int a)
		{
			cout<<"Enter B:";
			cin>>b;
			
			ans=a-b;
			cout<<"Minus Is:"<<ans<<endl;
		}
		void math(int a,int b)
		{
			ans=a*b;
			cout<<"Mul is:"<<ans<<endl;
		}
		void div(int a,float b)
		{
			ans=a/b;
			cout<<"Division is:"<<ans<<endl;
		}
};
int main()
{
	demo d;
	
	cout<<"****Addition*****"<<endl;
	d.math();
	
	cout<<"****Substraction*****"<<endl;
	d.math(20);
	
	cout<<"****Multiply*****"<<endl;
	d.math(10,5);
	
	cout<<"****Division*****"<<endl;
	d.math(10,2.5);
	
	return 0;
	
	
}
