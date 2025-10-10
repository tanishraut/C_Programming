/*

Step 1 : Understand the Problem Statement 
Step 2 : Write the Algorithm 
Step 3 : Decide the Programming Language 
Step 4 : Write the Program 
Step 5 : Test the Program 



*/

/*
Algorithm

START

    Accept First no as no1
    Accept Second no as no2
    Perform Addition of no1 & no2
    Display the addition on screen


STOP



*/


#include<stdio.h>
float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0;
    fSum = fNo1+fNo2; //business logic
    return fSum;
}
int main()
{

float fValue1 = 0.0f , fValue2 = 0.0f , fRet = 0.0f ;

printf("Enter first number:\n");
scanf("%f",&fValue1);

printf("Enter second number:\n");
scanf("%f",&fValue2);

fRet = AdditionTwoNumbers(fValue1,fValue2);

printf("Addition is :%f\n",fRet);

    return 0;
}