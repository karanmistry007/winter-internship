/*
	Author-:Karan Mistry
	DOC-:7th Feb 2023
	Objective-:To create a candy game
*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int candyX=10,candyY=5,boxX=40,boxY=14,score=0,lifeline=3,d;
    char ch;
    textbackground(BLUE);
    start:
    clrscr();
    gotoxy(60,5);
    cprintf("Score=%d",score);
    gotoxy(60,6);
    cprintf("Life line =%d",lifeline);
    gotoxy(candyX,candyY);
    textcolor(YELLOW);
    cprintf("0"); //calling the function
    gotoxy(boxX,boxY);
    textcolor(CYAN);
    cprintf("#");
    gotoxy(boxX+7,boxY);
    cprintf("#");
    gotoxy(boxX,boxY+1);
    cprintf("########");
    if(kbhit())
    {
	ch=getch();
	switch(ch)
	{
	    case 'a' : if(boxX>1)
	    {
		boxX--;
	    }
	    break;

	     case 'A' : if(boxX>1)
	    {
		boxX--;
	    }
	    break;

	     case 'd' : if(boxX<73)
	    {
		boxX++;
	    }
	    break;

	     case 'D' : if(boxX<73)
	    {
		boxX++;
	    }
	    break;
	    case 'x' : exit(0);
	}//end of switch
    }//end of if

    candyY++;
    if(candyY==14)
    {
	d=candyX-boxX;
	if(d>=1 && d<=16)
	{
	    score++;

	}
	else
	{
	    lifeline--;
	    if(lifeline==0)
	    {
		clrscr();
		gotoxy(40,13);
		textcolor(RED);
		sound(200);//in hertz
		delay(200);
		nosound();
		cprintf("GAME OVER");
		getch();
		exit(0);
	    }
	}

	candyY=1;
	candyX=rand()%80+1;
    }

    delay(200);
    goto start;

}//end of main