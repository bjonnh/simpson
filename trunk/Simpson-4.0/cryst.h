#ifndef __CRYST_H
#define __CRYST_H

typedef struct _CRYSTALLITE {
  double alpha,beta,weight;
} CRYSTALLITE;

extern char* cryst_names[];
extern int cryst_numbers[];
extern CRYSTALLITE* cryst_pointers[];

typedef struct _TRIANGLE {
  int a, b, c;
  //double weight;
} TRIANGLE;

typedef struct _Cryst {
   double alpha, beta, gamma, weight;
} Cryst;

Cryst * cryst_alloc(int N);
void cryst_free(Cryst * crdata);
Cryst * read_crystfile(char* crystname, int from, int to);
double cryst_sumweight(Cryst *crdata);

TRIANGLE *triangle_alloc(int N);
void triangle_free(TRIANGLE * triadata);
TRIANGLE * read_triangle_file(char* trianame);

#endif
