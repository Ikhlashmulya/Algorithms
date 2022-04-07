#include <iostream>
using namespace std;

int main(){
	int banyakA;
	int x[100];
	
	//proses pendefinisian / pembuatan array
	cout << "Masukan Banyak Array : ";
	cin >> banyakA;
	
	//Proses memasukkan array
	for(int m = 0; m < banyakA;m++){
		cout << "Masukan Array Ke " << m << " : ";
		cin >> x[m];
	}
	
	cout << "array awal adalah : " << endl;
	
	int y = banyakA - 2;
	int param;
	
	//Proses membaca array sebelum disorting
	for(int m = 0;m < banyakA;m++){
		cout << x[m] << " ";
	}
	
	// Proses algoritma penyortiran / sorting
	cout << "\n\n\n" << "mulai proses sorting" << endl;
	
	while(y >= 0){
		int index = 0;
		while(index <= y){
			if(x[index] > x[index + 1]){
				param = x[index];
				
				x[index] = x[index + 1];
				
				x[index + 1] = param;
			}
			
			index++;
		}
		//Pengecekan dan proses sorting
		for(int m = 0; m < banyakA; m++){
			cout << x[m] << " ";
		}
		cout << endl;
		y--;
	}
	
	//Membaca Array setelah disorting
	cout << endl;
	cout << "hasil Sorting adalah : " << endl;
	for(int m = 0;m < banyakA;m++){
		cout << x[m] << " ";
	}
	
	
	return 0;
}
