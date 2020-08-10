//To calculate factorial 

#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int n;
    float fact=1;
    cout<<"Please enter the integer number upto which you want to find the factorial: ";
    cin>>n;
    while(i<=n)
    {
       
        fact=fact*i;
        i=i+1;
    }
    
    if(n>=0)
    {
        cout<<"The value of "<<n<<"! is "<<fact;
    }
    else
    {
        cout<<"Factorial is defined only for non-negative integer numbers. Please enter n>=0."<<endl; 
    }
    return 0;
}
	

