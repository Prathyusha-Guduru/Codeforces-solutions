#include <iostream>

using namespace std;

int main(){
	int num;
	cin>>num;
	int count = 0;
	for(int i=0;i<num;i++){
		int a,b,c;
		cin>>a >>b >> c;
		if(a+b+c >= 2){
			count +=1;
		}
		// cout<<"count is "<<count;
	}
	cout<<count<<endl;
}