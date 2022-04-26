#include <iostream>
#include <stdio.h>
#include <conio.h>
#define size 99

using namespace std;

void sort(int[], int);

int main() {
    int x[size], i, uang, n, k, hasil[size];
    cout << "Banyak Koin : ";
    cin >> n;
    cout << "\n\n Masukan jenis koin : \n";
    for(i = 1; i <= n; i++){
       cout << endl;
	    cin >> x[i];
    }
    sort(x,n);
    cout << "Koin yang tersedia : \n";
    for(i = 1; i <= n; i++){
        cout << x[i];
        cout << endl;
    }
    cout << endl;
    cout << "Masukan Nilai yang dipecah : ";
    cin >> uang;
    cout << endl;
    for(i = 1; i <= n; i++){
        hasil[i] = uang / x[i];
        uang = uang % x[i];
        k = uang % x[i];
    }
    for(i = 1; i <= n; i++){
        cout << "Keping " << x[i];
        cout << "-an sebanyak : " << hasil[i];
        cout << endl << endl;
    }
    cout << "Sisanya adalah " << k;
    getch();
    return 0;
}
void sort(int a[], int siz){
    int pass, hold ,j;
    for(pass = 1; pass <= siz-1; pass++){
        for(j = 0; j <= siz-2; j++){
            if(a[j + 1] < a[j + 2]){
                hold = a[j + 1];
                a[j + 1] = a[j + 2];
                a[j + 2] = hold;
            }
        }
    }
}
