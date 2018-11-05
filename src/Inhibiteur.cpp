#include "Inhibiteur.h"

Inhibiteur:: Inhibiteur () {
	double r = RNG.normal(0,1);
	a = 0.02 + 0,08 *r;
	b = .2 + 0.05*(1-r); 
	c = -65 ;  
	d = 2; 
	w = 2;
}

