#include "BuyerClass.h"
Buyer::Buyer(){}
Buyer::Buyer(const Buyer&buyer)
{
	buyerName=buyer.buyerName;
	buyerId=buyer.buyerId;
	
}
Buyer::Buyer(string buyerid,string buyername)
{
	buyerName=buyername;
	buyerId=buyerid;

}
string Buyer::getBuyerName()
{
	return buyerName;
}

string Buyer::getBuyerId()
{
	return buyerId;
}

