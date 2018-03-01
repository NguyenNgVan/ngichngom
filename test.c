#include <stdio.h>

void swap(void **p1, void **p2) {
	void *tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int main(void) {
	float a = 3, b = 4;
	float *p1 = &a, *p2 = &b;
	printf("%d\n%d\n",p1,p2);
	swap(&p1, &p2);
    printf("%d\n%d\n",p1,p2);
	printf("a = %.2f, b = %.2f\n", *p1, *p2);
	return 0;
}
