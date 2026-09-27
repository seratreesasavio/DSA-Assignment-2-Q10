#include <stdio.h>

struct Package
{
    int id;
    int weight;
};

void stableQuickSort(struct Package a[], int n)
{
    struct Package less[20];
    struct Package equal[20];
    struct Package greater[20];

    int l = 0, e = 0, g = 0;
    int i, k;
    int pivot;

    if (n <= 1)
        return;

    pivot = a[n - 1].weight;

    for (i = 0; i < n; i++)
    {
        if (a[i].weight < pivot)
            less[l++] = a[i];

        else if (a[i].weight == pivot)
            equal[e++] = a[i];

        else
            greater[g++] = a[i];
    }

    stableQuickSort(less, l);
    stableQuickSort(greater, g);

    k = 0;

    for (i = 0; i < l; i++)
        a[k++] = less[i];

    for (i = 0; i < e; i++)
        a[k++] = equal[i];

    for (i = 0; i < g; i++)
        a[k++] = greater[i];
}

int main()
{
    struct Package p[] =
    {
        {1, 20},
        {2, 15},
        {3, 20},
        {4, 10},
        {5, 15},
        {6, 20},
        {7, 25},
        {8, 10}
    };

    int n = 8;
    int i;

    printf("Original package order:\n");

    for (i = 0; i < n; i++)
        printf("P%d(%d) ", p[i].id, p[i].weight);

    printf("\n\nStable Quick Sort Result:\n");

    stableQuickSort(p, n);

    for (i = 0; i < n; i++)
        printf("P%d(%d) ", p[i].id, p[i].weight);

    printf("\n");

    return 0;
}
