#include "Excitateur.h"

Excitateur:: Excitateur () {
	double r = RNG.normal(0,1);
	a = 0.02;
	b = .2; 
	c = -65 + 15 * r * r;  
	d = 2 + 6*(1- r*r); 
	w = 5;
}

