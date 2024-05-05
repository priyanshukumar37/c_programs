#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],i;
    int minimumnumber=1000;
    printf("Enter 5 integer number\n");
    for(i=0;i<=4;i++){
    printf("please enter number: ");
    scanf("%d",&a[i]);
    };
    for(i=0;i<=4;i++){
        minimumnumber = minimumval(minimumnumber, a[i]);
    }
    printf("minimum number:");
    printf("%d",minimumnumber);
    return 0;
}

int minimumval(int x, int y)  
{  
    if(y<x){
    return y;  
    }else {
        return x;
    }
} 



