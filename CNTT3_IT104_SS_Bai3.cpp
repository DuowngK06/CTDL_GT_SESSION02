#include <stdio.h>
#include <stdlib.h>

void reverseArray(int *arr, int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
          }
}
// Hàm in m?ng
void printArray(int *arr, int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(",");
        }
    }
    printf("]\n");
    }
int main() {
    int n;
    int *arr;
    
    printf("CHUONG TRINH DAO NGUOC MANG SO NGUYEN\n");
    printf("=====================================\n");
    
    // Nh?p s? ph?n t? m?ng (0 < n <= 100)
    do {
        printf("Nhap so phan tu mang (0 < n <= 100): ");
        scanf("%d", &n);
        if (n <= 0 || n > 100) {
            printf("So phan tu phai lon hon 0 va nho hon hoac bang 100!\n");
        }
    } while (n <= 0 || n > 100);
    
    // C?p phát ð?ng b? nh? cho m?ng
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho!\n");
           return 1;
    }
    
    // Nh?p các ph?n t? c?a m?ng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
        }
    
    // In m?ng ban ð?u
    printf("\nMang ban dau: ");
    printArray(arr, n);
    
    // Ð?o ngý?c m?ng
    reverseArray(arr, n);
    
    // In m?ng sau khi ð?o ngý?c
    printf("Mang sau khi dao nguoc: ");
    printArray(arr, n);
     free(arr);
     return 0;
 }
