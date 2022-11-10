//For genral function
//let the function is :: x^4 -x-10 = 0;

//take the value as 1 0 0 -1 10 

#include<stdio.h>
#include<conio.h>
#include<math.h>

float function(float x,int x4,int x3,int x2,int x1,int x0)
{
    float res = x4*x*x*x*x+x3*x*x*x+x2*x*x+x1*x+x0;
    printf("res :: %f\n",res);
    return res;
}
float solve(float a,float b,int n4,int n3,int n2,int n1,int n0)
{
    float x1;
    int count=0;
    while((b-a)>=0.0001)
    {
        x1=(a+b)/2.0;
        printf("x1 :: %f\n",x1);
        if(function(x1,n4,n3,n2,n1,n0)==(float)0.0)
        {
            break;
        }
        else if((function(x1,n4,n3,n2,n1,n0)*function(a,n4,n3,n2,n1,n0))<0)
        {
            b=x1;
        }
        else{
            a=x1;
        }
        count++;
    }
    printf("total no of iteration :: %d \n",count);
    return x1;
}

int main()
{
    int n4,n3,n2,n1,n0;
    printf("Enter the coefiiceint of funtion degree 4 :: ");
    scanf("%d %d %d %d %d",&n4,&n3,&n2,&n1,&n0);
    int a,b=0;
    
    //this is for both roots(negative and positive) already given by the Equation
    
    for(b=0;;b++)
    {
        if(function(b,n4,n3,n2,n1,n0)>0)
        {
            break;
        }
    }
    for(a=b;;a--)
    {
        if(function(a,n4,n3,n2,n1,n0)<0)
        {
            break;
        }
    }
    
    printf("a=%d b=%d \n",a,b);
    
    float res=solve(a,b,n4,n3,n2,n1,n0);
    
    printf("solution of Equation %f\n",res);
    printf("Value of function %f ",function(res,n4,n3,n2,n1,n0));
    
    return 0;
}

