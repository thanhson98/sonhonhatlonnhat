#include <stdio.h>
#include <stdlib.h>
int main() {
    int soluongphantu;
    printf("Vui long nhap so luong phan tu");
    scanf("%d", &soluongphantu);
    if (soluongphantu > 10) {
        printf("vui long nhap so luong phan tu nho hon hoac bang 10");
        return 0;
    }
    int taphop[soluongphantu];
    for (int i = 0; i < soluongphantu; i++) {
        printf("Vui long nhap gia tri cua phan tu thu %d\n", i + 1);
        scanf("%d", &taphop[i]);
    }
    printf("Thong tin cac phan tu trong mang: ");
    for (int j = 0; j < soluongphantu; ++j) {
        printf("%d", taphop[j]);
    }

    int findMaxValue;
    int findMinValue;
    findMaxValue = findMinValue = taphop[0];

    for (int h = 0; h < soluongphantu; ++h)
    {
        if (findMaxValue < taphop[h]) {
            findMaxValue = taphop[h];
        }
        if (findMinValue >taphop[h]) {
            findMinValue = taphop[h];
        }
    }
    printf("Nhap lua chon cua ban");
    printf("1.Gia tri lon nhat trong mang");
    printf("2.Gia tri nho nhat trong mang");
    int luachon;
    scanf("%d", &luachon);
    switch (luachon) {
        case 1:
            printf("Gia tri lon nhat cua tap hop la %d", findMaxValue);
            break;
        case 2:
            printf("Gia tri nho nhat cua tap hop la %d", findMinValue);
            break;
    }



    return 0;
}