#include<iostream>
using namespace std;
int main()
{
	int basicsalary,hra,da;
	float grossalary;
	cout<<"enter the basic salary,hra,da";
	cin>>basicsalary>>hra>>da;
	hra =  basicsalary*0.1;
	da =basicsalary*0.14;
	grossalary=basicsalary+0.1+0.14;
	cout<<"grosslary of an employe is"<<grossalary;
	return 0;
	
	
}
