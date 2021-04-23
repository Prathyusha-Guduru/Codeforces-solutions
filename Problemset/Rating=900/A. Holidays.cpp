#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n;
	cin>>n;
	int no_of_weeks = floor((double)n/7);
	int max = 0;
	if(n<=2){
		max =n;
	}
	else if(n>2 && no_of_weeks*2 == 0){
		max = 2;
	}
	else{
		max = no_of_weeks*2 + n%7;
	}
	cout<<no_of_weeks*2<<" "<<max<<endl;
	return 0;
}