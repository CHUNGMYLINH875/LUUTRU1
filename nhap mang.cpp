#include<stdio.h>
#include<conio.h>
int main()
{ int a[100][100],x, s,m,n,i,j;
  printf("\nNhap so dong="); scanf("%d",&m);
  printf("\nNhap so cot="); scanf("%d",&n);
  // nhap mang hai chieu
  for(i=0; i<m; i++)
  { 
    for(j=0; j<n; j++)
    {
    	printf("a[%d][%d]=",i,j);
    	scanf("%d",&a[i][j]);
    	}
   } 
   // xuat mang hai chieu
   printf("\nXuat mang vua nhap:");
   for(i=0; i<m; i++)
   {  printf("\n");
      for(j=0; j<n; j++)
      {
      	printf("%4d",a[i][j]);
      }
	}
	// tim max
	int max=a[0][0];
	for(i=0; i<m; i++)
	{
	  for(j=0; j<n; j++)
	  {
	    if(a[i][j]>max)	max=a[i][j];
	   }
	 }
	 printf("\nGia tri lon nhat= %d",max);
	// tong cac phan tu
	for(i=0; i<m; i++)
	{
	 for(j=0; j<n; j++)
	 { s=s+a[i][j];
	  }
	  } printf("\nTong cac phan tu tren ma tran=%d",s);
	//tim va in cac vi tri x 
	printf("\nnhap gia tri can tim="); scanf("%d",&x);
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
    { if(x==a[i][j])
     
            printf("(%d %d)\n",i,j);
     }        
    }
    //dem so phan tu
    int diem=0;
     for(i=0; i<m; i++)
     {
     	for(j=0; j<n; j++)
     	{
     		if(a[i][j]<0,diem++);
     	 }
      } printf("\nso phan tu am trong ma tran la= %d",diem);
	  //
   return 0;
   }	
