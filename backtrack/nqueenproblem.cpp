#include <cstdlib>
#include <iostream>
#include <math.h>
#include <time.h>
#include <iomanip>
#define delay Sleep
#include <windows.h>

COORD coordinate;
void gotoxy(int x,int y){
	coordinate.X=x; coordinate.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinate);
}

using namespace std;
clock_t st,ed;

void cetakSolusi(int x[],int n_ratu){
	int i,j;
	char c[50][50];
	
	for(i=1;i<=n_ratu;i++)
	{
		for(j=1;j<=n_ratu;j++)
		{
			c[i][j]=' ';
		}
	}
	for(i=1;i<=n_ratu;i++)
	{
		c[i][x[i]] =(char)1;
	}

	for(j=1;j<=n_ratu;j++)
	{
		cout<<(char)196<<(char)196<<(char)196<<(char)196;
	}
	cout<<endl;
	for(i=1;i<=n_ratu;i++)
	{
		cout<<(char)179;
		for(j=1;j<=n_ratu;j++)
		{
			cout<<" "<<c[i][j]<<" "<<(char)179;
		}
		
		cout<<endl;
		
		for(j=1;j<=n_ratu;j++)
		{
			cout<<(char)196<<(char)196<<(char)196<<(char)196;
		}
		cout<<endl;
	}
	
	cout<<endl;
}

bool tempat (int x[], int k ){
	int i;
	bool stop, kedudukan;

	kedudukan = true;
	i = 1;
	stop = false;
	while((i<k) && (!stop)){
		if((x[i]==x[k]) || (abs(x[i]-x[k])==abs(i-k))){
			kedudukan = false;
			stop = true;
		}else{
			i++;
		}
	}

return kedudukan;

}

void nRatuI(int n_ratu){
	int x[100],k;
	k=1;
	x[k] = 0;
	int t=1;

	while(k > 0){
		x[k] +=1;
		while((x[k] <= n_ratu) && ( !tempat(x,k))){
			x[k] +=1;
		}

		if(x[k] <= n_ratu){
			if(k == n_ratu){
				cout<<endl<<" "<<t<<endl<<endl;
				cetakSolusi(x,n_ratu);
				t++;
			}else{
				k++;
				x[k]=0;
			}
		}
		else{
			k--;
		}

	}
	
	cout<<endl<<"Total solusi yang didapat : "<<t-1<<" Solusi"<<endl;
}

int main(int argc, char *argv[])
{
	float waktu;
	system("color 07");
	system("title N-queen Program");

	awal:
	int n_ratu;
	cout<<"Masukkan Banyaknya ratu : ";
	cin>>n_ratu;
	gotoxy(60,2);cout<<(char)1<<" : Ratu";
	st = clock();
	nRatuI(n_ratu);
	ed = clock();
	waktu =(float) (ed-st)/CLOCKS_PER_SEC;
	cout<<setiosflags(ios::fixed);
	cout<<endl<<"Dengan waktu yang dibutuhkan : "<<setprecision(4)<<waktu<<" detik"<<endl;

	cout<<"\nIngin mengulang ? (y/n) : ";
	char p;
	cin>>p;
	if(p=='y') {
		system("cls");
		goto awal;
	}
	else
		return EXIT_SUCCESS;
}
