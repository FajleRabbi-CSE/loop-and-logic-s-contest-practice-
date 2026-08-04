#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], dp[n], parent[n];

    printf("Enter the sequence:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++)
    {
        dp[i] = 1;
        parent[i] = -1;
    }

    int maxLen = 1, lastIndex = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j] && dp[i] < dp[j] + 1)
            {
                dp[i] = dp[j] + 1;
                parent[i] = j;
            }
        }
        if (dp[i] > maxLen)
        {
            maxLen = dp[i];
            lastIndex = i;
        }
    }
    int lis[maxLen];
    int k = maxLen - 1;
    while (lastIndex != -1)
    {
        lis[k] = arr[lastIndex];
        k--;
        lastIndex = parent[lastIndex];
    }
    printf("Length of LIS = %d\n", maxLen);
    printf("LIS: ");
    for (int i = 0; i < maxLen; i++)
        printf("%d ", lis[i]);
    printf("\n");
    return 0;
}
