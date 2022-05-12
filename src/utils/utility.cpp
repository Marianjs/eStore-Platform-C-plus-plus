#include "utility.h"

bool Utility::compareNonFoodProducts(Product *nf1,Product *nf2)
{
	NonFoodProduct *x = dynamic_cast<NonFoodProduct*> (nf1);
	NonFoodProduct *y = dynamic_cast<NonFoodProduct*> (nf2);
	if(x!=nullptr && y!=nullptr)
	{
	if(x->getPrice()<y->getPrice())
		return true;
	if(x->getPrice()>y->getPrice())
		return false;
	}
	
	return false;
}

bool Utility::compareFoodProducts(Product *f1, Product *f2)
{
	FoodProduct *x = dynamic_cast<FoodProduct*> (f1);
	FoodProduct *y = dynamic_cast<FoodProduct*> (f2);
	if(f1->getName()<f2->getName())
	return true;
	if(f1->getName()>f2->getName())
	return false;
	
	if(x!=nullptr && y!=nullptr)
	{
	if(x->getCountryOfOrigin()<y->getCountryOfOrigin())
		return true;
	if(x->getCountryOfOrigin()>y->getCountryOfOrigin())
		return false;

	if(x->getLeiPerKg()<y->getLeiPerKg())
		return true;
	if(x->getLeiPerKg()>y->getLeiPerKg())
		return false;
	}
	
	return false;
}

bool Utility::compareID(User *u1,User* u2)
{
	if(u1->getUserID()<u2->getUserID())
	return true;
	if(u1->getUserID()>u2->getUserID())
	return false;
	
	return false;
}
