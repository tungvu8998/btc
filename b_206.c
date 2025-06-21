#include <stdio.h>
#include <math.h>
// 0 - 9 : 48 -> 57
// A - Z : 65 -> 90
// a - z : 97 -122



//void nhap (int a[] ,int n) {
//	printf("Nhap so luong phan tu mang");
//	scanf("%d", n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//}
//void in (int a[] ,int n) {
//	for (int i = 0; i <n ; i++) {
//		printf("%d", a[i]);
//	}
//}

int main() {
//	float a ,b;
//	
//	printf("Nhap a: ");
//	scanf("%f", &a);
//	
//	printf("Nhap b ");
//	scanf("%f", &b);
//	
//	if (a == 0) {
//		if (b == 0) {
//			printf("PT vo so nghiem");
//		} else {
//			printf("PT vo nghiem");
//		}
//	} else {
//		float x = -b/a;
//		printf("Nghiem cua pt la x = %.2f\n", x);
//		
//	}
//	char kitu;
//	scanf("%c", &kitu);
//	if (kitu >= 'A' && kitu <= 'Z') {
//		kitu+=32;
//	} else if(kitu >= 'a' && kitu <= 'z') {
//		kitu -=32;
//	}
//	printf("%c", kitu);

//	int n, a[1000];
//	scanf("%d", n);
//	nhap(a,n);
//	in(a,n);


	  int n, m, a[500][500];
    printf("Nhap so hang va so cot: ");
    scanf("%d %d", &n, &m);

    // Nhap cac phan tu cua ma tran
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // In ma tran
    printf("Ma tran vua nhap:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
} 
