#include<stdio.h>
#include<conio.h>
#define SIZE 2
struct Student{
	int sid;
	char name[30];
	float fees,maths,comp,eng,total,per;
	char grade;
	int flag;
}s[SIZE];
void scanStudentDetails();
void displayStudentDetails();
void calculateMarksheet(int i);
int search(int id);
void update(int id);
void displayParticular(int index);
void del(int id);


void main(){
	int choice,id,index=-1;
	while(1){
		clrscr();
		printf("\n1----->Create Students");
		printf("\n2----->Display Students");
		printf("\n3----->Search");
		printf("\n4----->Update details");
		printf("\n5----->Delete details");
		printf("\n6----->Exit");
		printf("\nEnter the choice");
		scanf("%d",&choice);

		switch(choice){
			case 1:scanStudentDetails();
				break;
			case 2:displayStudentDetails();
				break;
			case 3:printf("\nEnter the id you wanna search ");
				scanf("%d",&id);
				index=search(id);
				if(index>=0){
					displayParticular(index);
				}//end ofif
				else{
					printf("\nNo record found");
				}//end of else
				getch();
				break;
			case 4:printf("\nEnter the id you wanna update ");
				scanf("%d",&id);
				update(id);
				break;
			case 5:printf("\nEnter the id you wanna delete ");
				scanf("%d",&id);
				del(id);
				displayStudentDetails();
				getch();
				break;
			case 6:exit(0);
			default:printf("Invalid Choice");
		}//end of switch
		getch();
	}//end of while
}//end of main

void scanStudentDetails(){
	float temp,i;
	for(i=0;i<SIZE;i++){
	printf("\nEnter thr sid ");
	scanf("%d",&s[i].sid);
	printf("\nEnter the Name ");
	scanf("%s",&s[i].name);
	printf("\nEnter fees ");
	scanf("%f",&temp);
	s[i].fees=temp;
	printf("\nEnter marks of comp,eng,maths");
	scanf("%f",&temp);
	s[i].comp=temp;
	scanf("%f",&temp);
	s[i].eng=temp;
	scanf("%f",&temp);
	s[i].maths=temp;
	calculateMarksheet(i);
	s[i].flag=1;
	}//end of for
}//end of scan

void calculateMarksheet(int i){
	s[i].total=0;
	s[i].per=0;
	s[i].total=s[i].maths+s[i].eng+s[i].comp;
	s[i].per=s[i].total/3;
	if(s[i].per>=90){
		s[i].grade='A';
	}//end of if
	else{
		s[i].grade='B';
	}//end of else
}//end of calculate

void displayStudentDetails(){
	int i;
	printf("\nsid\tname\tfees\tcomp\teng\tmaths\ttotal\tper\tgrade\n");
	for(i=0;i<SIZE;i++){
	      if(s[i].flag==1){
			printf("\n%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%c",s[i].sid,s[i].name,s[i].fees,s[i].comp,s[i].maths,s[i].eng,s[i].total,s[i].per,s[i].grade);
		}//end of if
	}//end of for
}//end of display

int search(int id){
	int i;
	int found=-1;
	for(i=0;i<SIZE;i++){
		if(s[i].sid==id){
			found=i;
			return found;
		}//end of if
	}//end of for
	return found;
}//end of search

void displayParticular(int index){
	clrscr();
	if(s[index].flag==1){
		printf("\nsid\tname\tfees\tcomp\tmaths\teng\ttotal\tper\tgrade\n");
		printf("\n%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%c",s[index].sid,s[index].name,s[index].fees,s[index].comp,s[index].maths,s[index].eng,s[index].total,s[index].per,s[index].grade);
	}//end of if
}//end of display

void update(int id){
	int index=-1,choice,choice1;
	float temp;
	index=search(id);
	if(index>=0){
		printf("\n1------>Update name");
		printf("\n2------>Update marks");
		printf("\n3------>Update fees");
		printf("Enter the choice ");
		scanf("%d",&choice);

		switch(choice){
			case 1:displayParticular(index);
				printf("\nPlease enter the new name ");
				scanf("%s",s[index].name);
				printf("nRecord has been updated");
				displayParticular(index);
				getch();
				break;
			case 2:printf("\n1------>eng");
				printf("\n2------>maths");
				printf("\n3------>com");
				printf("\n4------>all marks");
				printf("\nEnter the choice ");
				scanf("%d",&choice1);
					switch(choice1){
						case 1:clrscr();
							displayParticular(index);
							printf("\nEnter the new english marks");
							scanf("%f",&temp);
							s[index].eng=temp;
							printf("\nThe updated marks are \n");
							calculateMarksheet(index);
							displayParticular(index);
							getch();
							break;
						case 2:clrscr();
							displayParticular(index);
							printf("\nEnter the new maths marks");
							scanf("%f",&temp);
							s[index].maths=temp;
							printf("\nThe updated marks are \n");
							calculateMarksheet(index);
							displayParticular(index);
							getch();
							break;
						case 3:clrscr();
							displayParticular(index);
							printf("\nEnter the new computer marks");
							scanf("%f",&temp);
							s[index].comp=temp;
							printf("\nThe updated marks are \n");
							calculateMarksheet(index);
							displayParticular(index);
							getch();
							break;
						case 4:clrscr();
							displayParticular(index);
							printf("\nEnter the new english marks");
							scanf("%f",&temp);
							s[index].eng=temp;
							printf("\nEnter the new maths marks");
							scanf("%f",&temp);
							s[index].maths=temp;
							printf("\nEnter the new computer marks");
							scanf("%f",&temp);
							s[index].comp=temp;
							printf("\nThe updated marks are \n");
							calculateMarksheet(index);
							displayParticular(index);
							getch();
							break;
					}//end of inner switch
					break;

			case 3:clrscr();
				displayParticular(index);
				printf("\nEnter the fees youn wanna update ");
				scanf("%f",&temp);
				s[index].fees=temp;
				printf("\nUpdated fees are");
				displayParticular(index);
				getch();
				break;
				}//end of outer switch
				}//end of if
				else
				{
					printf("\nThe record to be updated not found");
				}

}//end of update

void del(int id){
	int index=-1;
	index=search(id);
	if(index>=0){
		s[index].flag=-1;
	}//end of if
	else{
		printf("\nThe data yo wanna delete not found");
	}//end of else
}//end of del