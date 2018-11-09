//! Neuron super-class 
/*!
 *  class responsible for the creation of a neural cell 
 */
class Neurone {

public:

/*!
 * initializes the neuron by giving 
 */
	Neurone ();
/*!
 * calculates the membrane potential
 */ 
	double calcul_potentiel();
/*!
 * calculate the relaxation value of the neuron
 */
	double calcul_relaxation();
/*!
 * returns true if the neuron is firing namely when the potential is higher than a certain threshold
 */
	bool firing();
/*!
 * getter for the private attribute potentiel
 */
	double get_potentiel();
/*!
 * getter for the private attribute relaxation
 */
	double get_relaxation();
/*!
 * updates the relaxation (every ms) and the membrane potential (every 0.5 ms)
 * by claculating the differential equations for each parameter using Euler's method
 * if the neuron is firing, sets the parameters to specific values depedent of c and d. 
 */
	void update();

private:
	double a;
	double b;
	double c;
	double d; 
	bool state;
	double potentiel(-65);
	double relaxation; 

};
