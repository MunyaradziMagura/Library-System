#include "BoardgameFinePricingStrategy.h"

BoardgameFinePricingStrategy::BoardgameFinePricingStrategy(float initialFee, float additionalFee): _initialFee(initialFee), _additionalFee(additionalFee) {
};

BoardgameFinePricingStrategy::~BoardgameFinePricingStrategy() {
};

float BoardgameFinePricingStrategy::getTotal() {
	return 0.0f;
};
