#include <stdio.h>

int main()
{
    int a[20], bucket[100] = {0};
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        bucket[a[i]]++;
    }

    printf("Sorted array:\n");

    for(i = 0; i < 100; i++)
    {
        while(bucket[i] > 0)
        {
            printf("%d ", i);
            bucket[i]--;
        }
    }

    return 0;
}
