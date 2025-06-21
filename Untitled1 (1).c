#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


struct SinhVien{
	char ten[20];
	double diem;
	char ma[20];
};


typedef struct SinhVien sv;

sv nhap() {
	sv x;
	getchar();
	gets(x.ten);
	scanf("%s", &x.ma);
	scanf("%lf" , &x.diem);
	return x;
}
//sv nhap2(sv *x) {
//	gets(x->ten);
//	scanf("%lf",&x.diem);
//	
//}



void in(sv a) {
	printf("Sinh vien: %s %s %.2lf \n", a.ten,a.ma, a.diem );
}
void timkiem(sv a[],int n, char ma[100]) {
	for (int i = 0; i < n; i++) {
		if (strcmp(ma, a[i].ma) == 0) {
			in(a[i]);
			return;
		}
	}
	printf("Khong tim thay sinh vien \n");
}

void sapxep(sv a[], int n) {
	for(int i = 0; i < n; i++) {
		int max_idx = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j].diem > a[max_idx].diem) {
				max_idx = j;
			}
		}
		sv temp = a[i];
		a[i] = a[max_idx];
		a[max_idx] = temp;
	}
}
int main() {
	
	int n;
	scanf("%d", &n);
	sv a[n];
	for (int i = 0; i < n; i++) a[i] = nhap();
	for (int i = 0; i < n; i++) in(a[i]);
	char s[100];
//	printf("Nhap ma sinh vien can tim kiem:\n");
//	scanf("%s", s);
//	timkiem(a, n ,s);
	printf("Sinh vien sau khi sap xep :\n");
	sapxep(a,n);
	for (int i = 0; i < n; i++) in(a[i]);
	
	return 0;
}
