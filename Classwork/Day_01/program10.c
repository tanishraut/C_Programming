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
    If the Input is Negative Then convert it into Positive
    Perform Addition of no1 & no2
    Display the addition on screen


STOP



*/
///////////////////////////////////////////////////
//                                              
//                                             
//                                            
//                                           
//                                          
/////////////////////////////////////////////






#include<stdio.h>

///////////////////////////////////////////////////
//                                              
//  Function Name : AdditionTwoNumbers                                       
//  Description :   It is used to perform addition
//  Input :         Float, Float                                 
//  Output :        Float                                      
//  Author :        Tanish Raut
//  Date :          9/10/25                                       
/////////////////////////////////////////////
 




float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0;


// Updator
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }

     if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }


    fSum = fNo1+fNo2; //business logic


    return fSum;
}

///////////////////////////////////////////////////
//
// Entry Point Of Function
//
///////////////////////////////////////////////////
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

///////////////////////////////////////////////////
//
//  Testcases Successfully Handled By Application
//
//  Input1 : 10.5       Input2 : 3.2        Output : 13.7
//  Input1 : -10.5       Input2 : 3.2        Output : 13.7
//  Input1 : 10.5       Input2 : -3.2        Output : 13.7
//  Input1 : -10.5       Input2 : -3.2        Output : 13.7
//  Input1 : 10.5       Input2 : 0.0        Output : 10.5
//
///////////////////////////////////////////////////