#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,result;
    char operation;
    printf("enter first number : ");
    scanf("%d",&a);
    printf("enter second number :");
    scanf("%d",&b);
    printf("Mode of Operation : ");
    scanf("%c",&operation);
    if(operation == 'a'){
        result = a+b;
    }else if(operation == 's') {
        result = a-b;
    } else if(operation='m'){
        result = a*b;
    }else {
        result = a%b;
    }
    printf("Final Result = %d",result);
    return 0;
}