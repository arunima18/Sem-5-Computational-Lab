//Summation of natural numbers

#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int sum=0;
    int n;
    //cin>>n;
    //cout<<n<<'\n';
   
    cout<<"Please enter the integer upto which you want to add: ";
    cin>>n;
   
    while (i<=n)
    {
        sum=sum+i;
        i=i+1;
       
    }
    cout<<"The sum of natural numbers from 1 to "<<n<<" is "<<sum;
   
    return 0;
}
	
	
	

