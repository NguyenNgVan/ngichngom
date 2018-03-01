#include<stdio.h>
#define size 3

int main()
{
    int A[size][size]; //= {{2,9,4},{7,5,3},{6,1,8}};
    int *p = A;
    int i,j;
    int sum;

    printf("Nhap ma tran:\n");
    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
        {
            printf("A[%d][%d] = ",i+1,j+1);
            scanf("%d",p+i*size+j);
        }

    sum = 0;
    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
            if(i==j)
                sum += *(p+i*size+j);

    printf("Tong duong cheo cua ma tran la: %d",sum);
    return 0;
}
