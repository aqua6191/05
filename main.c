#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char c;
    int num = 0;
    
    printf("input a string:");
    while((c = getchar()) != '\n')
    {
                        if (c >= '0' && c <= '9')
                        num++;
                        
                        }
    
    printf("The number of digits is %d\n", num);
    system("PAUSE");   
    return 0;
}
