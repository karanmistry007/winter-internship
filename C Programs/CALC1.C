/*
				Calcularor
*/
#include<stdio.h>
#include<conio.h>
void add();
void sub();
void mult();
void div();

void add(){
	int a,b,c;
	gotoxy(40,11);
	cprintf("Enter the Value of a and b");
	scanf("%d%d",&a,&b);
	c=a+b;
	gotoxy(40,12);
	cprintf("The addition of %d and %d is %d",a,b,c);

}//end of add

void sub(){
	int a,b,c;
	gotoxy(40,11);
	cprintf("Enter the Value of a and b");
	scanf("%d%d",&a,&b);
	c=a-b;
	gotoxy(40,12);
	cprintf("The subtraction of %d and %d is %d",a,b,c);

}//end of sub


void mult(){
	int a,b,c;
	gotoxy(40,11);
	cprintf("Enter the Value of a and b");
	scanf("%d%d",&a,&b);
	c=a*b;
	gotoxy(40,12);
	cprintf("The multiplication of %d and %d is %d",a,b,c);

}//end of mult


void div(){
	int a,b;
	float c;
	gotoxy(40,11);
	cprintf("Enter the Value of a and b");
	scanf("%d%d",&a,&b);
	c=a/b;
	gotoxy(40,12);
	cprintf("The division of %d and %d is %d",a,b,c);

}//end of div

void main(){
	int i,choice;
	float f;
	textbackground(BLUE);
	while(1){
		clrscr();
		gotoxy(40,5);
		textcolor(YELLOW);
		cprintf("1-------->Addition");
		gotoxy(40,6);
		cprintf("2-------->Subtraction");
		gotoxy(40,7);
		cprintf("3-------->Multiplication");
		gotoxy(40,8);
		cprintf("4-------->Division");
		gotoxy(40,9);
		cprintf("5-------->exit");
		gotoxy(40,10);
		textcolor(CYAN);
		cprintf("Enter The Choice");
		scanf("%d",&choice);

		switch(choice){
			case 1:gotoxy(40,10);
				add();
				break;
			case 2:gotoxy(40,10);
				sub();
				break;
			case 3:gotoxy(40,10);
				mult();
				break;
			case 4:gotoxy(40,10);
				div();
				break;
			case 5:exit(0);
		}//end of switch

		getch();

	}//end of while

}//end of main
