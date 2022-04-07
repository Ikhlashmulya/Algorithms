#include <iostream>
using namespace std;

int main(){
	
	int larik[100];
	int n;
	
	cout << "Masukan Jumlah Array: ";
	cin >> n;
	
	for(int i = 0;i < n;i++){
		cout << "Masukan Array Ke - " << i + 1 << " : ";
		cin >> larik[i];
	}
	
	cout << endl;
	cout << "Isi Array Sebelum pengurutan" << endl;
	for(int i = 0;i < n;i++){
		cout << larik[i] << " | ";
	}
	cout << endl << endl;
	
	cout << "Proses Pengurutan" << endl;
	int temp;
	for(int i = 1;i <= n - 1;i++){
		for(int j = n - 1; j >= i;j--){
			if(larik[j] < larik[j - 1]){
				temp = larik[j];
				larik[j] = larik[j - 1];
				larik[j - 1] = temp;
			}
		}
		for(int m = 0;m < n;m++){
		cout << larik[m] << " | ";
		}
		cout << endl;
	}
	
	cout << endl;
	cout << "Isi Array Sesudah pengurutan" << endl;
	for(int i = 0;i < n;i++){
		cout << larik[i] << " | ";
	}
	
	
	return 0;
}

//github.com/ikhlashmulya/algorithms
