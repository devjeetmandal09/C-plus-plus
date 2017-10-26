/*
 *  Author: Devjeet Mandal
 *
 */
// C++ program to build a simple calculator


#include <windows.h>
#include <iostream>    //input output stream library
#include <stdlib.h>    //standard library
#include <math.h>      //math library
using namespace std;   //std(standard) namespace contains input ouput functions


void pushX(int num);   //to scroll 
double add(double x,double y);   //to add
double sub(double x,double y);   //to substract
double mul(double x,double y);   //to multiply
double div(double x,double y);   //to divide
double exp(double x,double y);   //to find x^y

// main
int main(void)
{
	double firstNum,secondNum;     //numbers entered by user will be stored here
	double result;                 //after computation result will be stored here
	int choice;                    //ccoice made by user to add substract etc will be stored here
	
	while(1)
	{
		//instruction to scroll on console
		//only for windows
		for(int j=30;j>=10;j--)     //scrolling will happen from postion 30 to 10 on screen
		{
        	system("CLS");          //clear screen
         	pushX(j);               //point the cursor
        	cout<<"Lets Calculate Stuffs";   //write on console
        	Sleep(100);             //show on screen for 100ms
        }
        
        // menu
		cout<<endl<<"1. Add"<<endl;
		cout<<"2. Substract"<<endl;
		cout<<"3. Multiply"<<endl;
		cout<<"4. Divide"<<endl;
		cout<<"5. Power of"<<endl;
		cout<<"6. Exit"<<endl<<endl;
		
		cout<<"Enter the choice: ";
		cin>>choice;               //getting user input for choices
		
		//choosing according to choices
		switch(choice)
		{
			case 1:
				cout<<endl<<"Enter two numbers: ";
				cin>>firstNum>>secondNum;
				result = add(firstNum,secondNum);
				cout<<endl<<"Result = "<<result;
				break;
			case 2:
				cout<<endl<<"Enter two numbers: ";
				cin>>firstNum>>secondNum;
				result = sub(firstNum,secondNum);
				cout<<endl<<"Result = "<<result;
				break;
			case 3:
				cout<<endl<<"Enter two numbers: ";
				cin>>firstNum>>secondNum;
				result = mul(firstNum,secondNum);
				cout<<endl<<"Result = "<<result;
				break;
			case 4:
				cout<<endl<<"Enter two numbers: ";
				cin>>firstNum>>secondNum;
				result = div(firstNum,secondNum);
				cout<<endl<<"Result = "<<result;
				break;
			case 5:
				cout<<endl<<"Enter the numbers part: ";
				cin>>firstNum;
				cout<<endl<<"Enter exponetial part: ";
				cin>>secondNum;
				result = exp(firstNum,secondNum);
				cout<<endl<<"Result = "<<result;
				break;
			case 6:
				exit(0);
		}
		Sleep(2000);       //show output on scrren for two sec
	}
}

// printing blank space till the position required 
void pushX(int num)
{
    for(int i=num;i>=0;i--)
        cout<<" ";
}

// adding 
double add(double x,double y)
{
	return (x+y);
}

//substracting
double sub(double x,double y)
{
	return (x-y);
}

//multiplying
double mul(double x,double y)
{
	return (x*y);
}

//dividing
double div(double x,double y)
{
	return (x/y);
}

//finfing x^y
double exp(double x,double y)
{
	return (pow(x,y));
}
