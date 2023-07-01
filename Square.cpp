#include "Square.h"

void Square :: setLength(float l){
    length = l;
}
float const Square :: getLength(){
    return length;
}
float const Square :: getArea(){
    return getLength()* getLength();
}
Square :: Square(float l){
    setLength(l);
}
Square :: Square(){
    
}
Square Square :: operator+(Square &plus){
    Square obj;
    obj.length = length + plus.length;
    return obj;
}
Square Square :: operator *(Square &divide){
    Square obj2;
    obj2.length = (length + divide.length)/2;
    return obj2;
}




