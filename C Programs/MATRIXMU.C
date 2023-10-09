#include<stdio.h>
#include<conio.h>
#define ROW1 3
#define ROW2 3
#define COL1 3
#define COL2 3
void main(){
	int a[ROW1][COL1],b[ROW2][COL2],c[ROW1][COL2]={0};
	int i,j,k;
	clrscr();
	for(i=0;i<ROW1;i++){
		for(j=0;j<COL1;j++){
		printf("\n Enter the Matrix a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
		}//end of inner for
	}//end of outer for

	for(i=0;i<ROW2;i++){
		for(j=0;j<COL2;j++){
		printf("\n Enter the Matrix b[%d][%d]",i,j);
		scanf("%d",&b[i][j]);
		}//end of inner for
	}//end of outer for

	for(i=0;i<ROW1;i++){
		for(j=0;j<COL2;j++){
			for(k=0;k<COL2;k++){

			c[i][j]=c[i][j]+(a[i][k]*b[k][j]);

			}//end of inner most for
		}//end of inner for
	}//end of outer for



	for(i=0;i<ROW1;i++){
		for(j=0;j<COL1;j++){
		printf("%d\t",c[i][j]);

		}//end of inner for
	printf("\n");
	}//end of outer for

getch();
}//end of main
