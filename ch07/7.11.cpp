// C++ Primer
// 2016-10
// Create by Andy.Chen
// At SG.AAC

#include <iostream>
#include <string>
#include "Sales_data_c.h"

using namespace std;


int main(){
	Sales_data total;
	print(cout, total);
	printf("\n");
	
	Sales_data t2("My-time");
	print(cout, t2);
	printf("\n");
	
	Sales_data t3("My-time", 34, 86.34);
	print(cout,t3);
	printf("\n");
	
	Sales_data t4(cin);
	print(cout,t4);
	printf("\n");
	
	return 0;
}