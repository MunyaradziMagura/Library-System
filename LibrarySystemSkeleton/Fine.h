#pragma once
#include "FinePricingStrategy.h"

class Fine
{
public:
	Fine(FinePricingStrategy* strategy = nullptr);
	~Fine();
	void setStrategy(FinePricingStrategy* strategy);
	void getTotal();

private: 
	FinePricingStrategy* _strategy;

};

