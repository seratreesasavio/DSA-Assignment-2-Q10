#include <stdio.h>

int comparisons = 0;

void printArray(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
}

int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;
    int j, temp;

    for (j = low; j < high; j++)
    {
        comparisons++;

        if (a[j] <= pivot)
        {
            i++;

            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;

    printf("Pivot = %d : ", pivot);
    printArray(a, 8);

    return i + 1;
}

void quickSort(int a[], int low, int high)
{
    int p;

    if (low < high)
    {
        p = partition(a, low, high);

        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main()
{
    int a[] = {20, 15, 20, 10, 15, 20, 25, 10};
    int n = 8;
    int i;

    printf("Original array:\n");
    printArray(a, n);

    printf("\nQuick Sort intermediate steps:\n");

    quickSort(a, 0, n - 1);

    printf("\nSorted array:\n");

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n\nNumber of comparisons = %d\n", comparisons);

    return 0;
}
