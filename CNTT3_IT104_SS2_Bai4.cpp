#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos, new_value;
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

    // Nh?p m?ng
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

 
    printf("Nhap vi tri can sua (0 - %d): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le.\n");
    } else {
        printf("Nhap gia tri moi tai vi tri %d: ", pos);
        scanf("%d", &new_value);
        arr[pos] = new_value;

      
        printf("Mang sau khi cap nhat: [");
        for (int i = 0; i < n; i++) {
            printf("%d", arr[i]);
            if (i != n - 1) printf(", ");
        }
        printf("]\n");
    }

 
    free(arr);
    return 0;
}

