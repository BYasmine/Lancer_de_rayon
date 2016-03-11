#include<iostream>
#include"Cvertex.hpp"
using namespace std;

Cvertex::Cvertex(){x=0;y=0;z=0;}//constructeur par defaut
Cvertex::Cvertex(const double & a,const double &b,const double &c):
  x(a),y(b),z(c){//onstructeur par reference 
}
Cvertex::Cvertex(const Cvertex & Cver){ //constructeur par copie
  x = Cver.x;
  y = Cver.y;
  z = Cver.z;
}

Cvertex::~Cvertex(){}//destructeur vide
//faut inclure les operators demander



