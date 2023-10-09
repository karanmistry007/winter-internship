/*  
                Array Operations
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 5 //macro constant
#define SORTING 5


void main(){
int a[SIZE],b[SIZE],ans[SIZE],c[SIZE][SIZE],d[SIZE][SIZE], ans1[SIZE][SIZE]={0},choice,choiceSD,choiceMD;
int i, j;
scan:
clrscr();

for(i=0; i<SIZE; i++){
printf("\nEnter the value of array a[%d]", i);
scanf("%d",&a[i]);
}//end of for

for(i=0; i<SIZE; i++) {
printf("\nEnter the value of array b[%d]", i);
scanf("%d",&b[i]);
}//end of for

for(i=0; i<SIZE; i++){
    for(j=0; j<SIZE; j++){
        printf("\nEnter the value of c[%d][%d]",i,j);
        scanf("%d",&c[i][j]);
        }//end of inner for

    }//end of outer for

for(i=0; i<SIZE; i++){
    for(j=0; j<SIZE; j++){
        printf("\nEnter the value of c[%d][%d]",i,j);
        scanf("%d",&d[i][j]);
        }//end of inner for

    }//end of outer for

printf("\nThe single dimension array is\n");
for(i=0; i<SIZE; i++) {
    printf("%d\t",a[i]);
    }//end of for

printf("\nThe single dimension array is\n");
for(i=0; i<SIZE; i++){
    printf("%d\t",b[i]);
    }//end of for

printf("\nThe 2d dimension dimension array is\n");
for(i=0; i<SIZE; i++) {
    for(j=0; j<SIZE; j++){
        printf("%d\t",c[i][j]);
        }//end of inner for
    printf("\n");
    } //end of outer for

printf("\n");
for(i=0; i<SIZE; i++){
    for(j=0; j<SIZE; j++){
        printf("%d\t",d[i][j]); 
        }//end of inner for
    printf("\n");
    }//end of outer for

for (;;) {
    printf("\n1----Single Dimension");
    printf("\n2----2 Dimension");
    printf("\n3----scan the array again");
    printf("\n4----exit");
    printf("\nEnter the choice ");
    scanf("%d",&choice);
    switch(choice) {
        case 1: printf("\n1------Addition");
                printf("\n2------subtraction");
                printf("\n3------multiplication");
                printf("\n4------division");
                printf("\n5------sorting");
                printf("\n6------searching"); 
                printf("\nEnter the choice ");
                scanf("%d", &choiceSD);

                switch(choiceSD){
                    case 1:for(i=0;i<SIZE;i++){
                                ans[i]=a[i]+b[i];
                            } //end of SD addition

                            for(i=0;i<SIZE;i++){
                                printf("\n%d + %d = %d",a[i],b[i],ans[i]);
                            } //end of SD addition 
                            break;
                            
                    case 2:for(i=0;i<SIZE;i++){
                                ans[i]=a[i]-b[i];
                            } //end of SD addition 
                            for(i=0;i<SIZE;i++){
                                printf("\n%d - %d = %d",a[i],b[i],ans[i]);
                            } //end of SD addition 

                            break;

                    case 3:for(i=0;i<SIZE;i++) {
                                ans[i]=a[i]*b[i];
                            } //end of SD addition

                            for(i=0;i<SIZE;i++){
                                printf("\n%d * %d = %d",a[i],b[i],ans[i]);
                                } //end of SD addition

                            break;

                    case 4:for(i=0;i<SIZE;i++){
                                ans[i]=a[i]/b[i];
                            } //end of SD addition

                            for(i=0;i<SIZE;i++){
                                printf("\n%d / %d = %d",a[i],b[i],ans[i]);
                                } //end of SD addition
                            break;

                    case SORTING: printf("sorting");
                            break;

                    case 6:printf("Searching");
                            break;
                }//end of Single Dimension switch
                break;

        case 2:printf ("\n1--Addition");
                printf("\n2--subtraction");
                printf("\n3--multiplication");
                printf("\n4--division");
                printf("\n5--sorting");
                printf("\n6-searching");
                printf("\nEnter the choice"); 
                scanf("%d", &choiceMD);
                switch(choiceMD){

                    case 1:for(i=0;i<SIZE;i++) {
                                for(j=0; j<SIZE; j++){
                                    ans1[i][j]=c[i][j]+d[i][j];
                                } //end of SD addition
                            }//end of outer for

                            for(i=0;i<SIZE;i++){
                                for(j=0; j<SIZE; j++){
                                    printf("\n%d + %d = %d",c[i][j],d[i][j],ans1[i][j]);
                                } //end of SD addition
                            }//end of outer for

                            break;

                    case 2:for(i=0;i<SIZE;i++) {
                                for(j=0; j<SIZE; j++){
                                    ans1[i][j]=c[i][j]-d[i][j];
                                } //end of SD addition
                            }//end of outer for

                            for(i=0;i<SIZE;i++){
                                for(j=0; j<SIZE; j++) {
                                    printf("\n%d-%d= %d",c[i][j],d[i][j],ans1[i][j]);
                                } //end of SD addition
                            }//end of outer for
                            break;

                    case 3: printf("\nMatrix multiplication");
                            break;


                    case 4:for(i=0;i<SIZE;i++){
                                for(j=0;j<SIZE; j++){
                                    ans1[i][j]=c[i][j]/d[i][j];
                                } //end of SD addition
                            }//end of outer for

                            for(i=0;i<SIZE;i++){
                                for(j=0; j<SIZE; j++){
                                    printf("\n%d / %d = %d",c[i][j],d[i][j],ans1[i][j]);
                                } //end of SD addition
                            }//end of outer for
                            break;


                    case SORTING: printf("\nThis is sorting");
                                break;

                    case 6:printf("\nsearching");
                }//end of Multi Dimension switch
            
                break;

        case 3:goto scan;

        case 4: exit(0);

    }//end of switch

getch();

}//end of for

}//end of main

