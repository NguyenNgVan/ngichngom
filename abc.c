#include<stdio.h>
int main()
{
    int A[5]={1,2,4,5,6};
    int n=5, k=2;
    int i, j, m = 3;
    int *p = A;
    printf("In ra mang:");
    for(i=0;i<n;i++)
        printf("%2d",*(p+i));
    int *p2;
    for(i=0;i<n;i++)
        *(p2+i) = *(p+i);
    for(i=n;i>k;i--)
        *(p2+i) = *(p2+i-1);
    *(p2+k) = m;
    printf("\nMang sau khi chen:");
    for(i=0;i<=n;i++)
        printf("%2d",*(p2+i));
    return 0;
}
