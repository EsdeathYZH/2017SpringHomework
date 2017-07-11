#include<iostream>
using namespace std;

class Order{
public:
	Order();
	Order(const Order&order);
	Order(string orderid,string buyerid,string goodid,string _amount,string ifdone);
	string getBuyerId();
	string getOrderId();
	string getGoodId();
	string getIfDone();
	string getAmount();
	int getPaymentAmount();


	


private:
	string buyerId;
	string goodId;
	string orderId;
	string ifDone;
	string amount;

};