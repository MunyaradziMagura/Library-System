#pragma once
#include "FinePricingStrategy.h"
class BoardgameFinePricingStrategy : public FinePricingStrategy {
public:
    BoardgameFinePricingStrategy(float initialFee, float additionalFee);
    ~BoardgameFinePricingStrategy();
    virtual float getTotal() override;

private:
    float _initialFee; 
    float _additionalFee; 
};

