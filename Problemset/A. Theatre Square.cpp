#include <iostream>
#include <cmath>

using namespace std;

int main(){
	unsigned long long n,m,a;
	cin>>n >>m >> a;
	cout <<(unsigned long long)(ceil((double)n/a) * ceil((double)m/a));
	return 0;
}