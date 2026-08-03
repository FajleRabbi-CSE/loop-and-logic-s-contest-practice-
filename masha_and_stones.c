#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int a[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    int evencount = 0,oddcount=0;
    for (int i = 0; i < N; i++)
    {
        if (a[i] % 2 == 0 )
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
        
    }
    if (evencount == 0 || oddcount == 0)
        printf("Yes\n");

    else
        printf("No\n");

    return 0;

}