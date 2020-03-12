/*
 * Main.cpp
 *
 *  Created on: 03-Mar-2020
 *      Author: sunbeam
 */


/*
 * Main.cpp
 *
 *  Created on: 03-Mar-2020
 *      Author: sunbeam
 */

#include<iostream>
using namespace std;
struct Date
{
public:
	int day;
	int month;
	int year;
public:

	Date()
{
		this->day=0;
		this->month=00;
		this->year=0000;
}
	Date(int day,int month,int year)
{
		this->day=day;
		this->month=month;
		this->year=year;
}


	void accept_date()
	{
	 cout<<"Enter the date:\n";
	 cin>>this->day>>this->month>>this->year;
	}
	void print_date()
	{
		if (leap())
			cout<<"the given year is leap year"<<endl;
		else
			cout<<"the given year is not leap year"<<endl;

		cout<<this->day<<"/"<<this->month<<"/"<<this->year;
	}

	bool leap(void)
	{
		if((year %4==0 && year %100 !=0) || year%400==0)
			return true;
		else
			return false;
	}

};



int menu_list(void)
{
	int choice;
	cout<<"\n0.exit\n"<<endl;
	cout<<"1.accept date\n"<<endl;
	cout<<"2.print date\n"<<endl;
	cin>>choice;
	return choice;

}


int main(void)
{
	Date d2;
	Date d3(15,01,2020);
	int choice;
	while((choice=menu_list()) !=0)
	{
		switch(choice)
		{
		case 1:
			d2.accept_date();
			break;
		case 2:
			d2.print_date();
			break;
		}
	}



}
















