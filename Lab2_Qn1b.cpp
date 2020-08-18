//Average distance between twopoints in a matrix

#include<iostream>
using namespace std;
int main()
{
    //Compute distance between two points for a row
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
    
    
    //expand to matrices using the value of d
    int p=1;
    int q=1;
    int sum1=0;
    int sum2=0;
    while (p<=6)
    {
        q=1;
        while (q<=(7-p))
        {
            //forward sum
            sum1=sum1+ ((q-1)*36) +d;
            //backward sum
            sum2=sum2+((q-1)*6*6)+d;
            q=q+1;
        }
        p=p+1;
    }
    
    
    //sum1+sum2 contains an extra distance of 6*d due to backward sum calculation, which has already being counted in the forward sum
    float y=sum1+sum2-6*d;
    float avg=y/(36*36);
    cout<<"The average distance between any two points is: "<<avg<<endl;
            
    
    
    return 0;
}

/*The average distance between any two points is: 3.88889


*/
    


