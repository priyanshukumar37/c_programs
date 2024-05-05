#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i;
    int maxnumber=0;
    printf("\n enter 5 integer number");
    for(i=0;i<=4;i++){
        printf("Please Enter Number: \n");
        scanf("%d",&a[i]);
    };
    for(i=0;i<=4;i++){
    if(maxnumber<a[i]){
    maxnumber = a[i];
    }
    }
    printf("Maximum Number: ");
    printf("%d",maxnumber);
    getch();
}
