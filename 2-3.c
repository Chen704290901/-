

#include <stdio.h>
int main()
{
    int i,m,n,a,max,min; 
    min=1;
    scanf("%d %d",&m,&n);
    printf("m=%d n=%d\n",m,n);
    if(m>n) a=m;
    else a=n;
    for(i=1;i<=a;i++)
    {if(m%i==0&&n%i==0)
    {m=m/i;
        n=n/i;
        min=min*i;
    }
    }
    printf("m=%d n=%d\n",m,n);
    printf("min=%d\n",min);
    max=m*n*min;
    printf("max=%d\n",max);
    return 0;
}


