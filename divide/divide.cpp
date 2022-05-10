//Mencari nilai maximum dan minimum menggunakan algoritma divide and conquer
#include <iostream>
#include <conio.h>

using namespace std;

int a[100];
int max, min;
void maxmin(int i, int j);

int main(){
	int i, num;
	
	cout << "\n\t\tMaxmin dengan minimum\n";
	cout << "Masukkan Banyak Angka : ";
	cin >> num;
	
	cout << "\nMasukkkan Angka-angkanya : ";
	for(i = 0;i < num;i++){
		cin >> a[i];
	}
	
	::max = a[0];
	::min = a[0];
	maxmin(0, num - 1);
	
	cout << "Maximum Angka : " << ::max << endl;
	cout << "Minimum Angka : " << ::min << endl;
	
	return 0;
}

void maxmin(int i, int j){
	int max1, min1, mid;
	
	if(i == j){
		::max = ::min =a[i];
	}
	else if(i == j-1){
		if(a[i] > a[j]){
			::max = a[i];
			::min = a[j];
		}
		else {
			::max = a[j];
			::min = a[i];
		}
	}
	else{
		mid = (i + j) / 2;
		maxmin(i, mid);
		max1 = ::max;
		min1 = ::min;
		maxmin(mid+1, j);
		
		if(::max < min1){
			::max = max1;
		}
		
		if(::min > min1){
			::min = min1;
		}
		
	}
}

//Jika dalam c tidak perlu "::"(memanggil variabel global) di depan variabel
