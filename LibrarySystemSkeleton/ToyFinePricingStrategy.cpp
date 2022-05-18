#include "ToyFinePricingStrategy.h"

ToyFinePricingStrategy::ToyFinePricingStrategy(float initialFee, float additionalFee) : _initialFee(initialFee), _additionalFee(additionalFee) { 
};

ToyFinePricingStrategy::~ToyFinePricingStrategy() {
};

float ToyFinePricingStrategy::getTotal() {
    return 0.0f;
};
