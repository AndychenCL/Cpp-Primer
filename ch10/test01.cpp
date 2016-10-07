// Created by Andy Chen
// 2016/10/07
// At AAC

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main(int vat, char** vatc){
	
	vector<string> listt;
	string ti;
	// input
	while(cin >> ti){
		listt.push_back(ti);
	}
	
	sort(listt.begin(), listt.end());
	
	for(auto &op: listt) cout << op <<" ";
	cout << endl;
	
	
	auto end_unique = unique(listt.begin(), listt.end());
	
	for(auto &op: listt) cout << op <<" ";
	cout << endl;
	
	listt.erase(end_unique, listt.end());
	
	cout << endl;
	
	for(auto &op: listt) cout << op <<" ";
	cout << endl;
	
	return 0;
}