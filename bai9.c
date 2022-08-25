#include <stdio.h>
//Ham nhap so phan tu cua mang
int sophantu(){
    int a;
    printf("Nhap vao so luong phan tu trong mang: ");
    scanf("%d", &a);
    return a;
}
//Ham nhap gan gia tri cho mang
void nhapmang(int A[], int a){
    for(int i = 0;i < a; i++){
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    } 
}
//Ham sap xep mang theo gia tri tang dan
void mangtd(int A[], int a){
    int tg[a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(A[i] < A[j]){//321, 231, 132, 123
                tg[i] = A[i];
                A[i] = A[j];
                A[j] = tg[i];
            }
        }
    }
    printf("Mang tang dan la: ");
    for(int q=0;q<a;q++){
       printf("A[%d] = %d\t", q, A[q]);
    }
}
//Ham sap xep theo gia tri giam dan
void manggd(int A[], int a){
    int gg[a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){//123, 213, 312, 321.
            if(A[i] > A[j]){
                gg[i] = A[i];
                A[i] = A[j];
                A[j] = gg[i];
            }
        }
    }
    printf("\nMang giam dan la: ");
    for(int q=0;q<a;q++){
       printf("A[%d] = %d\t", q, A[q]);
    }
}

int main(){
    int a;
    a = sophantu();
    int mang[a];
    nhapmang(mang, a);
    mangtd(mang, a);
    manggd(mang, a);
    return 0;
}