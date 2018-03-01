#include<stdio.h>
#define size 3
int main()
{
    int A[size][size], B[size][size], C[size][size];
    int i,j;
    int *p1=A, *p2=B, *p3=C;

    printf("Nhap ma tran 1:\n");
    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
            scanf("%d",p1+i*size+j);

    printf("Nhap ma tran 2:\n");
    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
            scanf("%d",p2+i*size+j);

    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
            *(p3+i*size+j) = *(p1+i*size+j) + *(p2+i*size+j);


    printf("Ket qua cong hai ma tran:\n");
    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
            printf("%d",*(p3+i*size+j));

    return 0;
}
