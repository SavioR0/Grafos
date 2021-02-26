#ifndef _GRAFOS_
#define _GRAFOS_
#include "Lista.h"
#include <stdlib.h>



//LISTA DE ADIJACÊNCIA
typedef struct grafoLA {
  int V;      // Número de vétices 
  Lista *L;    //Lista de adjacencia
}*GrafoLA;

//MATRIZ DE INCIDÊNCIA
typedef struct grafoMI{
   int V;
   int A;
   int **mat;
}*GrafoMI;

//MATRIZ DE ADJACÊNCIA
typedef struct grafoMA{ 
   int V;      //Vertices
   int nV;      //Número de vertices
   int A;      //Número de arestas que o grafo possui;
   int **mat; 
}*GrafoMA;




GrafoMA criarGrafo(){
   return NULL;
}

/*
//Cria Matriz vazia
GrafoMA MAinit(int tam, int *valores) { 
   GrafoMA G = malloc(sizeof *G);
   G->nV = tam; 
   G->A = 0;
   G->V = valores;
   int **m = malloc(tam * sizeof (int *));
   for (int i = 0; i < tam; ++i) {
      m[i] = malloc( tam* sizeof (int));

   }
   for (int i = 0; i < tam; ++i)
      for (int j = 0; j < tam; ++j)
         m[i][j] = 0;
   G->mat = m;
   return G;
}

int Inserir(GrafoMA G, int v1,int v2){
   if(G->mat[v1][v2] == 0){
      return G->mat[v1][v2] == 1;
   }else
      printf("\n\n \t[ERROR]Já existe a aresta entre %d e %d\n\n", v1,v2);
      return 0;
}

void Remover(GrafoMA *G, int v1,int v2){
   if((*G)->mat[v1][v2] == 1){
      (*G)->mat[v1][v2] == 0;
      (*G)->A--;
   }else
      printf("\n\n \t[ERROR]Não existe a aresta entre %d e %d\n\n", v1,v2);
}

void Imprime(GrafoMA G){
   printf("\n");
   for(int i = 0; i< G->nV; ++i)
      printf("\tV%d", i);
   for(int i = 0; i< G->nV; i++){
      printf("\n  V%d\t",i);
      for(int j= 0; j< G->nV; j++ )
            printf("%d\t",G->mat[i][j]);
   }
   printf("\n\n");
   for(int i = 0; i< G->nV; ++i)
      printf("V%d = %d\t", i, G->V[i]);
   printf("\n");

}
*/


#endif