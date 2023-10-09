#include<conio.h>
#include<stdio.h>
void add();
int sub();
int mult(int x,int y);
void div(float,float);

void add(){
	int a,b,c;
	gotoxy(40,11);
	cprintf("Enter the Value of a and b");
	scanf("%d%d",&a,&b);
	c=a+b;
	gotoxy(40,12);
	cprintf("The addition od %d and %d is %d",a,b,c);

}

int sub(){
	int a,b,c;
	gotoxy(40,13);
	cprintf("Enter the Value of a and b");
	scanf("%d%d",&a,&b);
	c=a-b;
	return c;
}



int mul(int x,int y){
	int ans;
	ans=x*y;
	return ans;

}

void div(){
	float z;
	z=x/y;
	return z;
}


