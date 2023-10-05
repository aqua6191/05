#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int answer = 59;
    int num;
    int trial = 0; //몇번 숫자를 세는지 
    
    do {
        printf("Guess a number:");
        scanf("%d", &num);
        
        if (num == answer)
           printf("congratulation! ");
        else if(num<answer)
             printf("high!\n");
        else if(num>answer)
             printf("low!\n");
             
        trial = trial+1; 
        }
    
    while(num != answer);
    
    printf("trials: %d\n", trial);
    system("PAUSE");   
    return 0;
}
