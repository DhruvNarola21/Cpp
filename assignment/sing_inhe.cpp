#include<iostream>
using namespace std;
class cricketer
{
	public:
		
	string name;
	
	void info()
	{
		cout<<"Enter a name of Batsman:";
		cin>>name;	
	}
};
class batsman:public cricketer
{
	public:
		int avg_run,c_best,tot_run,run;
		
		void avg()
		{
			for(int i=0;i<3;i++)
			{
				cout<<"Enter a Past Score:";
				cin>>run;
			}
			avg_run=run+run+run/3;
			cout<<"Average run Of Batsman Is:"<<avg_run<<endl;
		}
		void best()
		{
			cout<<"Enter a Highest Score:";
			cin>>run;
		}
		void total()
		{
			tot_run=run+run+run;
			cout<<"Total run Of Batsman Is:"<<tot_run<<endl;
				
		}
};
int main()
{
	batsman b;
	b.info();
	b.best();
	b.avg();
	b.total();
	
	return 0;
}
