#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double a, b, c;
	cin >> a >> b >> c;
	double d;
	double x;
	double x1, x2;
	if(a == 0){
		if(b == 0){
			if(c == 0)
				cout << "Infinity" << endl;
			else
				cout << "No solution" << endl;
		}
		else{
			x = -c/b;
			cout << x << endl;
		}
	}
	else{
		d = b*b - 4*a*c;
		if(d < 0)
			cout << "No solution" << endl;
		if(d == 0){
			x = -b/(2*a);
			cout << x << endl;
		}
		if(d > 0){
			x1 = (-b + sqrt(d))/(2*a);
			x2 = (-b - sqrt(d))/(2*a);
			cout << x1 << " " << x2 << endl;
		}
	}
	return 0;
}
