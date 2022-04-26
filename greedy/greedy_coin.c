#include <stdio.h>
#include <conio.h>
#define size 99

void sort(int[], int);

main(){
	int x[size], uang, n, k, hasil[size];
	
	printf("\nBanyak Koin: ");
	scanf("%d", &n);
	
	printf("\n\nMasukan Jenis Koin : \n");
	for(int i = 0;i < n;i++){
		scanf("\n %d", &x[i]);
	}
	
	sort(x, n);
	
	printf("\nKoin yang Tersedia : \n");
	for(int i = 0;i < n;i++){
		printf("%d", x[i]);
		printf("\n");
	}
	
	printf("\n");
	printf("\nMasukan Nilai yang Dipecah : ");
	scanf("%d", &uang);
	printf("\n");
	
	for(int i = 0;i < n; i++){
		hasil[i] = uang / x[i];
		uang = uang % x[i];
		k = uang % x[i];
	}
	
	for(int i = 0; i < n ;i++){
		printf("Keping %d", x[i]);
		printf("-an sebanyak : %d", hasil[i]);
		printf("\n \n");
	}
	
	printf("sisanya adalah %d", k);
	
	return 0;
}

void sort(int a[], int siz){
	int pass, hold, j;
	
	for(pass = 1;pass <= siz -1; pass++){
		for(j = 0;j <= siz - 2;j++){
			if(a[j + 1] < a[j + 2]){
				hold = a[j+1];
				a[j+1] = a[j+2];
				a[j+2] = hold;
			}
		}
	}
}
