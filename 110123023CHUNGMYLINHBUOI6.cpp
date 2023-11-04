#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
struct Sinhvien
{
	char     Mssv[10];
	char     Hovatensv[50];
    char     Phai[10];
    int      Namsinh;
    char     Nganhhoc[30];
    float    Kqcuoikhoa;
    char     xeploai[20];
    char     quequan[30];
};

typedef struct Sinhvien SINHVIEN;
void    TIMSV(SINHVIEN a[], int n);
void    INGX(SINHVIEN  a[], int n);
void    Sapxep(SINHVIEN  a[], int n);  
void    Nhapsv(SINHVIEN  &x);
void    NhapsvN(SINHVIEN a[], int n);
void    Xuatsv(SINHVIEN);
void    XuatsvN(SINHVIEN a[], int n);


int main()
{ int n;
     SINHVIEN x,  a[10];
     printf("\n\n\n Nhap so luong sinh vien ");
     scanf("%d",&n);
     NhapsvN(a,n);
     XuatsvN(a,n);
     printf("\n\n\n An phim bat ky de in DS sap xep");
     getch();
     Sapxep(a,n);
     XuatsvN(a,n);
     printf("\n\n\n An phim bat ki de in DS Gioi_Xuat_sac");
     getch();
     INGX(a,n);
       printf("\n\n\n\n An phim bat ki de tim SV");
       getch();
       TIMSV(a,n);
}
























































