#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
	
	
	int list[100];
	int n;
	
	cout << "Masukan Jumlah Array: ";
	cin >> n;
	
	for(int i = 0;i < n;i++){
		cout << "Masukan Array Ke - " << i + 1 << " : ";
		cin >> list[i];
	}
	
	
	cout << endl;
	cout << "Isi Array Sebelum pengurutan" << endl;
	for(int i = 0;i < n;i++){
		cout << list[i] << " | ";
	}
	cout << endl << endl;
	
	
	cout << "Proses Pengurutan" << endl;
	int min, temp;
	for(int i = 0;i < n;i++){
		min = i;
		
		for(int j = i + 1;j < n;j++){
			if(list[min] > list[j]){
				min = j;
			}
		}
		
		temp = list[i];
		list[i] = list[min];
		list[min] = temp;
		
		for(int m = 0;m < n;m++){
		cout << list[m] << " | ";
		}
		cout << endl;
		
	}
	
	
	cout << endl;
	cout << "Isi Array Sesudah pengurutan" << endl;
	for(int i = 0;i < n;i++){
		cout << list[i] << " | ";
	}
	cout << endl;
	
	return 0;
}
//github.com/Ikhlashmulya/algorithms
