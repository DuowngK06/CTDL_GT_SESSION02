#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos;
    int *arr;

   
    do {
        printf("Nhap so luong phan tu (1 - 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

   
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Cap phat bo nho that bai.\n");
        return 1;
    }


    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap vi tri muon xoa (0 - %d): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Khong hop le\n");
    } else {
     
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

      
        printf("Mang sau khi xoa: [");
        for (int i = 0; i < n; i++) {
            printf("%d", arr[i]);
            if (i != n - 1) printf(", ");
        }
        printf("]\n");
    }

    free(arr); 
    return 0;
}

