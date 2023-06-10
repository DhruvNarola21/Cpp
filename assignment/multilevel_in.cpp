#include<iostream>
using namespace std;
class student
{
	public:
		int enroll;
		
		void roll()
		{
			cout<<"Enter Roll Number:";
			cin>>enroll;
			
			cout<<"Enroll Is:"<<enroll<<endl;
		}
};
class test:public student
{
	public:
		int sub1,sub2;
		void sub()
		{
			cout<<"Enter Subject 1 Marks:";
			cin>>sub1;

			cout<<"Enter Subject 2 Marks:";
			cin>>sub2;
			
			cout<<"Subject 1 Marks Is:"<<sub1<<endl;		
			cout<<"Subject 2 Marks Is:"<<sub2<<endl
			;

		}
};
class result:public test
{
	public:
		int total;
		
		void tot()
		{
			total=sub1+sub2;
			cout<<"Your total marks is:"<<total<<endl;
		}
};
int main()
{
	result r;
	r.roll();
	r.sub();
	r.tot();
	
	return 0;
}
