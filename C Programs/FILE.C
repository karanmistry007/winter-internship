/*
	STRING FUNCTION
*/

#include<stdio.h>
#include<conio.h>

void main(){
	FILE *fp1,*fp2;
	int num,i;
	clrscr();
	fp1=fopen("even.txt","w+");
	fp2=fopen("odd.txt","w+");
	for(i=0;i<10;i++){
		printf("\nEnter the number ");
		scanf("%d",&num);
		if(num%2==0){
			putw(num,fp1);
		}//end of if
		else{
			putw(num,fp2);
		}//end of else
	}//end of for
	printf("\nThe cursor is at %d place",ftell(fp1));
	printf("\nThe cursor is at %d place",ftell(fp2));
	fseek(fp1,0L,SEEK_SET);
	fseek(fp2,0L,SEEK_SET);
	printf("\nThe cursor is at %d place",ftell(fp1));
	printf("\nThe cursor is at %d place",ftell(fp2));
	getch();
	clrscr();
	printf("\nThe even numbers are as follows ");
	while((num=getw(fp1))!=EOF){
		printf("%d\t",num);
	}//end of while
	fclose(fp1);

	printf("\nThe odd numbers are as follows ");
	while((num=getw(fp2))!=EOF){
		printf("%d\t",num);
	}//end of while
	fclose(fp2);
	getch();

}//end of main