#include<iostream>
using namespace std;
class demo
{
	public:
		int a,b;
		
		void get()
		{
			cout<<"Enter A:";
			cin>>a;
			
			cout<<"Enter B:";
			cin>>b;
		}
		friend void max(demo d);
};
void max(demo d)
{
	if(d.a>d.b)
	{
		cout<<"A is Max";
	}
	else
	{
		cout<<"B is Max";
	}
}
int main()
{
	demo s;
	
	s.get();
	
	max(s);
	
	return 0;
}
