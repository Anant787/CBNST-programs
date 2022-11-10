//Errors Program

#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    float Xa,Xb;
    cout<<"Enter the actual value "<<endl;
    cin>>Xa;
    cout<<"Enter the approx value "<<endl;
    cin>>Xb;
    float EA,ER,EP;
    if(Xa>=Xb)
    {
        EA=Xa-Xb;
    }
    else
    {
        EA=Xb-Xa;
    }
    cout<<"Absolute value Error "<<EA<<endl;
    
    ER=EA/Xa;
    cout<<"Relative Error :: "<<ER<<endl;
    
    EP=ER*100;
    
    cout<<"Percenatge Error :: "<<EP<<endl;
    
}
