#include <stdio.h>

int comparisons = 0;

void printArray(int a[], int low, int high)
{
    int i;

    for (i = low; i <= high; i++)
        printf("%d ", a[i]);

    printf("\n");
}

void merge(int a[], int low, int mid, int high)
{
    int temp[20];
    int i = low;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= high)
    {
        comparisons++;

        if (a[i] <= a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= high)
        temp[k++] = a[j++];

    for (i = low, k = 0; i <= high; i++, k++)
        a[i] = temp[k];

    printf("After merging: ");
    printArray(a, low, high);
}

void mergeSort(int a[], int low, int high)
{
    int mid;

    if (low < high)
    {
        mid = (low + high) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);

        merge(a, low, mid, high);
    }
}

int main()
{
    int a[] = {20, 15, 20, 10, 15, 20, 25, 10};
    int n = 8;
    int i;

    printf("Original array:\n");

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n\nMerge Sort intermediate steps:\n");

    mergeSort(a, 0, n - 1);

    printf("\nSorted array:\n");

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n\nNumber of comparisons = %d\n", comparisons);

    return 0;
}
