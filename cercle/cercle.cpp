//
// Created by KURAPIKA.dll on 8/13/2020.
//
#include <iostream>
#include <cmath>
#include "cercle.h"
using namespace std;

cercle::cercle() {
    cout<<"constractor" <<endl;
}
cercle::cercle(int a, int b, int z) {

    x=a;
    y=b;
    r=z;
}
void cercle::setcentre(int a, int b) {
    this->x=a;
    this->y=b;

}
int cercle::getr() {
    return r;
}
int cercle::getx() {
    return x;
}
int cercle::gety() {
    return y;
}
void cercle::setr(int a) {
    this->r=a;

}

cercle::~cercle() {
    cout<<"destractor"<<endl;
}
double cercle::surface() const {

    return P*(r*r);
}
bool cercle::isIn(double a, double b) {

    return sqrt(pow(a-x,2)+pow(b-y,2))-r ? 1 : 0;
}






















