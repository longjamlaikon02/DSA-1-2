
#include <stdio.h>

int getMax(int a[], int n)
{
    int max = a[0];
    int i;

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }

    return max;
}

void radixSort(int a[], int n)
{
    int bucket[10][20];
    int count[10];
    int max, place = 1;
    int i, j, k, digit;

    max = getMax(a, n);

    while(max / place > 0)
    {
        for(i = 0; i < 10; i++)
            count[i] = 0;

        for(i = 0; i < n; i++)
        {
            digit = (a[i] / place) % 10;
            bucket[digit][count[digit]] = a[i];
            count[digit]++;
        }

        k = 0;

        for(i = 0; i < 10; i++)
        {
            for(j = 0; j < count[i]; j++)
            {
                a[k] = bucket[i][j];
                k++;
            }
        }

        place = place * 10;
    }
}

int main()
{
    int a[20], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    radixSort(a, n);

    printf("Sorted array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
