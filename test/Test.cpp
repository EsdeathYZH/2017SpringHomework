#include <iostream>   
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include<vector>
#include"OrderClass.h"
#include"BuyerClass.h"
#include"GoodClass.h"

using namespace std;
int main()
{
	int sumOrder(ifstream,ifstream,ifstream,ifstream);
	int orderNum=0;
	ifstream openOrder1("D:\\order.0.0",ios::in),openOrder2("D:\\order.0.3",ios::in),openOrder3("D:\\order.1.1",ios::in),openOrder4("D:\\order.2.2",ios::in);
	ifstream openBuyer1("D:\\buyer.0.0",ios::in),openBuyer2("D:\\buyer.1.1",ios::in);
	ifstream openGood1("D:\\good.0.0",ios::in),openGood2("D:\\good.1.1",ios::in),openGood3("D:\\good.2.2",ios::in);

	map<string,Order> orderMap;
	map<string,vector<string>>buyer_orderMap;
	map<string,vector<string>>good_orderMap;
	char orderbuffer[1024];
	while(openOrder1.getline(orderbuffer,1024))
	{
		string orderId,buyerId,goodId,ifDone,amount;
	    string strOrder[9];
	    string ifoOrder=orderbuffer;
	    istringstream str(ifoOrder);	
	    str>>strOrder[0]>>strOrder[1]>>strOrder[2]>>strOrder[3]>>strOrder[4]>>strOrder[5]>>strOrder[6]>>strOrder[7]>>strOrder[8];
	    orderId=strOrder[0].substr(8),buyerId=strOrder[2].substr(8);
	    for each(string i in strOrder)
	    {
			if(i.substr(0,6)=="goodid")goodId=i.substr(7);
		    if(i.substr(0,6)=="amount")amount=i.substr(7);
		    if(i.substr(0,4)=="done")ifDone=i.substr(5);
	    }
		Order order(orderId,buyerId,goodId,amount,ifDone);
		orderMap[orderId]=order;
		buyer_orderMap[buyerId].push_back(orderId);
		good_orderMap[goodId].push_back(orderId);
		orderNum++;
	}
	while(openOrder2.getline(orderbuffer,1024))
	{
		string orderId,buyerId,goodId,ifDone,amount;
	    string strOrder[9];
	    string ifoOrder=orderbuffer;
	    istringstream str(ifoOrder);	
	    str>>strOrder[0]>>strOrder[1]>>strOrder[2]>>strOrder[3]>>strOrder[4]>>strOrder[5]>>strOrder[6]>>strOrder[7]>>strOrder[8];
	    orderId=strOrder[0].substr(8),buyerId=strOrder[2].substr(8);
	    for each(string i in strOrder)
	    {
			if(i.substr(0,6)=="goodid")goodId=i.substr(7);
		    if(i.substr(0,6)=="amount")amount=i.substr(7);
		    if(i.substr(0,4)=="done")ifDone=i.substr(5);
	    }
		Order order(orderId,buyerId,goodId,amount,ifDone);
		orderMap[orderId]=order;
		buyer_orderMap[buyerId].push_back(orderId);
		good_orderMap[goodId].push_back(orderId);
		orderNum++;
	}
	while(openOrder3.getline(orderbuffer,1024))
	{
		string orderId,buyerId,goodId,ifDone,amount;
	    string strOrder[9];
	    string ifoOrder=orderbuffer;
	    istringstream str(ifoOrder);	
	    str>>strOrder[0]>>strOrder[1]>>strOrder[2]>>strOrder[3]>>strOrder[4]>>strOrder[5]>>strOrder[6]>>strOrder[7]>>strOrder[8];
	    orderId=strOrder[0].substr(8),buyerId=strOrder[2].substr(8);
	    for each(string i in strOrder)
	    {
			if(i.substr(0,6)=="goodid")goodId=i.substr(7);
		    if(i.substr(0,6)=="amount")amount=i.substr(7);
		    if(i.substr(0,4)=="done")ifDone=i.substr(5);
	    }
		Order order(orderId,buyerId,goodId,amount,ifDone);
		orderMap[orderId]=order;
		buyer_orderMap[buyerId].push_back(orderId);
		good_orderMap[goodId].push_back(orderId);
		orderNum++;
	}
	while(openOrder4.getline(orderbuffer,1024))
	{
		string orderId,buyerId,goodId,ifDone,amount;
	    string strOrder[9];
	    string ifoOrder=orderbuffer;
	    istringstream str(ifoOrder);	
	    str>>strOrder[0]>>strOrder[1]>>strOrder[2]>>strOrder[3]>>strOrder[4]>>strOrder[5]>>strOrder[6]>>strOrder[7]>>strOrder[8];
	    orderId=strOrder[0].substr(8),buyerId=strOrder[2].substr(8);
	    for each(string i in strOrder)
	    {
			if(i.substr(0,6)=="goodid")goodId=i.substr(7);
		    if(i.substr(0,6)=="amount")amount=i.substr(7);
		    if(i.substr(0,4)=="done")ifDone=i.substr(5);
	    }
		Order order(orderId,buyerId,goodId,amount,ifDone);
		orderMap[orderId]=order;
		buyer_orderMap[buyerId].push_back(orderId);
		good_orderMap[goodId].push_back(orderId);
		orderNum++;
	}

	map<string,Buyer>buyerMap;
	char buyerbuffer[512];
	while(openBuyer1.getline(buyerbuffer,512))
	{
		string buyerId,buyerName;
	    string strOrder[9];
	    string ifoOrder=buyerbuffer;
	    istringstream str(ifoOrder);	
	    str>>strOrder[0]>>strOrder[1]>>strOrder[2]>>strOrder[3]>>strOrder[4]>>strOrder[5]>>strOrder[6]>>strOrder[7]>>strOrder[8];
	    buyerId=strOrder[0].substr(8);
	    for each(string i in strOrder)
	    {
		    if(i.substr(0,9)=="buyername")buyerName=i.substr(10);
	    }
		Buyer buyer(buyerId,buyerName);
		buyerMap[buyerId]=buyer;
	}
	while(openBuyer2.getline(buyerbuffer,512))
	{
		string buyerId,buyerName;
	    string strOrder[9];
	    string ifoOrder=buyerbuffer;
	    istringstream str(ifoOrder);	
	    str>>strOrder[0]>>strOrder[1]>>strOrder[2]>>strOrder[3]>>strOrder[4]>>strOrder[5]>>strOrder[6]>>strOrder[7]>>strOrder[8];
	    buyerId=strOrder[0].substr(8);
	    for each(string i in strOrder)
	    {
		    if(i.substr(0,9)=="buyername")buyerName=i.substr(10);
	    }
		Buyer buyer(buyerId,buyerName);
		buyerMap[buyerId]=buyer;
	}

	map<string,Good>goodMap;
	char goodbuffer[4096];	
	while(openGood1.getline(goodbuffer,4096))
	{
		string goodId,goodName,price;
	    string strOrder[9];
	    string ifoOrder=goodbuffer;
	    istringstream str(ifoOrder);	
	    str>>strOrder[0]>>strOrder[1]>>strOrder[2]>>strOrder[3]>>strOrder[4]>>strOrder[5]>>strOrder[6]>>strOrder[7]>>strOrder[8];
	    goodId=strOrder[0].substr(7);
	    for each(string i in strOrder)
	    {
		    if(i.substr(0,9)=="good_name")goodName=i.substr(10);
			if(i.substr(0,5)=="price")price=i.substr(6);
	    }
		Good good(goodId,goodName,price);
		goodMap[goodId]=good;
	}
	while(openGood2.getline(goodbuffer,4096))
	{
		string goodId,goodName,price;
	    string strOrder[9];
	    string ifoOrder=goodbuffer;
	    istringstream str(ifoOrder);	
	    str>>strOrder[0]>>strOrder[1]>>strOrder[2]>>strOrder[3]>>strOrder[4]>>strOrder[5]>>strOrder[6]>>strOrder[7]>>strOrder[8];
	    goodId=strOrder[0].substr(7);
	    for each(string i in strOrder)
	    {
		    if(i.substr(0,9)=="good_name")goodName=i.substr(10);
			if(i.substr(0,5)=="price")price=i.substr(6);
	    }
		Good good(goodId,goodName,price);
		goodMap[goodId]=good;
	}
	while(openGood3.getline(goodbuffer,4096))
	{
		string goodId,goodName,price;
	    string strOrder[9];
	    string ifoOrder=goodbuffer;
	    istringstream str(ifoOrder);	
	    str>>strOrder[0]>>strOrder[1]>>strOrder[2]>>strOrder[3]>>strOrder[4]>>strOrder[5]>>strOrder[6]>>strOrder[7]>>strOrder[8];
	    goodId=strOrder[0].substr(7);
	    for each(string i in strOrder)
	    {
		    if(i.substr(0,9)=="good_name")goodName=i.substr(10);
			if(i.substr(0,5)=="price")price=i.substr(6);
	    }
		Good good(goodId,goodName,price);
		goodMap[goodId]=good;
	}


	cout<<"The total number of the orders is "<<orderNum<<endl;
	openOrder1.close(),openOrder2.close(),openOrder3.close(),openOrder4.close();
	openGood1.close(),openGood2.close(),openGood3.close();
	openBuyer1.close(),openBuyer2.close();
	string str="yes";
	while(str=="yes")
	{
	cout<<"if you want to query an order,please input 1;"<<endl;
	cout<<"if you want to query a buyer,please input 2;"<<endl;
	cout<<"if you want to query a good,please input 3."<<endl;
	int i;
	cin>>i;
	switch(i)
	{
    case 1:
		{
		string orderId;
		cout<<"please input the orderid you want to find:";
		cin>>orderId;
		Order order=orderMap[orderId];
		string buyername,goodname,amount,price;
		buyername=buyerMap[order.getBuyerId()].getBuyerName();
		Good good=goodMap[order.getGoodId()];
		price=good.getPrice();
		goodname=good.getGoodName();
		float price1=atof(price.c_str());
		double payment=order.getPaymentAmount()*price1;
		amount=order.getAmount();
		cout<<"orderid:"<<orderId<<endl;
		cout<<"payment:"<<payment<<endl;
		cout<<"Amount:"<<amount<<endl;
		cout<<"buyername:"<<buyername<<endl;
		cout<<"goodname:"<<goodname<<endl;
		cout<<"price:"<<price<<endl;
		break;
	    }
    case 2:
		{
		string buyerId;
		cout<<"please input the buyerid you want to find:";
		cin>>buyerId;
		double payment=0.00;
		int ordernum=0;
	    Buyer buyer=buyerMap[buyerId];
		cout<<"buyerid:"<<buyer.getBuyerId()<<endl;
		cout<<"buyerName:"<<buyer.getBuyerName()<<endl;	
		double price=0.00;
		for each (string orderId in buyer_orderMap[buyerId])
		{
			price=atof(goodMap[orderMap[orderId].getGoodId()].getPrice().c_str());
		    payment+=orderMap[orderId].getPaymentAmount()*price;
			ordernum++;
		}
		cout<<"The total number of orders is "<<ordernum<<endl;
		cout<<"the total amount of payments is "<<payment<<endl; 		
		break;
	    }
    case 3:
		{
		string goodId;
		cout<<"please input the goodid you want to find:";
		cin>>goodId;
		int ordernum=0;
		int amount=0;
		cout<<"goodid:"<<goodId<<endl;
		cout<<"goodname:"<<goodMap[goodId].getGoodName()<<endl;	
		for each (string orderId in good_orderMap[goodId])
		{
		    amount+=orderMap[orderId].getPaymentAmount();
		    ordernum+=1;
		}
		cout<<"The total number of orders is "<<ordernum<<endl;
		cout<<"the total number of saled is "<<amount<<endl;
		break;
		}
	default:
		break;
	}
	cout<<"would you want to continue to query?(yes/no)"<<endl;
	cin>>str;
	}
	system("pause");
	return 0;  
}

