#include<stdio.h>
int snakewatergun(char you, char comp){
    //returns 1 if you win , -1 if you lose, and 0 if draw
    //condition for draw
    //ss
    //gg
    //ww
    if(you==comp){
        return 0;
    }
    // condition for not draw
    //sg//snake gun case
    //sw snake water case
    //gw gun water case
    if(you=='s'&& comp=='w'){
        return 1;
    }
    else if (you=='w' && comp=='s'){
        return -1;
    }
    if(you=='s'&& comp=='g'){
        return -1;
    }
    else if (you=='g' && comp=='s'){
        return 1;
    }
    if(you=='w'&& comp=='s'){
        return -1;
    }
    else if(you=='s' && comp=='w') {
        return 1;
    }
    if(you=='g'&& comp=='s'){
        return 1;
    }
    else if(you=='s' && comp=='g'){
        return -1;
    }
}
int main(){
    char you,comp;
    comp='s';
    printf("enter s for snake ,w for water and g for gun\n");
    scanf("%c",&you);
    int result=snakewatergun(you,comp);
    printf("you choose %c and computer choose %c",you ,comp);
    if (result==0){
        printf("game draw\n");
    }
    else if (result==1){
        printf("you win");
    }
    else{
        printf("you lose\n");
    }
    
}