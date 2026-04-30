#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	if(a == 0){
		if(b == 0){
			cout << "WOW";
		}
		else{
			cout << "NO";
		}
	}
	else{
		cout << fixed << setprecision(2) << (double)-b/a;
		cout << fixed << setprecision()
	}
	
	return 0;
}