#include<iostream>
#include<string>
using namespace std;

int main(){
	int N;
	cout << "Enter the number of student: ";
	cin >> N;
	
	string name[N];
	int age[N];
	
	// Get INPUT
	int i=0;
	while (i<N) {
		cout << "Name of student = ";
		cin >> name[i];
		cout << "Age of student = ";	
		cin >> age[i];
		i++;
	}
	
	// Search
	int key;
	cout << "--------------------------------------\n";
	cout << "Enter an age to search: ";
	cin >> key;
	cout << "--------------------------------------\n";
	int k=0;
	while (k<N) {
		if (age[k] == key) 
			cout << name[k] << " " << age[k] << "\n";
			
		k++;
		 
		
	}

	
	cout << "--------------------------------------\n";
	
	return 0;
}
