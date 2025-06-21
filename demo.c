// FPLDLW25634FTP160.cpp - Ki?m tra ma tr?n tam giác trên
#include <stdio.h>

#define MAX_SIZE 100

// Vi?c dóng gói mã trong các hàm là m?t th?c hành t?t,
// d?c bi?t khi k?t h?p nhi?u chuong trình riêng bi?t.
// Ð? ph?c v? m?c dích g?p, chúng ta s? gi? l?i hàm main g?c và d?i tên nó.
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

// FPLDLW25634FTP194.cpp - Ð?c chu?i d?ng
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

// FPLDLW25634FTP45.cpp - Tính a^2 + b^2 + 2ab
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

// FPLDLW25634FTP86.c - Tính t?ng chu?i di?u hòa
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

// Hàm main d? g?i các chuong trình riêng l? (d? minh h?a)
// Trong m?t tình hu?ng th?c t?, b?n có th? biên d?ch chúng thành các t?p th?c thi riêng bi?t
// ho?c t? ch?c l?i chúng thành m?t chuong trình nh?t quán duy nh?t v?i m?t hàm main duy nh?t.
int main() {
    printf("--- Ch?y FPLDLW25634FTP45.cpp ---\n");
    calculateExpression(); // Cái này yêu c?u ngu?i dùng nh?p 'a' và 'b' t? console

    printf("\n--- Ch?y FPLDLW25634FTP86.c ---\n");
    // Ð?i v?i cái này, b?n c?n cung c?p N qua stdin
    printf("Vui lòng nh?p N d? tính t?ng chu?i di?u hòa: ");
    calculateHarmonicSum();

    printf("\n--- Ch?y FPLDLW25634FTP123.cpp ---\n");
    // Ð?i v?i cái này, b?n c?n cung c?p n và sau dó n s? nguyên qua stdin
    printf("Vui lòng nh?p n cho bubble sort, sau dó là n s? nguyên: ");
    runBubbleSort();

    printf("\n--- Ch?y FPLDLW25634FTP194.cpp ---\n");
    // Ð?i v?i cái này, b?n c?n cung c?p m?t chu?i qua stdin
    printf("Vui lòng nh?p m?t chu?i: ");
    readDynamicString();

    printf("\n--- Ch?y FPLDLW25634FTP160.cpp ---\n");
    // Ð?i v?i cái này, b?n c?n cung c?p n và sau dó n*n s? nguyên qua stdin
    printf("Vui lòng nh?p kích thu?c ma tr?n n, sau dó là n*n s? nguyên: ");
    checkUpperTriangularMatrix();


    return 0;
}
// tinh tong cac phan tu trong ma tran
#include <stdio.h>
#include <limits.h> // Ð? s? d?ng INT_MIN và INT_MAX

#define MAX_SIZE 100 // Ð?nh nghia kích thu?c t?i da cho ma tr?n

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    int max_element = INT_MIN; // Kh?i t?o ph?n t? l?n nh?t b?ng giá tr? nh? nh?t có th? c?a int
    int min_element = INT_MAX; // Kh?i t?o ph?n t? nh? nh?t b?ng giá tr? l?n nh?t có th? c?a int

    // Nh?p s? hàng và s? c?t c?a ma tr?n
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

    // Ki?m tra kích thu?c h?p l?
    if (rows <= 0 || rows > MAX_SIZE || cols <= 0 || cols > MAX_SIZE) {
        fprintf(stderr, "Kich thuoc ma tran khong hop le (phai > 0 va <= %d).\n", MAX_SIZE);
        return 1;
    }

    // Nh?p các ph?n t? c?a ma tr?n
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

    // Tìm ph?n t? l?n nh?t và nh? nh?t
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


// Ð?m s? lu?ng ph?n t? ch?n và l? trong ma tr?n.
#include <stdio.h>

#define MAX_SIZE 100 // Ð?nh nghia kích thu?c t?i da cho ma tr?n

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    int even_count = 0; // Bi?n d?m s? lu?ng ph?n t? ch?n
    int odd_count = 0;  // Bi?n d?m s? lu?ng ph?n t? l?

    // Nh?p s? hàng và s? c?t c?a ma tr?n
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

    // Ki?m tra kích thu?c h?p l?
    if (rows <= 0 || rows > MAX_SIZE || cols <= 0 || cols > MAX_SIZE) {
        fprintf(stderr, "Kich thuoc ma tran khong hop le (phai > 0 va <= %d).\n", MAX_SIZE);
        return 1;
    }

    // Nh?p các ph?n t? c?a ma tr?n
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

    // Ð?m s? lu?ng ph?n t? ch?n và l?
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] % 2 == 0) { // N?u ph?n t? chia h?t cho 2 (s? du b?ng 0) là s? ch?n
                even_count++;
            } else { // Ngu?c l?i là s? l?
                odd_count++;
            }
        }
    }

    // In k?t qu?
    printf("\nSo luong phan tu chan trong ma tran la: %d\n", even_count);
    printf("So luong phan tu le trong ma tran la: %d\n", odd_count);

    return 0;
}
