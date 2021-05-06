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
void station::setlineTrain(size_t line[]){

}

train::train() {
	while (velocityIncrement < 200) {
		this->setvelocity(velocityIncrement);
		print();
		velocityIncrement++;
	}
}

void interface::print() {
	cout << getvelocity() << endl;
}
