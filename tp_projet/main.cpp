#include<iostream>
#include"Cvertex.hpp"
#include"Cvector.hpp"
using namespace std;

int main(){
  Cvertex Cver3;
  Cvertex Cver1(0,-1,1),Cver2(1,3,2);
  cout<<"Bienvenue au lancer de rayon"<<endl;
  Cver3.x=Cver1.x + Cver2.x;
  Cver3.y=Cver1.y + Cver2.y;
  Cver3.z=Cver1.z + Cver2.z;
 
  cout<<"le resultat:"<<Cver3.x<<endl;
  cout<<"le resultat:"<<Cver3.y<<endl;
  cout<<"le resultat:"<<Cver3.z<<endl;

  

  return 0;

}
  
