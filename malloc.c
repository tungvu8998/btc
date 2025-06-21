#include <stdio.h>
#include <stdlib.h>

int main () {
	int n,m;
	printf("Nhap so hang:");
	scanf("%d",&n);
	printf("Nhap so cot:");
	scanf("%d",&m);
	
	int **mt = (int **)malloc(n * sizeof(int *));
	if (mt == NULL) {
		printf("Bo nho tran \n" );
		return 1;
	}
	
	for (int i = 0; i < n; i++) {
		mt[i] = (int *)malloc(m * sizeof(int));
		if (mt[i] == NULL) {
			printf("Loi cap phat bo nho hang %d!\n", i);
			return 1;
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("Nhap ma nhan [%d][%d]: ",i,j);
			scanf("%d", &mt[i][j]);
		}
	}
	printf("Ma tran sau khi nhap: \n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m;j++) {
			printf("%d ",mt[i][j]);
		}
		printf("\n");
	}
	
	for (int i = 0; i < n; i++) {
        free(mt[i]);
    }
    free(mt);

//	int n;
//	scanf("%d", &n);
//	float tong = 0;
//	float *a = (float *)malloc(n * sizeof(float));
//	if (a == NULL) {
//		printf("Bo nho tran \n");
//		return 1;
//	}
//	
//	for (int i = 0; i < n; i++) {
//		printf("Nhap a[%d]: ",i);
//		scanf("%f",&a[i]);
//		tong += a[i];
//	}
//	printf("Tong cac phan tu trong mang: %.2f\n", tong);	
//	free(a);
	return 0;
}
