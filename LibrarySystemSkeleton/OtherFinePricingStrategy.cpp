#include "OtherFinePricingStrategy.h"

OtherFinePricingStrategy::OtherFinePricingStrategy(float flatFee): _flatFee(flatFee) {
}; 

OtherFinePricingStrategy::~OtherFinePricingStrategy() {
}

float OtherFinePricingStrategy::getTotal() {
	return 0.0f;
};
