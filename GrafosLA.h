#ifndef _GRAFOSLA_
#define _GRAFOSLA_
#include "Lista.h"


typedef struct vertice {
  int v;    //Vertice
  struct no* prox;
} No;

typedef struct grafoLA {
  int n;      // Número de nós 
  Lista *L;
} GrafoLA;



#endif