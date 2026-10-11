/*
Step1:Understand the problem statement 
Step2:write the algorithm
Step3:decide the programming language
Step4:write the program
Step5:test the program
*/

////////////////////////////////
//
//Step1:Understand the problem statement
//      user us going to enter any 2 integers
//      we have to perform additon
//
////////////////////////////////
//Step2: write the algorithm
//     
        // START
             //  Accept first no as no1
             //  Accept Secodn  no as no2
              // create the variable as ans to store addition
              // perform addition and stoe it in the ans 
              // display the result from ans 
        //END 
        
///////////////////////////////
// Step3:
//        Decide the programming language 
//        we select the c programming 
///////////////////////////////
//Step4:
//      write the program
//////////////////////////////
#include<stdio.h>
//////////////////////////////
//  Function Name:  Addition
//  Input:         Integer,Integer
//  Output:        Integer
//  Description:   Performs Addition
//  Date:          04/10/2026
//  Author:        Dhumal Jaydeep Machhindra
//
//////////////////////////////
int Addition(int iNo1,int iNo2)
{
    int iAns=0;
    iAns=iNo1+iNo2;  //business logic
    return iAns;
}
//////////////////////////////
// Entry point of the application
//
//
//
//////////////////////////////
int main()
{
    int iValue1=0,iValue2=0,iResult=0;

    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter second number:\n");
    scanf("%d",&iValue2);

    iResult=Addition(iValue1,iValue2);

    printf("Addition is :%d\n",iResult);




  return 0;
}

//////////////////////////////
//Step5: Test the program
//      tested test cases
//      Input1       Input2     output
//         10         11           21
//         11          0            11
//         0          11            11
//         20         -11           9
//         -11         20           9
//         -11         -11          0
//////////////////////////////