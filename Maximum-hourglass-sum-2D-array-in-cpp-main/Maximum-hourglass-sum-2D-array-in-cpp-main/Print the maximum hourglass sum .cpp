#include<iostream>
using namespace std;
int main(){
	int arr[6][6];
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			cin>>arr[i][j];
		}
	}
	int sum=0;
	int max=-9999999;
	
	for(int i=0;i<4;i++){
		
		for(int j=0;j<4;j++){
			sum = 0;
			sum= arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]+arr[i+1][j+1];
			if(sum>max){
				max = sum;
			}
		}
	}
	cout<<max;
return 0;
}
#include<stdio.h>

int main(){


return 0;
}
