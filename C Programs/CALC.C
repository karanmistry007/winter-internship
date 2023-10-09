#include<cal.h>
void main(){
	int choice;
	int ans;
	float p,q,r;
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
		cprintf("5-------->Exit");
		gotoxy(40,10);
		textcolor(CYAN);
		cprintf("Enter the Choice");
		scanf("%d",&choice);

		switch(choice){
			case 1:gotoxy(40,10);
			       add();
			       break;
			case 2:ans=sub();
			       gotoxy(40,14);
			       printf("The Value of Subtraction is %d",ans);
			       break;
			case 3:ans=mult();
			       gotoxy(40,14);
			       printf("The Value of Multiplication is %d",ans);
			       break;
			case 4:gotoxy(40,10);
			       div();

			       break;
			case 5:exit(0);

		}//end of switch
		getch();

	}//end of while


}//end of main