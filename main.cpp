#include "head.h"
#include "head.cpp"
#include <iostream>
using namespace std;

int main(){
	int a;
	int b;
	int c;
	cin >> a;
	cin >> b;
	c = add(a,b);
	cout << a << " " << b << " " << c << endl;
	return 0;
}
