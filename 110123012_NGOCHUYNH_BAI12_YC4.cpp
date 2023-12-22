#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct
{
	char Ma[10];
	char HoTen[40];
}Sinhvien;
void ReadFile(char *FileName);
void WriteFile(char *FileName);
void Search(char *FileName);
int main()
{
	int c;
	for(;;)
	{
		printf("\n\t*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
		printf("\t*|           1. Nhap DSSV         |*\n");
		printf("\t*|          2. In DSSV            |*\n");
		printf("\t*|          3. Tim Kiem           |*\n");
		printf("\t*|          4. Thoat              |*");
		printf("\n\t*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
		printf("\t Bam chon 1, 2, 3, 4: ");
		scanf("%d",&c);
		fflush(stdin);
		if(c==1)
		{
			WriteFile("Sinhvien.txt");
		}
		else if(c==2)
		{
			ReadFile("Sinhvien.txt");
		}else if(c==3)
		{
			Search("Sinhvien.txt");
		}else break;
	}
}
void WriteFile(char *FileName)
{
	FILE *f;
	int n,i;
	Sinhvien SV;
	f=fopen(FileName,"ab");
	printf("Nhap vao so luong sinh vien: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Sinh vien thu %i\n",i);
		fflush(stdin);
		printf("- MSSV: ");
		gets(SV.Ma);
		printf("- Ho ten: ");
		gets(SV.HoTen);
		fwrite(&SV,sizeof(SV),1,f);
	}
	fclose(f);
	printf("Bam phim bat ki de tiep tuc");
		getch();
}
void ReadFile(char *FileName)
{
	FILE *f;
	int n,i;
	Sinhvien SV;
	f=fopen(FileName,"rb");
	printf("  MSSV  | Ho va ten\n ");
	fread(&SV,sizeof(SV),1,f);
	while(!feof(f))
	{
		printf("  %s  |  %s\n",SV.Ma,SV.HoTen);
		fread(&SV,sizeof(SV),1,f);
	}
	fclose(f);
	printf("Bam phim bat ki de tiep tuc");
	getch();
}
void Search(char *FileName)
{
	char MSSV[10];
	FILE *f;
	int Found=0;
	Sinhvien SV;
	fflush(stdin);
	printf("Ma so sinh vien can tim: ");
	gets(MSSV);
	f=fopen(FileName,"rb");
	while(!feof(f) && Found==0)
	{
		fread(&SV, sizeof(SV),1,f);
		if(strcmp(SV.Ma,MSSV)==0)
			Found=1;
	}
	fclose(f);
	if(Found==1)
	{
		printf("Tim thay sinh vien co ma %s. Ho ten la: %s",SV.Ma,SV.HoTen);
	}
	else
	{
		printf("Khong tim thay sinh vien co ma %s: ",MSSV);
	}
	printf("\nBam phim bat ki de tiep tuc");
	getch();
}
