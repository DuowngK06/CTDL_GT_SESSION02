#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; // tối đa 100 phần tử
    int max;

    // Nhập số lượng phần tử
    do {
        printf("Nhap so luong phan tu (1 - 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    // Nhập từng phần tử
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Tìm phần tử lớn nhất
    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // In kết quả
    printf("Phan tu lon nhat la: %d\n", max);

    return 0;
}
