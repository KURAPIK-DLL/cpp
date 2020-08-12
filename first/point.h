

#ifndef UNTITLED1_POINT_H
#define UNTITLED1_POINT_H
#include <iostream>
#include<string>

using namespace std;

class point{
private:  int x, y;

public :
    point();
    point(int a, int  b);


    void setX(int a);
    void setY(int a);


    int getX() const;
    int getY() const;

    void deplacer(int a, int b);
    void affiche();
//    the is just a test
};


#endif //UNTITLED1_POINT_H
