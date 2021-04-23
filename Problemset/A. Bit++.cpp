#include <iostream>

using namespace std;

int main(){
	int x=0;
	int n;
	cin>>n;
	char arr[3];
	for(int i=0;i<n;i++){
		cin>>arr[0]>> arr[1]>> arr[2];
		if(arr[0] == '+' || arr[2] == '+'){
			x++;
		}
		else if(arr[0] == '-' || arr[2] == '-'){
			x--;
		}
	}
	cout<<x<<endl;
}