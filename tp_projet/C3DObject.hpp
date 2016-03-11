#ifndef Cvector_hpp
#define Cvector_hpp

#include"Cvertex.hpp"
#include"Cvector.hpp"

class C3DObject {
  C3DObject();
public:
  Cvertex Uposition ;

  virtual double InIntersectedBy(CRay &)=0;
  virtual Cvector GetNormal(Cvertex &)=0;
  virtual Cvector GetTangeant(Cvertex &)=0;



  ~C3DObject();

};
#endif 
  
