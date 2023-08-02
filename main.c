#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,operation;
    printf("enter first number: ");
    scanf("%x");
    printf("enter second number: ");
    scanf("%y");
    printf("what operation? \n  1.addiction \n 2.subtraction \n 3.multiplication \n 4. division");
    scanf("%operation");
    if(operation == 1){
        printf(x+y);
    }
    else if(operation == 2){
        printf(x-y);
    }
    else if(operation == 3){
        print(x*y);
    }
    else {
        print(x/y);
    }
    return 0;
}
