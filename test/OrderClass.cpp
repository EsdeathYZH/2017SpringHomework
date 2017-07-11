#include "OrderClass.h"
Order::Order(){}
Order::Order(const Order&order)
{
	orderId=order.orderId;
	buyerId=order.buyerId;
	goodId=order.goodId;
	amount=order.amount;
	ifDone=order.ifDone;
}
Order::Order(string orderid,string buyerid,string goodid,string _amount,string ifdone)
{
	orderId=orderid;
	buyerId=buyerid;
	goodId=goodid;
	amount=_amount;
	ifDone=ifdone;
}
string Order::getOrderId()
{
	return orderId;
}
string Order::getGoodId()
{
	return goodId;
}
string Order::getBuyerId()
{
	return buyerId;
}
string Order::getAmount()
{
	return amount;
}
string Order::getIfDone()
{
	return ifDone;
}
int Order::getPaymentAmount()
{
	if(strcmp(getIfDone().c_str(),"false")==0)
	{return 0;}
	int amount=atoi(Order::getAmount().c_str());
	return amount;

}