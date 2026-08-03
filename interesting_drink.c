#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int q;
    scanf("%d",&q);
    for (int i = 0; i < q; i++)
    {
        int m;
         int flag = 0;
        scanf("%d",&m);
        for (int j = 0; j < n; j++)
        {
           
            if(m >= a[j])
            {
                flag++;
            }
            
        }
        
     printf("%d\n",flag);
    }
    
    
    

}