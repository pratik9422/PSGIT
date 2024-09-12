//Dangling pointer
#include<iostream>
using namespace std;
class Abc{
	int p;
	int *q;
	public:
	Abc(){
		p=10;
		q=new int;
		*q=20;
		
	}
//	Abc(Abc & obj3){
//		this->p=obj3.p;
//		q=new int;
//		*(this->q)=*(obj3.q);
//		
//	}
	void show(){
		cout<<"the value of p is: "<<p<<endl;
		cout<<"the value of q is: "<<*q<<endl;
		cout<<"the value of q is: "<<q<<endl;
	}
	
	~Abc(){
		cout<<"destructor is called"<<endl;
			delete q;
		
	}
	
}; 
int main(){
	Abc obj1;
	obj1.show();
	{
	Abc obj2(obj1);
	obj2.show();
	
	}
	obj1.show();
	
}
