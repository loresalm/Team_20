#include <iostream>
#include "tclap/CmdLine.h"

using namespace TCLAP;




int main(int argc, char **argv){
	
	CmdLine cmd("Neural Network");
	// revoir les valeures par defaut de chaque entree.
	ValueArg< int > number("n", "neurons", "Nombre de neurones a générer", false, 100, "int");
	cmd.add(number);
	ValueArg< double > proportion("p", "proportion", "entrez la proportion de neurones excitateurs", false, 0.5, "double");
	cmd.add(proportion);
	ValueArg< int > time("t", "time", "entrez le temps de simulation en ms", false, 100, "int");
	cmd.add(time);
	ValueArg< double > connectivity("c", "connectivity", "entrez la connectivite moyenne de chaque neurone", false, 0.5, "double");
	cmd.add(connectivity);
	// ajouter un multiarg avec les proportions de chaque neurone RB IS etc.

	cmd.parse(argc, argv);
	
	

	return 0;
}
