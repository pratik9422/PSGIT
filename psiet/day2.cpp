//to find greatest element in an array.
/*#include<iostream>
using namespace std;
int main(){
	int a[5];
	cout<<"enter 5 numbers \n";
	for(int i=0;i<5;i++){
		
		cin>>a[i];
	}
	cout<<"the elements of the array are \n ";
	for(int i=0;i<5;i++){
		cout<<a[i]<<" "<<endl;
	}


	int max=a[0];
	for (int i=1;i<5;i++){
		if(max<a[i])
			max=a[i];
			
		}
			cout<<"max number is: "<<max<<endl;		
	
}*/


//calculate avg of elements of all array using pointer.
//#include<iostream>
//using namespace std; 
//int main(){
//	int b[5];
//	cout<<" give the inputs: "<<endl;
//	for(int i=0;i<5;i++){
//		cin>>b[i];
//	}
//	int addition=0;
//	
//	for(int i=0;i<5;i++){
//		addition+=*(b + i);
//	}
//	float avg=(float)addition/5;
//	cout<<"the avg of five numbers is "<<avg;
//	
//}
//#include<iostream>
//using namespace std;
//int main(){
//	int a[]={1,2,3,4,5};
//	int b[5];
//	int *c=a;
//	int *d=b;
//	cout<<"the elements of a: "<<endl;
//	for(int i=0;i<5;i++){
//		cout<<*(c+i)<<" "<<endl;
//		
//	}
//	cout<<"the elements of b: "<<endl;
//	for(int i=0;i<5;i++){
//		*(d+i)=*(c+i);
//		cout<<*(d+i)<<" "<<endl;
//	}
//	
//}
//addition of 2 matrix
//#include<iostream>
//using namespace std;
//int main(){
//
//int mat1[2][2]={1,2,6,8};
//int mat2[2][2]={3,4,10,12};
//int mat3[2][2];
//cout<<"the elements in mat1 are "<<endl;
//
//for(int i=0;i<2;i++){
//	for(int j=0;j<2;j++){
//		cout<<mat1[i][j]<<" ";
//	}
//	cout<<"\n";
//}
//
//cout<<"\n the elements in mat2 are "<<endl;
//for(int i=0;i<2;i++){
//	for(int j=0;j<2;j++){
//		cout<<mat2[i][j]<<" ";
//	}
//	cout<<"\n";
//}
//cout<<"\n the elements in mat3 are "<<endl;
//for(int i=0;i<2;i++){
//	for(int j=0;j<2;j++){
//		mat3[i][j]=mat1[i][j]+mat2[i][j];
//		cout<<mat3[i][j]<<" ";
//	}
//	cout<<"\n";
//}
//
//
//
//
//}
//#include<iostream>
//using namespace std;
//int main(){
//int mat1[2][2]={1,2,6,8};
//cout<<"the elements in mat1 are \n";
//for(int i=0;i<2;i++){
//	for(int j=0;j<2;j++){
//		cout<<mat1[i][j]<<" ";
//	}
//	cout<<"\n";
//}
//cout<<"the elements in mat1 are \n";
//for(int i=0;i<2;i++){
//	for(int j=0;j<2;j++){
//		cout<<mat1[j][i]<<" ";
//	}
//	cout<<"\n";
//}
//}
//square of all elements of 2d array
/*#include<iostream>
using namespace std;
int main(){
	int mat1[2][2];
	cout<<"Enter the elements \n:";
	for(int i=0;i<2;i++){
		
		for(int j=0;j<2;j++){
			
			cin>>mat1[i][j];
		}
		cout<<"\n";
	}
	cout<<"The elements of the matrix are :"<<endl;
		for(int i=0;i<2;i++){
		
			for(int j=0;j<2;j++){
			
			cout<<mat1[i][j]<<" ";
		}
		cout<<"\n";
	}
		cout<<"The square of the matrix are :"<<endl;
		for(int i=0;i<2;i++){
		
			for(int j=0;j<2;j++){
			mat1[i][j]=mat1[i][j]*mat1[i][j];
			cout<<mat1[i][j]<<" ";
			
		}
		cout<<"\n";
	}
	
	
	
	
}*/
//store details of 10 books in an array
/*#include<iostream>
using namespace std;
class Book{
	char name[30];
	int pages;
	public:
	void getdata();
	void putdata();	
};
void Book::getdata(){
	cout<<"Enter Book Name :";
	cin>>name;
	cout<<"No of pages: ";
	cin>>pages;
	
	
}
void Book::putdata()
{
	cout<<"Book Name is: ";
	cout<<this->name<<" "<<"\n";
	cout<<"No of pages are: ";
	cout<<this->pages<<" "<<"\n";
	
	
}

int main(){
	Book b1[10];
	for(int i=0;i<10;i++){
		cout<<"Book"<<i+1<<endl;
			b1[i].getdata();
	}
	for(int i=0;i<10;i++){
		cout<<"pages"<<i+1<<endl;
			b1[i].putdata();
	}		
}*/














