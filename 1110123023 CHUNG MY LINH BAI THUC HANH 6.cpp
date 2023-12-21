#include<stdio.h>
#include<conio.h> 
#include<string.h>
#include<stdlib.h>
  
struct SinhVien
{
	char     Masv[10];
	char     Hotensv[30];
	char     Phai[10];
	int      Namsinh;
	char     Nghanhhoc[30];
	float    Kqcuoikhoa;
	char     Xeploai[20];
	char     Quequan[30];
	
	
 }; 

typedef struct SinhVien SINHVIEN
void   TIMSV(SINHVIEN a[], int n);
void   INGX(SINHVIEN a[], int n);
void   Sapxep(SINHVIEN a[], int n);
void   Nhapsv(SINHVIEN &x);
void   NhapsvN(SINHVIEN a[], int n);
void   Xuatsv(SINHVIEN );
void   XuatsvN(SINHVIEN a[], int n);


int main()
{int n;
    SINHVIEN  x, a[10];
    printf("\n\n\n Nhap so luong sinh vien ");
    scanf("%d",&n);
    NhapsvN(a,n);
    XuatsvN(a,n);
    printf("\n\n\n An phim bat ki de in DS sap xep");
    getch();
    Sapxep(a,n);
    XuatsvN(a,n);
    printf("\n\n\n An phim bat ki de in DS Gioi_Xuat_sac");
    getch();
    INGX(a,n);
      printf("\n\n\n An phim bat ki de tim SV ");
    getch();
    TIMSV(a,n);
    
}
 


 
void Nhapsv(SINHVIEN &x)
{
	fflush(stdin);
	printf("\nNhap ho ten:  ");
	gets(x. Hotensv);
	     fflush(stdin);
	flush(stdin);
	printf("\nNhap phai:  ");
	gets(x. Phai);
	     fflush(stdin);
	flush(stdin);
	printf("\nNhap nghanh hoc:  ");
	gets(x. Nganhhoc);
	     fflush(stdin);
	flush(stdin);
	printf("\nNhap Que quan:  ");
	gets(x. Quequan);
	     
	                    
}

do
{
	printf("\n Nhap Nam sinh:  ");
	scanf("%d",&x.Namsinh);
	
}while(x.Namsinh<1980  || x.Namsinh>2010);

do 
{
	printf("\n Nhap KQ cuoi khoa:  ");
	scanf("%f",&x.Kqcuoikhoa);
	
}while(x.kqcuoikhoa,0 || x.kqcuoikhoa>4);

fflush(stdin);
    if(x.kqcuoikhoa<=1.5)
            {strcpy(x.xeploai,"Yeu");}
    else  
	      if(x.kqcuoikhoa<=2.5)
            {strcpy(x.xeploai,"Trung binh");}      
	      else		
                if(x.kqcuoikhoa<=3.0)
                    {strcpy(x.xeploai,"Kha");}      
	            else		
                      if(x.kqcuoikhoa<=3.8)
                          {strcpy(x.xeploai,"Gioi");}      
                  	else	
                          {strcpy(x.xeploai,"Xuat sac");}      
		
          
void NhapsvN(SINHVIEN a[] ,int n)
 {
 	for (int i=0;i<n;i++)
 	  {
 	  	printf("\n Nhap sinh vien thu %d"i+1);
 	  	Nhapsv(a[i]);
	   }
 }



void Xuatsv(Sinhvien x)
{
	printf("|%5s|%-18s|%-6s|%10d|%-11s|%12.1f|%-10f|%-10s",x.Masv,x.Hotensv,x.Phai,x.Namsinh,x.Nghanhhoc,x.kqcuoikhoa,x.Quequan);
	
	
}


void XuatsvN(SINHVIEN a[], int n)
{system("cls");
printf("\n\n|---------------------------------------------------------------------------------------------------------------\n"  );
      printf("|   Ma SV    |    Ho ten sinh vien   |  Phai  |  Nam sinh  | Nghanh hoc |  KQ cuoi khoa  | Xep loai | Que quan | " );


    for (int  i=0;i<n;i++)
    {
  printf("\n   |-----------|-----------------------|--------|-------------|------------|---------------|----------|----------|\n");   	
	Xuatsv(a[i]);
	}
}


void Sapxep(SINHVIEN a[], int n)
{  SINHVIEN tmp;
     for(int i=0;i<n;i++){
     	for(int j=i+1;  j<n; ++i){
     		if(a[i].kpcuoikhoa >a[i].kqcuoikhoa){
     			tmp=a[i]
     			a[i]+a[j];
     			a[j]=tmp;
			 }
		 }
	 }
}


void INGX(SINHVIEN a[],int n)
{system("cls");
printf("\n\n|---------------------------------------------------------------------------------------------------------------\n"  );
      printf("|   Ma SV    |    Ho ten sinh vien   |  Phai  |  Nam sinh  | Nghanh hoc |  KQ cuoi khoa  | Xep loai | Que quan | " );


    for (int  i=0;i<n;i++)
    {   if(a[i].kqcuoikhoa>=3.0)
      {
printf("\n   |-------------|-----------------------|--------|------------|------------|----------------|----------|----------|\n");   	
	Xuatsv(a[i]);	
	  }
	}
}


void TIMSV(SINHVIEN a[], int n)
{system("cls");
fflush(stdin);
char Matim[10];
printf("\n Nhap Ma sinh vien can tim:  ");
get(Matim);
printf("\n\n|---------------------------------------------------------------------------------------------------------------\n"  );
      printf("|   Ma SV    |    Ho ten sinh vien   |  Phai  |  Nam sinh  | Nghanh hoc |  KQ cuoi khoa  | Xep loai | Que quan | " );


    for (int  i=0;i<n;i++)
    {   if(strcmp(a[i].Masv,Matim)==0)
      {
printf("\n   |-------------|-----------------------|--------|------------|------------|----------------|----------|----------|\n");   	
	Xuatsv(a[i]);	
}
































































































































