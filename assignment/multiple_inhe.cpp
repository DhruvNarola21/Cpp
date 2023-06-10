#include<iostream>
using namespace std;
class person
{
	public:
		string name;
		int age;
		
		void info()
		{
			cout<<"Enter Your Name:";
			cin>>name;
			
			cout<<"Enter Your Age:";
			cin>>age;
		}
};
class student
{
	public:
		int per;
		
		void percen()
		{
			cout<<"Enter Percentage:";
			cin>>per;
			
			cout<<"Percentage Is:"<<per<<endl;
		}
};
class teacher:public person,public student
{
	public:
		int sal;
		
		void salry()
		{
			cout<<"Enter Your salary:";
			cin>>sal;
			
			cout<<"Salary Is:"<<sal;
		}
};
int main()
{
	teacher t;
	t.info();
	t.percen();
	t.salry();
	
	return 0;
}
