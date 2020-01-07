#include<iostream>
#include<string>
using namespace std;

string mixText(string s1, string s2) {
	
	string s="";
	if (s1.size() == s2.size()) {
		
		int i=0;
		while (i<s1.size()) {			
			s = s+ s1[i] + s2[i];
			i++;
		}
		
		return s;
	}
	else
		return "E";
	
	
}


int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
