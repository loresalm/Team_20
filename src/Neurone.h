class Neurone {

public:
  Neurone ();
  double calcul_potentiel();
  double calcul_relaxation();
  double get_potentiel();
  double get_relaxation();
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
