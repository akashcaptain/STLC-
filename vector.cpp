#include <iostream>
#include <vector>
#include <utility>

using namespace std;

void vectorshow(vector<int> &v){
	for(int i=0; i < v.size(); ++i){
		cout << " " << v[i] << " " ;
	}
}
int main(){
	int num;
	vector<int> v;
	vector<int> v1(10,1);
	char ch = 'y';
	while(ch == 'y'){
	cout << "Enter Data in vector = " << endl;	
	cin >> num;
	v.push_back(num);
	cout << "Do you want to continue ?"<< endl;
	
	cin >> ch;
	
	}
	
//	vectorshow(v1);
/*	v.push_back(1);
	v.push_back(12);
	v.push_back(113);
	v.push_back(190);
	v.pop_back(); */
//	vectorshow(v); // call by value o(n)
//	vectorshow(v); // call by referance o(1)
	// use iterator for access vector
	vector<int> :: iterator i = v.begin();
	while(i != v.end()){
		cout << " " << *i << endl;i++;
	}
	return 0;
}
