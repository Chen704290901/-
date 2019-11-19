#include<stdio.h>
int main()
{int i,m;
  m=0;
  for(i=1;i<=100;i++)
  {if(i%7==0)continue;
   {printf("%d.",i);
	m++;
   }
   if(m%5==0)
       printf("\n");
    
  }
 } 
