#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a, b, c;
    cin >> a >> b >> c;
    double d;
    if (a != 0){
        if(b == 0){
            if(c != 0 && -c/a > 0)
                cout << sqrt(-c/a) << " " << -sqrt(-c/a) << endl;
            if(c == 0)
                cout << 0 << endl;
        }
        else{
            if(c==0){
                cout << -b/a << endl;
            }
            else{
                d = b*b - 4*a*c;
                if (d > 0)
                    cout << ((-b + sqrt(d))/(2*a)) << " " << ((-b - sqrt(d))/(2*a)) << endl;
                if(d == 0)
                    cout << -b/(2*a);
            }
        }
    }
    return 0;
}
