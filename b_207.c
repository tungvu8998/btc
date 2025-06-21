#include <stdio.h>

typedef struct HinhChuNhat {
	float chieudai;
	float chieurong;
} HinhChuNhat;

float tinhDienTich(HinhChuNhat hcn) {
    return hcn.chieudai * hcn.chieurong;
}

int main () {
	HinhChuNhat hcn;
	
	printf("Nhap chieu dai: ");
	scanf("%f", &hcn.chieudai);
	printf("Nhap chieu rong: ");
	scanf("%f", &hcn.chieurong);
	
	float dientich = tinhDienTich(hcn);
	printf("Dien tich hcn = %.2f ", dientich);
	
	return 0;
}
