#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
	int sum=0,num=0;
	string s;
	cout<<"Enter row: ";
	cin>>s;
	for (int i=0;i<s.length();i++) {
		if ( isdigit(s[i]) == false && s[i]!='+' ) {
			if ( isdigit(s[i-1]) == true) {
				sum=sum+num;
				cout<<sum;
				sum=0;
				num=0;
			}
			cout<<s[i];
		} else if (s[i]=='+') {
			sum=sum+num;
			num=0;
		} else if (isdigit(s[i])==true) {
			char a=s[i];
			int b=a-'0';
			num=num*10+b;
		}
	}
	sum=sum+num;
	if (sum!=0) {
		cout<<sum;
	}
	return 1;
}

