#include <iostream>
using namespace std;

int Fib(int i) {	  
	if (i==0) return 0;
	if (i==1) return 1;
	return Fib(i-1)+Fib(i-2);
}

int Fib2 (int n) {
	int n1=0, n2=1, n3;
	cout<<n1<<endl<<n2<<endl;
	for(int i=3;i<=n;i++) {
		n3=n1+n2;
		n1=n2; 
		n2=n3;
		cout<<n3<<endl;
	}	
}

int main() {
	int i=0,n;
	cout<<"Enter n=";
	cin>>n;
	while (i<n) {
		cout<<Fib(i)<<endl;
		i++;
	} 
	//Fib2(n);
	return 1;
}
