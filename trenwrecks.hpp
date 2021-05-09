#ifndef TRENWRECKS_H_INCLUDED
#define TRENWRECKS_H_INCLUDED

#include <iostream>
#include <memory>
#include <vector>
#include <ctime>

using namespace std;

class station{
private:
	vector<size_t> lineTrain = {0,1,2,3,4,5,6,7,8,9};
	size_t velocity = 0;
	size_t velocity_recomend = 40;
  size_t velocity_minima = 30;
	size_t velocity_maxima = 150;
public:
	void setvelocity(size_t velocityAddPlus);
	void setlineTrain(size_t line[]);
	const int getvelocity(){ return velocity; };
};

class train : public station {
private:
	size_t velocityIncrement = 1;
public:
	train();
	train(size_t linha_inicial, size_t linha_final);
	~train() { velocityIncrement = 1; };
};

class interface : public train{
public:
	void print();
};

#endif
