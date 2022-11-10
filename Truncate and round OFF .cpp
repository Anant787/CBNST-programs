//CBNST
//program to find the truncate and round off digit after point 4 digit
//example :: 1.986794321

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    float Xa,Xp;
    int n;
    cout<<"Enter the Actual value :: ";
    cin>>Xa;
    cout<<"Enter the digit upto you want to round off :: ";
    cin>>n;
    float Xt=(float)(int)(Xa*pow(10,n))/pow(10,n);
    cout<<"truncate value : "<<Xt<<endl;
    
    float rem=Xa-Xt;
    
    if(rem<=5/pow(10,n-1))
    {
       Xp= Xt;
    }
    else{
        Xp=Xt+0.0001;
    }
    cout<<"Round off digit :: "<<Xp;
    
    
}
