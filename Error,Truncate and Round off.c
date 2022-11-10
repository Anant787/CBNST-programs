//Error , Truncate and round off 

#include<stdio.h>
#include<math.h>

int main()
{
    float xa,xp,rov;
    int n;
    printf("Enter the actual values :: ");
    scanf("%f",&xa);
    
    printf("Enter the approx values :: ");
    scanf("%f",&xp);
    
    float Ea,Er,Ep;
    
    if(xa>=xp)
    {
        Ea = xa -xp;
    }
    else
    {
        Ea = xp-xa;
    }
    
    Er = Ea/xa;
    Ep = Er *100;
    
    printf("Absoulute value :: %f \n",Ea);
    printf("Relative Error :: %f \n",Er);
    printf("Percentage Error :: %f \n",Ep);
    
    printf("Enter the Round off value :: ");
    scanf("%d",&n);
    
    float temp = (float)((int)(xa*pow(10,n)))/pow(10,n);
    float res = xa -temp;
    
    printf("Truncate value :: %lf",temp);
    
    if(res<=5.0/pow(10,n))
    {
        rov = temp;
    }
    else
    {
        rov = temp + 1.0/pow(10,n);
    }
    
    printf("\n Round of value:: %lf ",rov);
    
    return 0;
    
}
