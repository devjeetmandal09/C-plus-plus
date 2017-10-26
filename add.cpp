/*
 *  Author: Devjeet Mandal
 *
 */
// C++ program to add two numbers


#include <iostream>    //input output stream library
using namespace std;   //std(standard) namespace contains input ouput functions

double Add(double x,double y);

// main
int main(void)
{
	//declaring variables to store number and sum
	double firstNum,secondNum;
	double sum;
	
	cout<<"Enter two numbers: ";
	cin>>firstNum>>secondNum;    //taking user input 
	
	sum = Add(firstNum,secondNum);   // adding two numbers and storing it in sum
	
	// printing it with nice format
	cout<<endl<<"Sum is "<<sum<<endl;  
}


double Add(double x,double y)
{
	return (x+y);
}