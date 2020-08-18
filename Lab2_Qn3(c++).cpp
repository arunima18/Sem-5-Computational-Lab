#include <iostream>
#include <fstream>
#include <string>
#include<cstdlib>
#include<math.h>
using namespace std;

int main()
{
    int m;
    int n;
    string myText2;
   string myText1;
  ifstream MyReadFile1("One.txt");
  ifstream MyReadFile2("Two.txt");
  while (getline (MyReadFile1, myText1)) {
    //Storing the string in another string A
   string A=myText1;
   //cout<<A<<endl;
   m=stoi(A);
   //cout<<m<<endl;
   
    

    // Close the file
    MyReadFile1.close(); 
    
    }
    
     while (getline (MyReadFile2, myText2)) {
    //Storing the string in another string A
   string B=myText2;
   //cout<<B<<endl;
   n=stoi(B);
   //cout<<n<<endl;
   
    

    // Close the file
    MyReadFile2.close(); 
     }
    
    
    
    
    
    //cout<<m<<endl;
    //cout<<n<<endl;
    
    //So n and m are my numbers or integers
    int arr1[9];
    int arr2[9];
    int Arr1[3][3];
    int Arr2[3][3];
    
    //Splitting m into digits and storing in arr1
    int i=1;
    int x;
    int y;
    int z;
    int w=0;
    //int arr1[9];
    int p;
    while (i<=9)
    {
        x=m;
        y=pow(10,(i-1));
        p=pow(10,i);
        z=m%p;
        w=(z-w)/y;
        arr1[8-(i-1)]=w;
        i=i+1;
    }
    //Filling a matrix using this array
     i=1;
    int j=1;
    while (i<=3)
    {
        j=1;
        while (j<=3)
        {
            Arr1[i-1][j-1]=arr1[j+3*(i-1)-1];
            j=j+1;
        }
        i=i+1;
    }
    
    //cout<<"Test1 "<<Arr1[2][2]<<endl;
    //cout<<m<<endl;
    //cout<<n<<endl;
    
    
    
    //Splitting n into digits and storing in arr2
    i=1;
    int t;
    int q;
    int r;
    w=0;
    //int arr1[9];
    int d;
    while (i<=9)
    {
        t=n;
        q=pow(10,(i-1));
        d=pow(10,i);
        r=n%d;
        w=(r-w)/q;
        arr2[8-(i-1)]=w;
        i=i+1;
    }
    //Filling a matrix using this array
     i=1;
     j=1;
    while (i<=3)
    {
        j=1;
        while (j<=3)
        {
            Arr2[i-1][j-1]=arr2[j+3*(i-1)-1];
            j=j+1;
        }
        i=i+1;
    }
    
    //cout<<"Test2 "<<Arr2[1][0]<<endl;
    
    //Now thus, we have our matrices Arr1 and Arr2
    
    i=0;
    int k=0;
    j=0;
    int sum=0;
    int cross[3][3];
    while (i<=2)
    {
        
        j=0;
        while (j<=2)
        {
                k=0;
                sum=0;
                while (k<=2)
                {
                    
                        sum=sum+ (Arr1[i][k]*Arr2[k][j]);
                        //cout<<"*"<<sum<<endl;
                        k=k+1;
                        cross[i][j]=sum;
                    
                
                }
                j=j+1;
        }
        i=i+1;
    }
    //Printing matrix elements
    //matrix Arr1
    cout<<"The entries of the first matrix are..."<<endl;
    i=0;
    while(i<=8)
    {
        cout<<arr1[i]<<",";
        i=i+1;
    }
    cout<<endl;
    //matrix Arr2
     cout<<"The entries of the second matrix are..."<<endl;
    i=0;
    while(i<=8)
    {
        cout<<arr2[i]<<",";
        i=i+1;
    }
    cout<<endl;
    
    
    m=1;
     n=1;
    cout<<"The entry of Arr1 cross Arr2 in the form C11,C12....C33 is as: "<<endl;
    while (m<=3)
    {
        n=1;
        while (n<=3)
        {
            cout<<cross[m-1][n-1]<<",";
            n=n+1;
        }
        m=m+1;
    }
    //Compute Arr1 cross vector1
    int vector1[]={1,2,3}; //From last question
     p=0;
     q=0;
     r=0;
    int vector_new[3];
    int sum2;
    while (p<=2)
    {
            r=0;
            sum2=0;
            while (r<=2)
            {
                    sum2=sum2+Arr1[p][r]*vector1[r];
                    r=r+1;
                    vector_new[p]=sum2;
            }
            p=p+1;
    }
    i=0;
    cout<<endl;
    cout<<"The components of the vector Arr1 cross vector1 is: "<<endl;
    while(i<=2)
    {
        cout<<vector_new[i]<<",";
        i=i+1;
    }
    return 0; 
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

}