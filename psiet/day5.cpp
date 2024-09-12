/*#include<iostream>
using namespace std;
class pratik{
	int c;
	public:
		int a;
	protected:	
		int b;
	public:
	void show(){
		cout<<"inside class pratik"<<endl;
		
	}
		
};
class pratiksha:public pratik{
	int p;
	public:
		int q;
	protected:
		int r;	
	public:
//	void show(){
//		cout<<"inside class pratiksha"<<endl;
		
//	}
	
};
int main(){
	pratik obj1;
		
	obj1.show();
	obj2.show();
}*/
//#include<iostream>
//using namespace std;
//class A
//{
//int c;
//public:
//	int a;
//protected:
//	int b;
//	void display()
//	{
//		cout<<"in display of A\n";
//	}
//
//};
//class B:protected A
//{
//public:
//	int d;
//	public:
//	void show()
//	{
//	    	B objb;
//	objb.display();
//		cout<<a<<b;
//	
//	}
//	//PROTECTED: a,b,display()
//};
//
//int main()
//{
//    B bobj;
//    bobj.show();
//    
//}
#include<iostream>
using namespace std;
class A
{
	int c;
public:
	int a;
protected:
	int b;
public:
	void display()
	{
		cout<<"in display of A\n";
	}
};
class B:private A
{
public:
	int c;
public:
	void show()
	{
	    display();//allowed
		cout<<a<<b;
	}
};
class C:private B
{
	public:
	void show()
	{
	   // display(); not allowed
		//cout<< a<<b; not allowed
		cout<<c;
	}
};
int main()
{
	B bobj;
	bobj.show();
//	bobj.display(); not allowed
}
