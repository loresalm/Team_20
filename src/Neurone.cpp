#include "Neurone.h"



double Neurone::calcul_potentiel(){
	double I(calcul_courant());
	return (v +=(0.04*v*v + 5*v +140-u + I));
}

double Neurone::calcul_relaxation(){
	return (u+= a*(b*v-u));
}

void Neurone::after_firing(){
	if(firing()){
	v = c;
	u = u + d;}
}	

bool Neurone:: firing(){
	if(v >30) {return true};
	
	return false;
}






	
