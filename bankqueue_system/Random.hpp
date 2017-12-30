//Random.hpp


#ifndef Random_hpp
#define Random_hpp
#include<cstdlib>
#include<cmath>

class Random{

public:
	static double uniform(double max = 1){

		return((double)std::rand()/(RAND_MAX))*max;

	}



};

#endif
