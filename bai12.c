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

//Ham tim mang lon nhat
int mangln(int A[], int a){
    int max = A[0];
    for(int i=0;i<a;i++){
        if(A[i] > max){
            max = A[i];
        }
    }
    return max;
}

//Ham dem so lan xuat hien trong mang
int hamtim(int A[], int a){
    int mangchua,mangdem[a], max=0,vitridt=0;;
    for(int i=0;i<a;i++){
        int dem=1;
        mangdem[i]=dem;
        for(int j=i+1;j<a;j++){
            if(A[i]==A[j]){//2 2 3 4 2 2 
                mangdem[i]=++dem;
                for(int k=j;k<a;k++){
                    A[k]=A[k+1];
                }a--;
                j--;
            }
        }
    }
    for(int s=0;s<a;s++){
        if(mangdem[s]>max){
            vitridt=s;
            max=mangdem[s];
            mangchua=A[s];
        }
    }
    printf("%d xuat hien hien nhieu nhat voi %d lan va vi tri xuat hien dau tien la %d.", mangchua,max, vitridt);
}
int main(){
    int a;
    a = sophantu();
    int A[a];
    nhapmang(A, a);
    hamtim(A, a);
    return 0;
}