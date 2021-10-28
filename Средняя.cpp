#include <iostream>
#include <cstdlib>
using namespace std;

void input(int n,int m,int **a) {
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			a[i][j] = rand()%41+10;
		}
	}
}

void output(int n,int m,int **a) {
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main() {
	setlocale (LC_ALL,"Russian");
	int n,m;
	do {
		cout<<"Введите размер массива:";
		cin>>n>>m;
	} while (n<=0 || m<=0);
	int **a = new int *[n];
	for (int i=0;i<m;i++) {
		a[i]=new int [m];
	}
	input(n, m, a);
	output(n, m, a);
	for (int i=0;i<m;i++) delete [] a[i];
	delete [] a;
	return 1;	
}
