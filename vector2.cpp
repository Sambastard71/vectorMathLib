#include"vector2.h"

vector2 & operator+ const (const int &vec2){
    vector2 newVec;
    newVec.x = this.x + vec2.x;
    newVec.y = this.y + vec2.y;
    return newVec;
}

int & get_x() const {
    return *x;
}

int & get_y() const {
    return *y;
}