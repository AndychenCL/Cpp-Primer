#include <iostream>
#include <vector>

using namespace std;

typedef int intrf(int,int);

intrf sum;
intrf damp;
intrf mines;
intrf divice;

int main(int avg, char **avgs){
	
	int a,b;
	
	cout<<"Please enter two integer number: ";
	cin>> a >> b;
	
	cout<<"Sum of input: "<<sum(a,b)<<endl;
	cout<<"First number X Secand number: "<<damp(a,b)<<endl;
	cout<<"First number - Secand number: "<<mines(a,b)<<endl;
	cout<<"First number / Secand number: "<<divice(a,b)<<endl;
	
	cout<<"Use vector difine and despay."<<endl;
	
	vector<intrf*> callintf;
	callintf.push_back(sum);
	callintf.push_back(damp);
	callintf.push_back(mines);
	callintf.push_back(divice);
	
	for(auto &cif: callintf){
		cout<<cif(a,b)<<endl;
	}
	
	
	return 0;
}

sum(int x, int y){
	return x+y;
}

damp(int x, int y){
	return x*y;
}

mines(int x, int y){
	return x-y;
}
divice(int x, int y){
	return x/y;
}