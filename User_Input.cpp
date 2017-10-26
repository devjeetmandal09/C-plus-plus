/*
 *  Author: Devjeet Mandal
 *
 */
 
 // C++ program to take input(integer,float,char,string) from user and print it on screen
 
#include <iostream>    //input output stream library
#include <stdio.h>     //standard input output
using namespace std;   //std(standard) namespace contains input ouput functions

// defining structure to hold the diffrent datattypes in single entity
struct datatypes{
	int intNum;     
	double floatNum;
	char character;
	char string[20];
};


// main
int main(void)
{
	struct datatypes data;   //creating variable of datatypes
	
	// taking integer number from user
	cout<<"Enter an integer number: "<<endl; 
	cin>>data.intNum;
    
    // taking floating number from user
    cout<<"Enter a float number: "<<endl;
    cin>>data.floatNum;
    
	// taking character as an input from user	
    cout<<"Enter an character: "<<endl;
    cin>>data.character;
        
    fflush(stdin);  //flushing the input buffer    
    // taking string as input from user
    cout<<"Enter a string: "<<endl;
    gets(data.string);
    
    // displaying all the entities
	cout<<"You have entered: "<<endl;
    cout<<"Integer: "<<data.intNum<<endl;
    cout<<"Float: "<<data.floatNum<<endl;
    cout<<"Character: "<<data.character<<endl;
    cout<<"String: ";
    puts(data.string);
    cout<<endl;
    
}
