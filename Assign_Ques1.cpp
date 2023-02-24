/*  
    Write a program that takes two integers as input from the user.

    Using conditional statements, determine which integer is greater and display
    a message to the user indicating which integer is greater.



    Submitted By - Gaurav Dev
    E-mail - gauravkr648@gmail.com


*/


#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter first number: (a)"<<endl;
    cin>>a;                                // user input

    cout<<"Enter second number: (b)"<<endl;
    cin>>b;                               // user input

    int max;   //to store greater integer
    char max_char;
    if(a>b)
    {
        max = a;
        max_char = 'a';
    }
    else
    {
        max = b;
        max_char = 'b';
    }

    cout<<"The greater integer is : ("<<max_char <<") having value: "<<max<<endl;
  
    

}