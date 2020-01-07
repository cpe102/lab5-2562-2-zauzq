#include<iostream>
#include<string>
using namespace std;

string mixText(string s1,string s2){
	int L1 = s1.size();
	int L2 = s2.size();
	string s ="";
	if(L1 != L2){
		cout << "E";
	}else{
		int i = 0;
		while(i < L1){
			s = s + s1[i] + s2[i];
			i++; 
		}
		return s;
	}
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
