#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int a[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < t; i++)
    {
       int sum=0;
       sum = a[i]+1;
       printf("%d\n",sum);

    }
    return 0;
    
}
