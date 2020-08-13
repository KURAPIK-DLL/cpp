//
// Created by KURAPIKA.dll on 8/13/2020.
//

#include "cercle.h"

cercle::cercle(int a, int b, int z) {

    x=a;
    y=b;
    r=z;

}
void cercle::getr() {
    return r;
}
void cercle::getx() {
    return x;
}
void cercle::gety() {
    return y;
}
int cercle::setr(int a, int b) {
    this->x=a;
    this->y=b;
}
int cercle::setx(int a) {
    this->x=a;

}
void cercle::sety(int b)  {

    this->y=b;

}
