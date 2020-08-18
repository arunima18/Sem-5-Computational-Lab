//Addition and dot product of two vectors

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
    cout<<"The resultant added vector is: "<<endl;
    
    while (j<=2)
    {
        cout<<sum[j]<<endl;
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
    cout<<"The dot product of the two vectors is: "<<dot<<endl;
        
    
    
    return 0;
}

/*The resultant added vector is: 
5
7
9

The dot product of the two vectors is: 32


*/
    


