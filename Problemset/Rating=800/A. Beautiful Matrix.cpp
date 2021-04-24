#include <iostream>
#include <cstdlib>

using namespace std;

// void swap(int ** arr1,int ** arr2){
// 	int * temp = *arr1;
// 	*arr1 = *arr2;
// 	*arr2 = temp;
// }

int main(){
	int matrix[5][5];
	int moves = 0;
	int index_1[2];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>matrix[i][j] ;
			if(matrix[i][j] == 1){
				index_1[0] = i;
				index_1[1]= j;
			}
		}
		
	}
	if(matrix[2][2] != 1){
		moves = abs(index_1[0]-2) + abs(index_1[1]-2);
	}
	cout<<moves<<endl;

}
