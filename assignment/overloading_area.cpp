#include<iostream>
using namespace std;
class demo
{
	public:
		float r,ans,l,b,h;
		
		void area()
		{
			cout<<"****Area Of Circle***"<<endl;
			
			cout<<"Enter Radius:";
			cin>>r;
			
			ans=3.14*r*r;
			
			cout<<"Area Of circle is:"<<ans<<endl;
		}
		void area(float b)
		{
			cout<<"****area of rectangle****"<<endl;
			
			cout<<"Enter length:";
			cin>>l;
			
			ans=l*b;
			
			cout<<"Area of rectangle is:"<<ans<<endl;
		}
		void area(float l,float h)
		{
			cout<<"*****Area of Triangle*****"<<endl;
			
			ans=0.5*l*h;
			
			cout<<"Area of triangle is:"<<ans<<endl;
		}
		
};
int main()
{
	demo d;
	
	d.area();
	
	d.area(10);
	
	d.area(10,5);
	
	return 0;
}

