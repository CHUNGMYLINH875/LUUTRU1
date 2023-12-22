#include <stdio.h>
  //1.S? Fibonacci, TO HOp

int F(int n){
   if(n == 0 || n == 1){
      return n;
   }
   else{
      return F(n - 1) + F(n - 2);
   }
}

int main(){
   printf("%d", F(12));
   return 0;
}




/*To hop chap K cua N 
To hop chap K cua N (C(n, k)) duoc tính de quy d?a vào bài toán co s? và công thcc truy hoi sau :

Bài toán co so : C(n, 0) = 1 và C(n, n) = 1

Công thcc truy hoi : C(n, k) = C(n - 1, k - 1) + C(n - 1, k) 
*/
#include <stdio.h>

int C(int n, int k){
   if(n == k || k == 0){
      return 1;
   }
   else{
      return C(n - 1, k - 1) + C(n - 1, k);
   }
}

int main(){
   printf("%d", C(12, 2));
   return 0;
}



/* Chuyen doi co so*/


#include <stdio.h>

void dec_to_bin(long long n){
   if(n < 2){
      printf("%d", n);
   }
   else{
      dec_to_bin(n / 2);
      printf("%d", n % 2);
   }
}

int main(){
   dec_to_bin(37);    // dôi so 37 thanh so khac 
   printf("\n");
   dec_to_bin(282828282828);
   return 0;
}


//He thap luc phan


#include <stdio.h>

void dec_to_hex(long long n){
   if(n < 16){
      if(n < 10){
         printf("%d", n);
      }
      else{
         printf("%c", (55 + n));
      }
   }
   else{
      dec_to_hex(n / 16);
      int r = n % 16;
      if(r < 10){
         printf("%d", r);
      }
      else{
         printf("%c", (55 + r));
      }
   }
}

int main(){
   dec_to_hex(762);
   printf("\n");
   dec_to_hex(282828282828);
   return 0;
}




//cac bai toan lien quan den chu so


#include <stdio.h>

int D(long long n){
   if(n < 10){
      return 1;
   }
   else{
      return 1 + D(n / 10);
   }
}

int main(){
   long long n = 28282828;
   printf("%d", D(n));
   return 0;
}



//Tinh tong chu so cua N


#include <stdio.h>

int S(long long n){
   if(n < 10){
      return n;
   }
   else{
      return n % 10 + S(n / 10);
   }
}

int main(){
   long long n = 28282828;
   printf("%d", S(n));
   return 0;
}





//tính tong chu so chan le cua N


#include <stdio.h>

int S(long long n){
   if(n < 10){
      if(n % 2 == 1) return 0;
      else return n;
   }
   else{
      if(n % 2 == 1) return S(n / 10);
      else return n % 10 + S(n / 10);
   }
}

int main(){
   long long n = 12345678;
   printf("%d", S(n));
   return 0;
}



//Tim chu so lon nhat, nho nhat cua N

#include <stdio.h>

int F(long long n){
   if(n < 10){
      return n;
   }
   else{
      int tmp = F(n / 10);
      return n % 10 > tmp ? n % 10 : tmp;
   }
}

int main(){
   long long n = 12349567;
   printf("%d", F(n));
   return 0;
}





//cac bai tón lien quan den co so

#include <stdio.h>

int S(int n){
   if(n == 1){
      return 1;
   }
   else{
      return n + S(n - 1);
   }
}

int main(){
   int n = 10;
   printf("%d", S(n));
   return 0;
}





/*tong binh phuong lien tiep   S(n) = 12 + 22 + 32 + ... + n2
Bài toán co s? : S(n) = 1 n?u n = 1

Công th?c truy h?i : S(n) = n2 + S(n - 1) v?i n > 1
*/
#include <stdio.h>

int S(int n){
   if(n == 1){
      return 1;
   }
   else{
      return n * n + S(n - 1);
   }
}

int main(){
   int n = 10;
   printf("%d", S(n));
   return 0;
}







 /*T?ng bình phuong liên ti?p S(n) = 1/1 + 1/2 + 1/3 + .... + 1/n

Bài toán co s? : S(n) = 1 n?u n = 1

Công th?c truy h?i : S(n) = 1/n + S(n - 1) v?i n > 1
*/
Code : 

#include <stdio.h>

double S(int n){
   if(n == 1){
      return 1;
   }
   else{
      return (double)1 / n + S(n - 1);
   }
}

int main(){
   int n = 10;
   printf("%.2lf", S(n));
   return 0;
}



/*tinh tong cac so chan trong mang*/

#include <stdio.h>

int even_sum(int a[], int n){
   if(n == 0){
      return 0;
   }
   else{
      if(a[n - 1] % 2 == 0){
         return a[n - 1] + even_sum(a, n - 1);
      }
      else{
         return even_sum(a, n - 1);
      }
   }
}

int main(){
   int n = 6;
   int a[6] = {1, 2, 3, 4, 5, 6};
   printf("%d\n", even_sum(a, n));
   return 0;
}





/*kiem tra mang doi xung*/

#include <stdio.h>

int doixung(int a[], int left, int right){
   if(left > right){
      return 1;
   }
   else{
      if(a[left] != a[right]){
         return 0;
      }
      else{
         return doixung(a, left + 1, right - 1);
      }
   }
}

int main(){
   int n = 6;
   int a[6] = {1, 2, 3, 3, 2, 1};
   printf("%d\n", doixung(a, 0, n - 1));
   return 0;
}



//in ra mang tu trai qua phai


#include <stdio.h>

void left_to_right(int a[], int n){
   if(n > 0){
      left_to_right(a, n - 1);
      printf("%d ", a[n - 1]);
   }
}

int main(){
   int n = 6;
   int a[6] = {1, 2, 3, 4, 5, 6};
   left_to_right(a, 6);
   return 0;
}





//in ra mang tu phai qua trai


#include <stdio.h>

void left_to_right(int a[], int n){
   if(n > 0){
      printf("%d ", a[n - 1]);
      left_to_right(a, n - 1);
   }
}

int main(){
   int n = 6;
   int a[6] = {1, 2, 3, 4, 5, 6};
   left_to_right(a, 6);
   return 0;
}







// dem so phan tu duong trong mang
int demduong(int a[], int n)
 {
 	if(n==o)
 	  return -1;
 	int  dem = demduong(a,n-1);
	 if(*(a+n-1)>0)
	     dem++;
	 return dem;	   

























