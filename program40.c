#include<stdio.h>
#include<stdlib.h>
int main()
{
    int iValue1=0,iValue2=0,iResult=0;         // intialize with default value

    printf("Enter First Number:\n");           // First Input

    scanf("%d",&iValue1);

    printf("Enter Second Number:\n");          // Second Input

    scanf("%d",&iValue2);

    if(iValue1>iValue2){
        printf("Maximum is %d:",iValue1);
    }
    else{
        printf("Maximum is %d:",iValue2);
    }

    return EXIT_SUCCESS;
}