#include "ShoppingCart.h"

ShoppingCart::ShoppingCart()
{
	this->payMethod = "-";
}

ShoppingCart::ShoppingCart(const string &payMethod)
{
	this->payMethod=payMethod;
}

string &ShoppingCart::getPayMethod()
{
	return payMethod;
}

void ShoppingCart::setPayMethod(const string &payMethod)
{
	this->payMethod=payMethod;
}

void ShoppingCart::addProduct(int id, int quantity)
{
	shoppingCart.insert(pair<int,int>(id,quantity));
}

void ShoppingCart::raiseQuantity(int id, int quantity)
{
	map<int,int>::iterator it;
	it=shoppingCart.find(id);
	it->second=it->second+quantity;
}

void ShoppingCart::lowerQuantity(int id, int quantity)
{
	map<int,int>::iterator it;
	it=shoppingCart.find(id);
	it->second=it->second-quantity;
}

int ShoppingCart::getQuantity(int productID)
{
	if(shoppingCart.find(productID)!=shoppingCart.end())
	return shoppingCart.find(productID)->second;
	else
	return -1;
}

void ShoppingCart::deleteProduct(int productID)
{
	shoppingCart.erase(productID);
}

map<int, int> &ShoppingCart::getShoppingCart()
{
	return shoppingCart;
}

void ShoppingCart::displayShoppingCart()
{
	throw("undefined");
}

json ShoppingCart::toJSON()
{
  return json(*this);
}
