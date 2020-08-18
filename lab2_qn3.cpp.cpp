#include <iostream>
#include <fstream>
#include <string>
#include<cstdlib>
#include<math.h>
using namespace std;

int main () {
    //declaration of arrays to store the text file
    int arr1[9];
    int arr2[9];
    //reading from first file 
  string myText;
  ifstream MyReadFile("One.txt");
  while (getline (MyReadFile, myText)) {
    //Storing the string in another string A
   string A=myText;
   //Converting the string into integer number
    int l=stoi(A);
    //extracting all the digits of the number one by one and storing in arr1
    int n=l;
    int i=1;
    int x;
    int y;
    int z;
    int w=0;
    //int arr1[9];
    int p;
    while (i<=9)
    {
        x=n;
        y=pow(10,(i-1));
        p=pow(10,i);
        z=n%p;
        w=(z-w)/y;
        arr1[8-(i-1)]=w;
        i=i+1;
    }
}
MyReadFile.close(); 
 //#######################################################################
  
  //Reading the second text file
  string myText2;
  ifstream MyReadFile2("Two.txt");
  while (getline (MyReadFile2, myText2)) {
      //Storing the value obtained in string B
    string B=myText2;
    //Converting string obtained into integer
    int b=stoi(B);
    //extracting the digits of the number one by one and storing in arr2
    int n=b;
    int i=1;
    int x;
    int y;
    int z;
    int w=0;
    int p;
    while (i<=9)
    {
        x=n;
        y=pow(10,(i-1));
        p=pow(10,i);
        z=n%p;
        w=(z-w)/y;
        arr2[8-(i-1)]=w;
        i=i+1;
    } 
}
MyReadFile2.close();
 // #######################################################################
  
 //########################################################################
  
     int vector1[]={1,2,3};  //written same as question 1
     //declaration of multidimensional array to build matrices out of arr1 and arr2
    int A[3][3];
    int B[3][3];
    //putting values from arr1 into A
    int i=1;
    int j=1;
    while (i<=3)
    {
        j=1;
        while (j<=3)
        {
            A[i-1][j-1]=arr1[j+3*(i-1)-1];
            j=j+1;
        }
        i=i+1;
    }
    //putting values from arr2 into B
    int p=1;
    int q=1;
    while (p<=3)
    {
        q=1;
        while (q<=3)
        {
            B[p-1][q-1]=arr2[q+3*(p-1)-1];
            q=q+1;
        }
        p=p+1;
    }
    //Compute cross product
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
                    
                        sum=sum+ (A[i][k]*B[k][j]);
                        //cout<<"*"<<sum<<endl;
                        k=k+1;
                        cross[i][j]=sum;
                    
                
                }
                j=j+1;
        }
        i=i+1;
    }
    cout<<cross[0][1]<<endl;
    
    int m=1;
    int n=1;
    cout<<"The entry of A cross B from C11,C12....C33 is as: "<<endl;
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
    //Compute M cross A
     p=0;
     q=0;
    int r=0;
    int vector_new[3];
    int sum2;
    while (p<=2)
    {
            r=0;
            sum2=0;
            while (r<=2)
            {
                    sum2=sum2+A[p][r]*vector1[r];
                    r=r+1;
                    vector_new[p]=sum2;
            }
            p=p+1;
    }
    i=0;
    cout<<endl;
    cout<<"The components of the vector M cross A is: "<<endl;
    while(i<=2)
    {
        cout<<vector_new[i]<<",";
        i=i+1;
    }
    return 0; 
}


/* The entry of A cross B from C11,C12....C33 is as: 
37,32,37,62,84,93,54,74,69,
The components of the vector M cross A is: 
23,36,21, 
Exit code: 0 (normal program termination) */
