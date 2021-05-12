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

train::train() {
	while(velocityIncrement < 200) {
		this->setvelocity(velocityIncrement);
		velocityIncrement++;
	}
}

//size_t randomTrainLine() {
	//return rand() % (getlinha_final() - getlinha_inicial() + 1) + getlinha_inicial();
//}

void interface::print() {
	cout << this->getvelocity() << endl;
}
