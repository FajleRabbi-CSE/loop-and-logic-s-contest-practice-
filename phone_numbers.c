#include<stdio.h>
#include<string.h>

int main()
{
   int n;
   scanf("%d",&n);

   char s[100];
   scanf("%s",s);
   int count = 0;
   for(int i = 0; i < n; i++){
    if(s[i] =='8'){
        count++;
    }
   }
   int maxNum = n /11;
   if(count < maxNum){
    printf("%d\n",count);
   }else{
    printf("%d\n",maxNum);
   }
   return 0;
}