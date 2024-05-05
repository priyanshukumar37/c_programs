#include<stdio.h>
int main(){
    int x;
    printf("enter first number : ");
    scanf("%d",&x);
    int y;
    printf("enter second number : ");
    scanf("%d",&y);
    if (x>y)
    {
        printf("%d is greater than %d", x,y);
    }
    else{
        if (x<y)
        {
            printf("%d is smaller than %d", x,y);
        }
        else{
            printf("both are equal");
        }
        
    }
    printf("\nthankyou");
    return 0;
}