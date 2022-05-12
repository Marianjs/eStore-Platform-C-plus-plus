#include "QuerySolver.h"

using namespace std;

/* NU MODIFICATI */
QuerySolver::QuerySolver() 
{
  server = Server::GetInstance();
}

/* NU MODIFICATI */
QuerySolver::~QuerySolver()
{
  if (server != nullptr) 
  {
    server = nullptr;
  }
}

list<Product*> QuerySolver::Query_3a()
{
  list<Product*> res;
  list<Product*>::iterator it;
  for(it=server->getProductsList().begin();it!=server->getProductsList().end();it++)
  {
  	if((*it)->getCategory()=="espressor" && (*it)->getProductType()=="redus")
  	{
  		res.push_back(*it);
	}
  }
  return res;
}

list<User*> QuerySolver::Query_3b()
{
  list<User*> res;
  list<User*>::iterator it;
  for(it=server->getUsersList().begin();it!=server->getUsersList().end();it++)
  {
  	if((*it)->getUserType()=="nonPremium" && (*it)->getTransportCost()<=11.5)
  	{
  		res.push_back(*it);
	}
  }
  return res;
}

list<Product*> QuerySolver::Query_3c()
{
	list<Product*> res;
	list<Product*>::iterator it;
	for(it=server->getProductsList().begin();it!=server->getProductsList().end();it++)
	{
		ResealedProduct *x = dynamic_cast<ResealedProduct*> (*it);
		if(x!=nullptr)	
		{
			if(x->getProductType()=="resigilat" && x->getReason()=="lipsa_accesorii")
			{
				res.push_back(x);
			}
		}
	}
	res.sort(Utility::compareNonFoodProducts);
	return res;
}

list<Product*> QuerySolver::Query_3d()
{
  	list<Product*> res;
	list<Product*>::iterator it;
	for(it=server->getProductsList().begin();it!=server->getProductsList().end();it++)
	{
		if((*it)->getProductType()=="alimentar")
		{
			res.push_back(*it);
		}
	}
	res.sort(Utility::compareFoodProducts);
	return res;
}

list<User*> QuerySolver::Query_3e()
{
  list<User*> res;
  list<User*>::iterator it;
  vector<string> v;
  vector<string>::iterator it1;
  map<string,int> m;
  int max=0;
  string most_frequent_county;
  for(it=server->getUsersList().begin();it!=server->getUsersList().end();it++)
  {
  	v.push_back((*it)->getBillingData().getCounty());
  }
  for(it1=v.begin();it1!=v.end();it1++)
  {
  	m[*it1]++;
  	if(m[*it1]>max)
  	{
  		max=m[*it1];
  		most_frequent_county=*it1;
  	}
  }
  for(it=server->getUsersList().begin();it!=server->getUsersList().end();it++)
  {
  	if(((*it)->getBillingData().getCounty()==most_frequent_county && (*it)->getBillingData().getBlock()=="-" && (*it)->getBillingData().getApartment()==0 && (*it)->getDeliveryData().getBlock()=="-" && (*it)->getDeliveryData().getApartment()==0))
	{
		res.push_back(*it);
	}
  }
  res.sort(Utility::compareID);
  return res;
}

list<User*> QuerySolver::Query_3f()
{
	list<User*> res;
	list<User*>::iterator it1;
	list<Product*>::iterator it3;
	map<int,int>::iterator it2;
	for(it1=server->getUsersList().begin();it1!=server->getUsersList().end();it1++)
	{
		PremiumUser *x = dynamic_cast<PremiumUser*> (*it1);
		if(x!=nullptr)
		{
			for(it2=x->getDiscounts().begin();it2!=x->getDiscounts().end();it2++)
			{
				for(it3=server->getProductsList().begin();it3!=server->getProductsList().end();it3++)
				{
					if((*it3)->getId()==it2->first)
					{
						if((*it3)->getCategory()=="telefon" || (*it3)->getCategory()=="imprimanta")
						{
							res.unique();
							res.push_back(x);
						}
					}
				}
			}
		}
	}
	return res;
}
