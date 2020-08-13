//
// Created by KURAPIKA.dll on 8/13/2020.
//

#ifndef C_CERCLE_H
#define C_CERCLE_H
#include <iostream>

#define P 3.143235
class cercle {
private: int x,y,r;

public:

    cercle();
    cercle(int x , int y , int r);
    ~cercle();

    int getx();
    int gety();
    int getr();



   void setcentre(int a , int b);
   void setr(int a);
   double surface() const;

   bool isIn(double a,double b);






};


#endif //C_CERCLE_H
