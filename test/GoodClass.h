#include<iostream>
using namespace std;

class Good{
public:
	Good();
	Good(const Good&good);
	Good(string goodid,string goodname,string price1);
	string getGoodId();
	string getGoodName();
	string getPrice();

private:
	string goodName;
	string goodId;
	string price;

};