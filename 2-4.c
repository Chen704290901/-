#include<stdio.h>
int main()
{int i=1,a=0;
char b;
while(i<=80)
{scanf("%c",&b);
if(b==' ') a++;
 else if(b=='.') 
 {a++;
  break;
 }
 i++;
}
printf("%d",a);
return 0;
 } 
