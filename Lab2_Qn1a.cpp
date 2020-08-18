//To find avg distance in an array

#include<iostream>
using namespace std;
int main(){

int arr[]={1,2,3,4,5,6};

int i=1;
int j=1;
float d=0;
while (i<6)
    {
        j=i;
        while (j<=6)
        {
            
            d=d+ abs(i-j)+ abs(j-i);
            //cout<<"***"<<d<<endl;
            j=j+1;
        }
        i=i+1;
    }
cout<<d<<endl;
float final=d/36;
cout<<final<<endl;
return 0;
}


