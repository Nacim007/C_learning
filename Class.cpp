#include <iostream>
#include "MyClass.h"
#include <cstdlib>
#include <ctime>
using namespace std;


// class Queue { 
// 	int size; 
// 	int* queue; 
	
// 	public:
// 	Queue() {
// 		size = 0;
// 		queue = new int[100];
// 		cout << "Queue created, size: " << size << endl;
// 	}
// 	void remove() { 
// 		if (size == 0) { 
// 			cout << "Queue is empty"<<endl; 
// 			return; 
// 		} 
// 		else { 
// 			for (int i = 0; i < size - 1; i++) { 
// 				queue[i] = queue[i + 1]; 
// 			} 
// 			size--; 
// 		} 
// 	} 
// 	void print() { 
// 		if (size == 0) { 
// 			cout << "Queue is empty"<<endl; 
// 			return; 
// 		} 
// 		for (int i = 0; i < size; i++) { 
// 			cout<<queue[i]<<" <- ";
// 		} 
// 		cout <<endl;
// 	}
// 	//your code goes here
// 	void add(int n){
// 		if (size == 0) { 
// 			queue[size] = n; size++;
// 			return; 
// 		} 
// 		else { 
// 			queue[size] = n; size++;
// 			return;
// 			} 
// 	}
// }; 

// int main() { 
// 	Queue q; 
// 	q.add(40); q.add(2); q.add(8); q.add(1); 
// 	q.print();
// 	q.remove(); 
// 	q.add(128); 
// 	q.print(); 
// 	q.remove(); 
// 	q.remove(); 
// 	q.print(); 

// 	return 0; 
// } 

// MyClass::MyClass(){
// }

// void MyClass::myPrint(){
//     cout << "Hello Nacim" << endl;
// }

// void MyClass::myAge(int age){
// 	cout << "My age is: " << age << endl;
// 	// cout << "My age is: 23 years old" << endl;
// }

// void MyClass2::myPrint() const{
// 	cout << "Hello Nacim" << endl;
// }

MyClass3::MyClass3(int a, int b)
	: regVar(a), constVar(b) {
		cout << "MyClass3 created" << endl;
		cout << "regVar: " << regVar << endl;
		cout << "constVar: " << constVar << endl;
}




int main(){
    // MyClass myObj;
    // myObj.myPrint();
	// myObj.myAge(23);

	// const MyClass2 obj;
	// obj.myPrint();

	// MyClass3 obj(40,33);

	// Birthday bd(10,16,1998);
	// Person person("Nacim", bd);
	// person.printInfo();

	// FriendClass obj;
	// someFunc(obj);

	ClassPointer obj(16);
	obj.printInfo();
}