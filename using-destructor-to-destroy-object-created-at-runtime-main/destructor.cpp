#include<iostream>
using namespace std;

class student{
	public:		
		string name;
		int age;
		int roll_no;
};

class sample{
	student *p;
	public:
		sample()
		{
			p = new student;
			getdata(); 
		}
		
		void getdata(){
			cout<<"Enter Name     : ";
			cin>>p->name;
			cout<<"Enter Age      : ";
			cin>>p->age;
			cout<<"Enter roll no. : ";
			cin>>p->roll_no;
		}
		
		void showData(){
			cout<<"Roll no. : "<<p->roll_no<<endl	
				<<"Name     : "<<p->name<<endl
				<<"Age      : "<<p->age<<endl;
		}
		
		~sample(){
			delete p;
			cout<<"The object has been deleted successfully";
		}
};
int main(){
	sample a;
	cout<<endl;
	a.showData();

return 0;
}
