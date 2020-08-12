

#include "point.h"

point::point(int a, int b )
{
    x=a;  y= b;
}

void point::affiche() {
    cout<<"point ( "<< x  << " , "<<  y << ")"<<endl;




}
void point::deplacer(int a, int b) {

    x+=a;
    y+=b;

};
int point::getX() const {
    return x;
}
int point::getY() const {
    return y;
}
void point::setX(int a) {
    x=a;
}
void point::setY(int a) {
    y=a;
}
point::point() {
    cout<<"constractor"<<endl;
}
