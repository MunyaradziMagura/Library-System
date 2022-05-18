#pragma once
#include "FinePricingStrategy.h"
class BookFinePricingStrategy : public FinePricingStrategy {
public:
	BookFinePricingStrategy();
	~BookFinePricingStrategy();
	virtual float getTotal() override;

};

