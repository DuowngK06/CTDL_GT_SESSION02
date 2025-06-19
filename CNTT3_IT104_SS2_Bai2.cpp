#include <stdio.h>

int main() {
    int n, x, i;
    int arr[100];
    int count = 0;


    do {
        printf("Nhap so luong phan tu (1 - 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);


    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }


    printf("Nhap so can kiem tra: ");
    scanf("%d", &x);

  
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

  
    printf("So lan xuat hien cua %d la: %d\n", x, count);

    return 0;
}

