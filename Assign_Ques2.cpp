/*
Write a program that takes an integer input from the user and 
prints out all the even numbers from 0 up to the input number (inclusive) 
using a for loop


    Submitted By - Gaurav Dev
    E-mail - gauravkr648@gmail.com

*/

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter an integer : "<<endl;
    cin>>num;           //user input

    cout<<"Even number from 0 to "<<num<<" are :"<<endl;

    for(int i=0;i<=num;i+=2)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}