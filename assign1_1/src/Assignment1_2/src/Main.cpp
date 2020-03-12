/*
 * Main.cpp
 *
 *  class Date
 *  Created on: 03-Mar-2020
 *      Author: sunbeam
 */



#include<iostream>
using namespace std;
typedef struct Date
{
	int day;
	int month;
	int year;

	void init()
	{
	cout<<"initialized date is:";
	day=15;
	month=01;
	year=1997;

	cout<<day<<"/"<<month<<"/"<<year<<endl;
	}

	void accept_date()
	{
	 cout<<"Enter the date:\n";
	 cin>>day>>month>>year;
	}
	void print_date()
	{
		if (leap())
			cout<<"the given year is leap year"<<endl;
		else
			cout<<"the given year is not leap year"<<endl;

		cout<<day<<"/"<<month<<"/"<<year;
	}

	bool leap(void)
	{
		if((year %4==0 && year %100 !=0) || year%400==0)
			return true;
		else
			return false;
	}
}DATE;
#include<iostream>
using namespace std;


int menu_list(void)
{
	int choice;
	cout<<"\n0.exit\n"<<endl;
	cout<<"1.init\n"<<endl;
	cout<<"2.accept date\n"<<endl;
	cout<<"3.print date\n"<<endl;
	cin>>choice;
	return choice;

}


int main(void)
{
	DATE d1;
	int choice;
	while((choice=menu_list()) !=0)
	{
		switch(choice)
		{
		case 1:
			d1.init();
			break;
		case 2:
			d1.accept_date();
			break;
		case 3:
			d1.print_date();
			break;
		}
	}



}
















