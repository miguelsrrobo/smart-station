#include "trenwrecks.hpp"

void station::setvelocity(size_t velocityAddPlus) {
	if(velocityAddPlus < velocity_minima) {
		velocity = velocity_recomend;
	}
	else if(velocityAddPlus > velocity_maxima) {
		velocity = velocity_recomend;
	}
	else {
		velocity = velocity;
	}
}
void station::setlineTrain (size_t line[]) {

}

train::train() {
	while (velocityIncrement < 200) {
		this->setvelocity(velocityIncrement);
		velocityIncrement++;
	}
}

train::train (size_t linha_inicial, size_t linha_final) {
	rand() % (linha_final - linha_inicial + 1) + linha_inicial;
}

void interface::print () {
	cout << this->getvelocity() << endl;
}
