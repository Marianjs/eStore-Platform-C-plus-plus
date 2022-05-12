#include "LRUCache.h"
#include <algorithm>

using namespace std;

LRUCache::LRUCache(int capacity)
{
	this->capacity=capacity;
}

vector<int> LRUCache::processRequests(vector<int> requestsNo)
{
	vector<int> res;
	unsigned int i=0;
	while(i<=requestsNo.size()-1)
	{
		if(find(requestsNo.begin(),requestsNo.end(),requestsNo.at(i))==requestsNo.end())
		{
			res.insert(res.begin(),requestsNo.at(i));
		}
		else
		{
			for(unsigned int j=0;j<res.size();j++)
			{
				for(unsigned int k=0;k<res.size();k++)
				{
					if(res[j]==res[k] && j!=k)
					{
						res.erase(res.begin()+k);
						k--;
					}
				}
			}
			res.insert(res.begin(),requestsNo.at(i));
		}
		i++;
	}
	res.resize(capacity);
	return res;
}

int LRUCache::getCapacity()
{
	return capacity;
}

int LRUCache::getSize()
{
	return size;
}

vector<int> LRUCache::getLRU()
{
	return lru;
}

int LRUCache::getLRUCapacity()
{
	return lru.capacity();
}

void LRUCache::setCapacity(int capacity)
{
	this->capacity=capacity;
}

void LRUCache::setLRU(vector<int> aux)
{
	lru=aux;
}
