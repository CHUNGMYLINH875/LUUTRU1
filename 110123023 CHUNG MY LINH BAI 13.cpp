#include<stdio.h>
#include<conio.h>
#include<string.h>
/* tim 10 so fibonacci dau tien su dung de quy*/
int fibonacci(int n);
int long tinhGiaithua (int n );
int tongN (int n);



int main()
{
	int fibonacci(int n);
	long tinhGiaithua (int n );
	int tongN (int n);
}

int fibonacci(int n){
	if (n < 0){
		return -1;
	}else if ( n == 0 || n==1){
		return n;
	}else {
		return fibonacci( n - 1)+ fibonacci(  n -  2);
	}
}

int main()
{
	int i;
	printf (" 10 so dau tien cua day so Fibonacci:  \n");
	   for (i =0 ;i < 10; i++){
	   printf("%d",fibonacci(i));
     }
} 






/*su dung de quy tinh giai thua cua 1 so nguyen duong nhap tu ban phim  */

 long tinhGiaithua (int n ){
 	if (n  > 0 ){
 		return n*  tinhGiaithua(n - 1);
	 }else{
	 	return 1;
	 }
 }

int main()
{
	int n;
	printf("\n Nhap so nguyen duuong n:  ");
	scanf("%d",&n);
	printf("Giai thua cua %d la: %d \n",  n,  tinh Giaithua(n));
	
}



/* su dung de quy ting tong 1 spo nguyen duong*/

int tongN (int n);

int main()
{
	int i, n , tinhtongN;
	
	printf("Nhap so nguyen duong:  ");
	scanf("%d",&n);
	tinhtongN = tong N(n);
	printf("\n Tong cac so tu 1 toi %d la : %d",  n , tinhtongN );
	
	return(0);
	
}

int tongN (int n )
{
	int thinhtong;
	if (n ==1)
	{
		return (1);
	}else
	{
		tinhtong = n + tongN(n - 1);
	}
	return (tinhtong);
}



























