#pragma once
#include "FinePricingStrategy.h"
class ToyFinePricingStrategy : public FinePricingStrategy {
public:
	ToyFinePricingStrategy(float initialFee, float additionalFee);
	~ToyFinePricingStrategy();

	virtual float getTotal() override;

private: 
	float _initialFee;
	float _additionalFee;

};

