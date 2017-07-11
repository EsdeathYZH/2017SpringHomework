#include<iostream>
using namespace std;

class Buyer{
public:
	Buyer();
	Buyer(const Buyer&buyer);
	Buyer(string buyerid,string buyername);
	string getBuyerId();
	string getBuyerName();
	


	


private:
	string buyerId;
	string buyerName;

};