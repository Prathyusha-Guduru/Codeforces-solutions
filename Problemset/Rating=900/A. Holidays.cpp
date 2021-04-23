
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int no_of_weeks = floor((double)n/7);
	int min = 0;
	if (no_of_weeks > 0 ){
		min = no_of_weeks*2;
	}
	else if(no_of_weeks == 0 && n<=5){
		min  = 0;
	}
	else if(n==6){
		min++;
	}
	int max = 0;
	if(n<=2){
		max =n;
	}
	else if(n>2 && no_of_weeks*2 == 0){
		max = 2;
	}
	else{
		max = no_of_weeks*2+ n%7;
	}
	cout<<min<<" "<<max<<endl;
	return 0;
}