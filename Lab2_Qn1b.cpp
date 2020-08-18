#include<iostream>
using namespace std;
int main()
{
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
    
    //expand to matrices
    int p=1;
    int q=1;
    int sum1=0;
    int sum2=0;
    while (p<=6)
    {
        q=1;
        while (q<=(7-p))
        {
            sum1=sum1+ ((q-1)*36) +d;
            cout<<sum1<<"***"<<endl;
            sum2=sum2+((q-1)*6*6)+d;
            //cout<<sum2<<"####"<<endl;
            q=q+1;
        }
        p=p+1;
    }
    
    cout<<sum1<<endl;
    cout<<sum2<<endl;
    int y=sum1+sum2-6*d;
    cout<<sum1+sum2<<endl;
    cout<<y<<endl;
            
    
    
    return 0;
}
    


