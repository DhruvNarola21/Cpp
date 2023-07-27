#include<iostream>
using namespace std;
class demo
{
	public:
		int a,b,mul,cube;
		
		inline void multi(int a,int b)
		{
			mul=a*b;
			cout<<"Mul is:"<<mul<<endl;
		}
		inline void cub(int a)
		{
			cube=a*a*a;
			cout<<"Cube is:"<<cube<<endl;
		}
};
int main()
{

	demo d1;
	d1.multi(10,2);
	d1.cub(10);
		
	return 0;
}
