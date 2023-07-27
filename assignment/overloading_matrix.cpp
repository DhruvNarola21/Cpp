#include<iostream>
using namespace std;
class demo
{
	public:
			int a,b,i;

		void first()
		{
		
			int a[5];
			for(i=0;i<5;i++)
			{
				cout<<"Enter Element:";
				cin>>a[i];
			}
			for(int i=0;i<5;i++)
			{
				cout<<a[i]<<endl;
			}
			cout<<endl;
		}
		void second()
		{
		
			int b[5];
			for(i=0;i<5;i++)
			{
				cout<<"Enter Element:";
				cin>>b[i];
			}
			for(int i=0;i<5;i++)
			{
				cout<<b[i]<<endl;
			}
			cout<<endl;
		}
};
int main()
{
	demo d;
	
	d.first();
	
	d.second();
	
	return 0;
}
