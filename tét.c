#include<stdio.h>
int main()
{
    int A[6]={1,2,4,5,7};
    int n=6, k=2;
    int i, j, m = 3;
    int *p = A;
    printf("In ra mang:");
    for(i=0;i<n;i++)
        printf("%2d",*(p+i));
    for(i=5;i>k;i--)
        *(p+i) = *(p+i-1);
    *(p+k) = m;
    printf("\nMang sau khi chen:");
    for(i=0;i<n;i++)
        printf("%2d",*(p+i));
    return 0;
}
