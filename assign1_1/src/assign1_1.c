/*
 ============================================================================
 Name        : assign1_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
 * Main.c
 *
 *  Created on: 03-Mar-2020
 *      Author: sunbeam
 */
#include<stdio.h>
#include<stdlib.h>

typedef struct Date
{
	int day;
	int month;
	int year;
}DATE;

void init(DATE *d1)
{
printf("initialized date is:");
d1->day=15;
d1->month=01;
d1->year=1997;

printf("%d / %d / %d", d1->day,d1->month,d1->year);
}

void accept_date(DATE *d1)
{
 printf("Enter the date:\n");
 scanf("%d %d %d",&d1->day,&d1->month,&d1->year);
}
void print_date(DATE *d1)
{
	printf("%d %d %d",d1->day,d1->month,d1->year);

}

int menu_list(void)
{
	int choice;
	printf("0.exit\n");
	printf("1.init\n");
	printf("2.accept_date\n");
	printf("3.print_date\n");
	printf("Enter choice:\n");
	scanf("%d",&choice);
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
			init(&d1);
			break;
		case 2:
			accept_date(&d1);
			break;
		case 3:
			print_date(&d1);
			break;
		}
	}



}
















