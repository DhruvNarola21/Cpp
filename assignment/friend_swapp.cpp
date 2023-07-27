#include<iostream>
using namespace std;

class demo
{
	
	
	public:
		int a,b;
		
		void swap()
		{
			cout<<"Enter A:";
			cin>>a;
			
			cout<<"Enter B:";
			cin>>b;
		}
		friend void func(demo d);
};
void func(demo d)
{
	d.a=d.a+d.b;
	d.b=d.a-d.b;
	d.a=d.a-d.b;
	
	cout<<"After Swapping"<<endl<<"A is "<<d.a<<endl<<"B is "<<d.b<<endl;
}
int main()
{
	demo s;
	
	s.swap();
	
	func(s);
	
	return 0;
}
