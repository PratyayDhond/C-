#include<iostream>
using namespace std;

class series{
	int no;
	static int sum1,sum2;
	public:
		series(){
			no = 0;
		}
		series(int x){
			no = x;
			calc();
		}
		
		series(series &a){
			no = a.no;
			calc();
		}
		
		void calc(){
			if(no%2 == 0){
				int cube = no*no*no;
				sum2 += cube;
			}else{
				int cube = no*no*no;
				sum1 += cube;
			}
		}
		
		void showData(){
			cout<<"Sum of cubes of odd  numbers = "<<sum1<<endl
				<<"Sum of cubes of even numbers = "<<sum2<<endl;
		}
		
};

int series :: sum1;
int series :: sum2;
int main(){
	cout<<"The 4th element will be reused as an input for copy constructor"<<endl;
	int arr[5];
	for(int i = 0;i<5;i++){
		cout<<"Enter element no. "<<i+1<<" : ";
		cin>>arr[i];
	}
	series a1(arr[0]),a2(arr[1]),a3(arr[2]),a4(arr[3]),a5(arr[4]),a6(a4);
	a1.showData();

system("pause");
return 0;

}