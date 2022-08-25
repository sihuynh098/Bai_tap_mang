#include <stdio.h>
//Cach 1
// int main(){
//     int sokm, tongtien=0;
//     printf("Nhap vao so km ban da di: ");
//     scanf("%d", &sokm);
//     if(sokm <= 30){
//         tongtien = sokm * 5000;
//     }else{
//         tongtien = (30*5000) + (sokm-30)*4000;
//     }
//     printf("So tien ban phai tra la: %d", tongtien);
//     return 0;
// }

//Cach 2
int nhapkm(){
    int sokm;
    printf("Nhap so km ban da di: ");
    scanf("%d", &sokm);
    return sokm;
}
void tinhtien(int sokm){
    int tongtien=0;
    if(sokm <= 30){
        tongtien = sokm * 5000;
    }else{
        tongtien = (30*5000) + (sokm-30)*4000;
    }
    printf("So tien ban phai tra la: %d VND", tongtien);
}

int main(){
    int a = nhapkm();
    tinhtien(a);
    return 0;
}

