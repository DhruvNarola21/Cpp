#include<iostream>
using namespace std;
class bank
{
	public:
		int acc_num,bal_acc,dep,totalamt,with;
		string name,type_acc;
		
		void value()
		{
			cout<<"Enter Your Name:";
			cin>>name;
			
			cout<<"Enter Your Account Number:";
			cin>>acc_num;
			
			cout<<"Enter Your Type Of your account:";
			cin>>type_acc;		
			
			cout<<"Enter Your account balance:";
			cin>>bal_acc;
		}
		void deposit()
		{
			cout<<"Enter YOur deposite Amount:";
			cin>>dep;
			
			totalamt=bal_acc+dep;
			
			cout<<"Total amount is:"<<totalamt<<endl;
		}
		void withdraw()
		{
			cout<<"Enter YOur withdrawal Amount:";
			cin>>with;
			
			totalamt=totalamt-with;
			
			cout<<"Total amount is:"<<totalamt<<endl;						
		}
		void info()
		{
			cout<<"Name is:"<<name<<endl;
			cout<<"Balance is:"<<totalamt;
		}
};
int main()
{
	bank b;
	b.value();
	b.deposit();
	b.withdraw();
	b.info();
}
