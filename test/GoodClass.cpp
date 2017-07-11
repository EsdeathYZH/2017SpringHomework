#include "GoodClass.h"
Good::Good(){}
Good::Good(const Good&good)
{
	goodName=good.goodName;
	goodId=good.goodId;
	price=good.price;
}
Good::Good(string goodid,string goodname,string price1)
{
	goodName=goodname;
	goodId=goodid;
	price=price1;
	
}
string Good::getGoodName()
{
	return goodName;
}
string Good::getGoodId()
{
	return goodId;
}
string Good::getPrice()
{
	return price;
}
