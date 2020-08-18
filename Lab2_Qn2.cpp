#include<iostream>
using namespace std;
int main()
{
    int A[]={1,2,3};
    int B[]={4,5,6};
    
    //define and compute addition
    int sum[3];
    int i=0;
    while (i<=2)
    {
        sum[i]=A[i]+B[i];
        //cout<<sum[i]<<endl;
        i=i+1;
    }
    //Printing the sum
    int j=0;
    
    while (j<=2)
    {
        cout<<sum[j];
        j=j+1;
    }
    
    
    //Define and compute dot product
    int k=0;
    int dot=0;
    while (k<=2)
    {
        dot=dot+(A[k]*B[k]);
        k=k+1;
    }
    cout<<endl;
    cout<<dot<<endl;
        
    
    
    return 0;
}
    


