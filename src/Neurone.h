//! Neuron super-class 
/*!
 *  class responsible for the creation of a neural cell 
 */
class Neurone {

public:

/*!
 * initializes the neuron parameters ???
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
 * getter for the private attribute potentiel
 */
	double get_potentiel();
/*!
 * getter for the private attribute potentiel
 */
	double get_relaxation();
/*!
 * updates the neurone by assining calculating a new potential and a new relaxation 
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
