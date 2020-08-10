//Summation of the sequence {1/n}

#include<iostream>
using namespace std;
int main()
{
    float n=1;
    float i=1;
    float m;
    float user_sum=1;
    float user_Sum;
    float prev_sum=0;
    float next_sum=1;
    //Ask user for the m value, i.e the number of terms till which user wants to add
    cout<<"Please enter the value of m(No. of terms in series {1/m} that you want to add): "<<endl;
    cin>>m;
    
    //sum1-sum till that condition is satisfied
    while(next_sum-prev_sum>=0.001)
    {
        n=n+1;
        
        //set the previous sum to the existing sum to record its value
        prev_sum=next_sum;
        //sum over by adding another term in the sequence
        next_sum=next_sum+(1/n);
    }
    
    //sum2-sum of the m terms in the series as given by the user
    while(i<=m)
    {
        i=i+1;
        user_Sum=user_sum;
        user_sum=user_sum+(1/i);
        
    }
    
    
    //Compare both sums, if sum2 exceeds sum1, that means more terms have been added, which are not allowed.
    if(prev_sum>=user_sum)
    {
    
        cout<<"The number of terms in the series satisfying the condition is "<<m<<", as entered by you."<<endl;
        cout<<"The sum of the series upto m terms is "<<user_Sum<<endl; 
    }
    else
    {
        
        
        cout<<"Adding upto "<< m<<"  terms violates the condition."<<endl;
        cout<<"The number of terms that the series can have is "<<n<<"\n";
        cout<<"The sum of "<<n<<" terms in the series is "<<next_sum<<endl;;
    }
    return 0;
}
	

