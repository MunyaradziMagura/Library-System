#pragma once
#include "FinePricingStrategy.h"
class OtherFinePricingStrategy : public FinePricingStrategy {
public: 
	OtherFinePricingStrategy(float flatFee);
	~OtherFinePricingStrategy();
	virtual float getTotal() override;

private: 
	float _flatFee;
};

