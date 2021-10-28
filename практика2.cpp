#include <iostream>
using namespace std;

int kill (int n) {
	return 10+5*kill(n);
}
int main() {
	int n=1;
	kill(n);
	return 1;
}
