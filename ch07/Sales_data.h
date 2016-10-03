// Sales_data.h 
// Create by AndyChen
// Day: 29-09-2016


#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>

struct Sales_data;
std::istream &read(std::istream&, Sales_data&);

struct Sales_data{
	
	//constructor
	Sales_data() = default;
	Sales_data(const std::string &s): bookNo(s){}
	Sales_data(const std::string &s, unsigned n, double p):
				bookNo(s), units_sold(n), revenue(p*n){}
	Sales_data(std::istream &is){
		read(is,*this);
	}
	
	
	//old data.
	std::string bookNo;
	unsigned units_sold =0;
	double revenue = 0.0;
	
	//update define new function.
	std::string isbn() const{return bookNo;}
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
};

//nonmember function
Sales_data add(const Sales_data &lhs, const Sales_data &rhs){
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

std::ostream &print(std::ostream &os, const Sales_data &item){
	os<< item.isbn() <<" " << item.units_sold<< " "<< item.revenue;
}

std::istream &read(std::istream &is, Sales_data &item){
	double price =0;
	is >> item.bookNo >> item.units_sold>> price;
	item.revenue = price * item.units_sold;
	return is;
}



//member function
Sales_data& Sales_data::combine(const Sales_data &rhs){
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

//constructor
//Sales_data::Sales_data(std::istream &is){
//	read(is,*this);
//}

#endif