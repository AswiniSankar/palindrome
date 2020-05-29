#include<stdio.h>
#include<string.h>
 
int main() {
   char str[100],str1[100], temp;
   int t,k;
   int i, j = 0;
   scanf("%d\n",&t);
   while(t-->0)
   {
   gets(str);
   strcpy(str1,str);
   i = 0;
   j = strlen(str) - 1;
 
   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
 
   if(strcmp(str1,str)==0)
   {
       if(strlen(str)%2==0)
        printf("YES EVEN\n");
       else
        printf("YES ODD\n");
   }
  else
    printf("NO\n");
  }
   return (0);
}


