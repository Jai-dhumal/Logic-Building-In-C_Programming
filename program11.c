#include<stdio.h>
#include<stdlib.h>
int main()
{

    
    int iNo=0;

    printf("Enter a number:\n");
    if(scanf("%d",&iNo)!=1)
    {
        printf("invalid input");

        return EXIT_FAILURE;
    }

    printf("input is valid\n");

    

    return EXIT_SUCCESS;
}