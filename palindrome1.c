#include<stdio.h>
int main()
{
  int n,r,s=0,t,t1,a[50],i,n1;
  scanf("%d",&n);
  for(i=0;i<n;i++)
     scanf("%d",&a[i]);
  scanf("%d",&t1);
  for(i=0;i<n;i++)
  {
   s=0; 
  a[i]=a[i]+t1;
  t=a[i];
  n1=t;
  while(n1)
  {r=n1%10;
   s=r+(s*10);
   n1=n1/10;
  }
   if(s==t)
      printf("%d is a palindrome\n",t);
   else
       printf("%d is not a palindrome\n",t);
 }
  printf("\n");
  return 0;
}
