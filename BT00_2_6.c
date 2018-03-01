#include<stdio.h>
#define size 3

int main()
{
    int A[size][size]; //= {{2,9,4},{7,5,3},{6,1,8}};
    int *p = A;
    int i,j;
    int temp;

    printf("Nhap ma tran:\n");
    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
        {
            printf("A[%d][%d] = ",i+1,j+1);
            scanf("%d",p+i*size+j);
        }

    for(i=1;i<size;i++)
        for(j=0;j<i;j++)
        {
            temp = *(p+i*size+j);
            *(p+i*size+j) = *(p+j*size+i);
            *(p+j*size+i) = temp;
        }

    printf("Ma tran chuyen vi cua ma tran tren la:\n");
    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
            printf("%d\n",*(p+i*size+j));

    return 0;
}

