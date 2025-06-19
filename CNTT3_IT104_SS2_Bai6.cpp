#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos, value;
    int *arr;

  
    do {
        printf("Nhap so luong phan tu (1 - 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

 
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Cap phat bo nho that bai.\n");
        return 1;
    }


    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

 
    printf("Nhap vi tri muon chen (0 - %d): ", n);
    scanf("%d", &pos);
    printf("Nhap gia tri muon chen: ");
    scanf("%d", &value);

   
    if (pos < 0 || pos > n) {
        printf("Khong hop le\n");
        free(arr);
        return 0;
    }

  
    arr = (int *)realloc(arr, (n + 1) * sizeof(int));
    if (arr == NULL) {
        printf("Cap phat lai bo nho that bai.\n");
        return 1;
    }

  
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[pos] = value;
    n++; 

    
    printf("Mang sau khi chen: [");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) printf(", ");
    }
    printf("]\n");

    free(arr);
    return 0;
}

