/* binary search*/
#include<stdio.h>
#include<conio.h>
void main(){
	    int a[30],temp,pass,i,j,size,mid,high,low,s_key;

	    clrscr();

	    printf("\n Enter The Size Of Table:-");
	    scanf("%d",&size);

	    for(i=0;i<size;i++){

		    printf("\n Enter The Value For Element[%d]:-",i+1);
		    scanf("%d",&a[i]);

	    }

	    printf("\n Enter No. Which You Want To Search In Table:-");
	    scanf("%d",&s_key);


	low = 0;
	high = size;
	while(low<=high){

	mid = (low+high) / 2;
	if(a[mid]==s_key){

	printf("\n The NO. Is At Location [%d]",mid);
	break;
	}
	else{
		if(s_key>a[mid]){
			low=mid+1;
			}
			else{
				high=mid-1;
			}


	}//end of else
    }//end of if

	if(a[mid]!=s_key){
	printf("\n [%d] Is Not Found ",s_key);
    }
    getch();
}