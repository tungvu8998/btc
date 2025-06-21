// FPLDLW25634FTP160.cpp - Ki?m tra ma tr?n tam gi�c tr�n
#include <stdio.h>

#define MAX_SIZE 100

// Vi?c d�ng g�i m� trong c�c h�m l� m?t th?c h�nh t?t,
// d?c bi?t khi k?t h?p nhi?u chuong tr�nh ri�ng bi?t.
// �? ph?c v? m?c d�ch g?p, ch�ng ta s? gi? l?i h�m main g?c v� d?i t�n n�.
int checkUpperTriangularMatrix() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int n;
    int isUpperTriangular = 1;

    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Loi khi doc kich thuoc ma tran.\n");
        return 1;
    }

    if (n <= 0 || n > MAX_SIZE) {
        fprintf(stderr, "Kich thuoc ma tran khong hop le (phai > 0 va <= %d).\n", MAX_SIZE);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                fprintf(stderr, "Loi khi doc phan tu ma tran tai [%d][%d].\n", i, j);
                return 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                isUpperTriangular = 0;
                break;
            }
        }
        if (isUpperTriangular == 0) {
            break;
        }
    }

    if (isUpperTriangular) {
        printf("Ma tran la ma tran tam giac tren.\n");
    } else {
        printf("Ma tran khong phai la ma tran tam giac tren.\n");
    }

    return 0;
}

// FPLDLW25634FTP123.cpp - Tri?n khai Bubble Sort
#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false) {
            break;
        }
    }
}

int runBubbleSort() {
    int n;
    int arr[1000];

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n < 0 || n > 1000) {
         if (n != 0) return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
             return 1;
        }
    }

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);

        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}

// FPLDLW25634FTP194.cpp - �?c chu?i d?ng
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TEMP_BUFFER_SIZE 256

int readDynamicString() {
    char temp_buffer[MAX_TEMP_BUFFER_SIZE];
    char *dynamic_string = NULL;
    int string_length;

    if (fgets(temp_buffer, sizeof(temp_buffer), stdin) == NULL) {
        return 1;
    }

    string_length = strlen(temp_buffer);
    if (string_length > 0 && temp_buffer[string_length - 1] == '\n') {
        temp_buffer[string_length - 1] = '\0';
        string_length--;
    }

    dynamic_string = (char *)malloc(string_length + 1);

    if (dynamic_string == NULL) {
        return 1;
    }

    strcpy(dynamic_string, temp_buffer);

    printf("%s\n", dynamic_string);

    free(dynamic_string);
    dynamic_string = NULL;

    return 0;
}

// FPLDLW25634FTP45.cpp - T�nh a^2 + b^2 + 2ab
#include <stdio.h>

int calculateExpression() {
    int a, b;
    long long result;

    printf("Nhap vao gia tri a: ");
    scanf("%d", &a);

    printf("Nhap vao gia tri b: ");
    scanf("%d", &b);

    result = (long long)a * a + (long long)b * b + 2LL * a * b;

    printf("Gia tri cua a^2 + b^2 + 2ab la: %lld\n", result);

    return 0;
}

// FPLDLW25634FTP86.c - T�nh t?ng chu?i di?u h�a
#include <stdio.h>

int calculateHarmonicSum() {
    int N;
    double sum = 0.0;
    int i;

    if (scanf("%d", &N) != 1) {
        return 1;
    }

    for (i = 1; i <= N; i++) {
        sum += 1.0 / i;
    }

    printf("%.6f\n", sum);

    return 0;
}

// H�m main d? g?i c�c chuong tr�nh ri�ng l? (d? minh h?a)
// Trong m?t t�nh hu?ng th?c t?, b?n c� th? bi�n d?ch ch�ng th�nh c�c t?p th?c thi ri�ng bi?t
// ho?c t? ch?c l?i ch�ng th�nh m?t chuong tr�nh nh?t qu�n duy nh?t v?i m?t h�m main duy nh?t.
int main() {
    printf("--- Ch?y FPLDLW25634FTP45.cpp ---\n");
    calculateExpression(); // C�i n�y y�u c?u ngu?i d�ng nh?p 'a' v� 'b' t? console

    printf("\n--- Ch?y FPLDLW25634FTP86.c ---\n");
    // �?i v?i c�i n�y, b?n c?n cung c?p N qua stdin
    printf("Vui l�ng nh?p N d? t�nh t?ng chu?i di?u h�a: ");
    calculateHarmonicSum();

    printf("\n--- Ch?y FPLDLW25634FTP123.cpp ---\n");
    // �?i v?i c�i n�y, b?n c?n cung c?p n v� sau d� n s? nguy�n qua stdin
    printf("Vui l�ng nh?p n cho bubble sort, sau d� l� n s? nguy�n: ");
    runBubbleSort();

    printf("\n--- Ch?y FPLDLW25634FTP194.cpp ---\n");
    // �?i v?i c�i n�y, b?n c?n cung c?p m?t chu?i qua stdin
    printf("Vui l�ng nh?p m?t chu?i: ");
    readDynamicString();

    printf("\n--- Ch?y FPLDLW25634FTP160.cpp ---\n");
    // �?i v?i c�i n�y, b?n c?n cung c?p n v� sau d� n*n s? nguy�n qua stdin
    printf("Vui l�ng nh?p k�ch thu?c ma tr?n n, sau d� l� n*n s? nguy�n: ");
    checkUpperTriangularMatrix();


    return 0;
}
// tinh tong cac phan tu trong ma tran
#include <stdio.h>
#include <limits.h> // �? s? d?ng INT_MIN v� INT_MAX

#define MAX_SIZE 100 // �?nh nghia k�ch thu?c t?i da cho ma tr?n

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    int max_element = INT_MIN; // Kh?i t?o ph?n t? l?n nh?t b?ng gi� tr? nh? nh?t c� th? c?a int
    int min_element = INT_MAX; // Kh?i t?o ph?n t? nh? nh?t b?ng gi� tr? l?n nh?t c� th? c?a int

    // Nh?p s? h�ng v� s? c?t c?a ma tr?n
    printf("Nhap so hang cua ma tran (toi da %d): ", MAX_SIZE);
    if (scanf("%d", &rows) != 1) {
        fprintf(stderr, "Loi khi doc so hang.\n");
        return 1;
    }

    printf("Nhap so cot cua ma tran (toi da %d): ", MAX_SIZE);
    if (scanf("%d", &cols) != 1) {
        fprintf(stderr, "Loi khi doc so cot.\n");
        return 1;
    }

    // Ki?m tra k�ch thu?c h?p l?
    if (rows <= 0 || rows > MAX_SIZE || cols <= 0 || cols > MAX_SIZE) {
        fprintf(stderr, "Kich thuoc ma tran khong hop le (phai > 0 va <= %d).\n", MAX_SIZE);
        return 1;
    }

    // Nh?p c�c ph?n t? c?a ma tr?n
    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap phan tu matrix[%d][%d]: ", i, j);
            if (scanf("%d", &matrix[i][j]) != 1) {
                fprintf(stderr, "Loi khi doc phan tu ma tran tai [%d][%d].\n", i, j);
                return 1;
            }
        }
    }

    // T�m ph?n t? l?n nh?t v� nh? nh?t
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > max_element) {
                max_element = matrix[i][j];
            }
            if (matrix[i][j] < min_element) {
                min_element = matrix[i][j];
            }
        }
    }

    // In k?t qu?
    printf("\nPhan tu lon nhat trong ma tran la: %d\n", max_element);
    printf("Phan tu nho nhat trong ma tran la: %d\n", min_element);

    return 0;
}


// �?m s? lu?ng ph?n t? ch?n v� l? trong ma tr?n.
#include <stdio.h>

#define MAX_SIZE 100 // �?nh nghia k�ch thu?c t?i da cho ma tr?n

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    int even_count = 0; // Bi?n d?m s? lu?ng ph?n t? ch?n
    int odd_count = 0;  // Bi?n d?m s? lu?ng ph?n t? l?

    // Nh?p s? h�ng v� s? c?t c?a ma tr?n
    printf("Nhap so hang cua ma tran (toi da %d): ", MAX_SIZE);
    if (scanf("%d", &rows) != 1) {
        fprintf(stderr, "Loi khi doc so hang.\n");
        return 1;
    }

    printf("Nhap so cot cua ma tran (toi da %d): ", MAX_SIZE);
    if (scanf("%d", &cols) != 1) {
        fprintf(stderr, "Loi khi doc so cot.\n");
        return 1;
    }

    // Ki?m tra k�ch thu?c h?p l?
    if (rows <= 0 || rows > MAX_SIZE || cols <= 0 || cols > MAX_SIZE) {
        fprintf(stderr, "Kich thuoc ma tran khong hop le (phai > 0 va <= %d).\n", MAX_SIZE);
        return 1;
    }

    // Nh?p c�c ph?n t? c?a ma tr?n
    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap phan tu matrix[%d][%d]: ", i, j);
            if (scanf("%d", &matrix[i][j]) != 1) {
                fprintf(stderr, "Loi khi doc phan tu ma tran tai [%d][%d].\n", i, j);
                return 1;
            }
        }
    }

    // �?m s? lu?ng ph?n t? ch?n v� l?
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] % 2 == 0) { // N?u ph?n t? chia h?t cho 2 (s? du b?ng 0) l� s? ch?n
                even_count++;
            } else { // Ngu?c l?i l� s? l?
                odd_count++;
            }
        }
    }

    // In k?t qu?
    printf("\nSo luong phan tu chan trong ma tran la: %d\n", even_count);
    printf("So luong phan tu le trong ma tran la: %d\n", odd_count);

    return 0;
}
