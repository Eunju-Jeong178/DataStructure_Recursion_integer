// by Eunju Jeong

#pragma warning (disable:4996)
#include <stdio.h>
#define MAX 5
void perm(int list[], int, int);
void swap(int*, int*);
void inputData(int list[], int*);
main() {
	int n;
	int list[MAX];
	inputData(list, &n);
	perm(list, 0, n - 1);
}

void perm(int list[], int i, int n) {

	//printf("\nn in perm = %d", n);
	
	int j;
	if (i == n) {
		for (j = 0; j <= n; j++) {
			printf("%d ", list[j]);
		}
		printf("\n");
	}
	else {
		for (j = i; j <= n; j++) {
			swap(&list[i], &list[j]);
			perm(list, i + 1, n);
			swap(&list[j], &list[i]);
		}
	}
}

void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void inputData(int list[], int* n) {
	int k;
	printf("\n순열 숫자 데이터 개수 입력: ");
	scanf("%d", n);

	for (k = 0; k < *n; k++)
		scanf("%d", &list[k]);

	printf("순열 결과\n");
	//printf("n = %d\n", *n);
	//for (k = 0; k < *n; k++)
	//	printf("%d", &list[k]);
}
