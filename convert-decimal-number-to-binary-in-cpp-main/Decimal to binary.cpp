#include<iostream>
using namespace std;

int main(){
	int no;
	int binary[20] = {0};
	int temp;
	cout<<"Enter a decimal Number : ";
	cin>>no;
	int i = 0; 
	while(no>0){
		temp = no%2;
		no=no/2;
		binary[i] = temp;
		i++;
	}
	cout<<"Binary number : ";
	
	int n = 20;
	while(binary[n] != 1){
		n--;
	}
	i = n+1;
	for(i =n;i>=0;i--){
		cout<<binary[i];
	}

return 0;
}
