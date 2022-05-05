#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


class Queue { 
	int size; 
	int* queue; 
	
	public:
	Queue() {
		size = 0;
		queue = new int[100];
		cout << "Queue created, size: " << size << endl;
	}
	void remove() { 
		if (size == 0) { 
			cout << "Queue is empty"<<endl; 
			return; 
		} 
		else { 
			for (int i = 0; i < size - 1; i++) { 
				queue[i] = queue[i + 1]; 
			} 
			size--; 
		} 
	} 
	void print() { 
		if (size == 0) { 
			cout << "Queue is empty"<<endl; 
			return; 
		} 
		for (int i = 0; i < size; i++) { 
			cout<<queue[i]<<" <- ";
		} 
		cout <<endl;
	}
	//your code goes here
	void add(int n){
		if (size == 0) { 
			queue[size] = n; size++;
			return; 
		} 
		else { 
			queue[size] = n; size++;
			return;
			} 
	}
}; 

int main() { 
	Queue q; 
	q.add(40); q.add(2); q.add(8); q.add(1); 
	q.print();
	q.remove(); 
	q.add(128); 
	q.print(); 
	q.remove(); 
	q.remove(); 
	q.print(); 

	return 0; 
} 