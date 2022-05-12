#pragma once
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include "../Solution/Product/NonFoodProduct.h"
#include "../Solution/Product/FoodProduct.h"
#include "../Solution/User/User.h"

class Utility{

public:
	static bool compareNonFoodProducts(Product*, Product*);
	static bool compareFoodProducts(Product*,Product*);
	static bool compareID(User*,User*);
};
