

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
//  Using Header Files                                
//                                           
//                                          
///////////////////////////////////////////////////






#include<stdio.h>

///////////////////////////////////////////////////
//                                              
//  Function Name : AdditionTwoNumbers                                       
//  Description :   It is used to perform addition
//  Input :         Float, Float                                 
//  Output :        Float                                      
//  Author :        Tanish Raut
//  Date :          09/10/25                                       
///////////////////////////////////////////////////
 




float AdditionTwoNumbers(
                            float fNo1,             // First Input     
                            float fNo2              // Second Input
                        )
{
    float fSum = 0;                                 // To Store the Result



    if(fNo1 < 0.0f)                                 // Updator
    {
        fNo1 = -fNo1;
    }

     if(fNo2 < 0.0f)                                // Updator
    {
        fNo2 = -fNo2;
    }


    fSum = fNo1+fNo2;                               // business logic


    return fSum;


}   // End of AdditionTwoNumbers

///////////////////////////////////////////////////
//
// Entry Point Of Function
//
///////////////////////////////////////////////////



int main()
{

float fValue1 = 0.0f , fValue2 = 0.0f ;             // To Accept User Input
float fRet = 0.0f ;                                 // To Store Result

printf("Enter first number:\n");
scanf("%f",&fValue1);

printf("Enter second number:\n");
scanf("%f",&fValue2);

fRet = AdditionTwoNumbers(fValue1,fValue2);         // Method Call

printf("Addition is :%f\n",fRet);

    return 0;

    
}   // End of main

///////////////////////////////////////////////////
//
//  Testcases Successfully Handled By Application
//
//  Input1 : 10.5       Input2 : 3.2        Output : 13.7
//  Input1 : -10.5      Input2 : 3.2        Output : 13.7
//  Input1 : 10.5       Input2 : -3.2       Output : 13.7
//  Input1 : -10.5      Input2 : -3.2       Output : 13.7
//  Input1 : 10.5       Input2 : 0.0        Output : 10.5
//
///////////////////////////////////////////////////

