/*Q117 Write a program to take two sorted arrays of size m and n as input. Merge 
both the arrays such that the merged array is also sorted. Print the merged array.*/

#include <stdio.h>

int main() {
    int m, n, i, j, k;
    scanf("%d", &m);
    int a[m];
    for(i = 0; i < m; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n);
    int b[n];
    for(i = 0; i < n; i++)
        scanf("%d", &b[i]);
    int c[m + n];
    i = j = k = 0;
    while(i < m && j < n) {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while(i < m)
        c[k++] = a[i++];
    while(j < n)
        c[k++] = b[j++];
    for(i = 0; i < m + n; i++)
        printf("%d ", c[i]);
    return 0;
}
