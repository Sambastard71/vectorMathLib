#include"vector2.hpp"

vector2 vector2::operator+(const vector2 &vec2) const{
    vector2 newVec;
    newVec.x = vector2::x + vec2.x;
    newVec.y = vector2::y + vec2.y;
    return newVec;
}

vector2 vector2::operator+(const int &num) const{
    vector2 newVec;
    newVec.x = vector2::x + num;
    newVec.y = vector2::y + num;
    return newVec;
}

vector2 operator+(const int &num, const vector2 &vec2){
    vector2 newVec;
    newVec.x = vec2.x + num;
    newVec.y = vec2.y + num;
    return newVec;
}

vector2 vector2::operator-(const vector2 &vec2) const{
    vector2 newVec;
    newVec.x = vector2::x - vec2.x;
    newVec.y = vector2::y - vec2.y;
    return newVec;
}

vector2 vector2::operator-(const int &num) const{
    vector2 newVec;
    newVec.x = vector2::x - num;
    newVec.y = vector2::y - num;
    return newVec;
}

vector2 operator-(const int &num, const vector2 &vec2){
    vector2 newVec;
    newVec.x = vec2.x - num;
    newVec.y = vec2.y - num;
    return newVec;
}

vector2 & vector2::operator+=(const vector2 &vec2){
    vector2::x += vec2.x;
    vector2::y += vec2.y;
    return *this;
}

vector2 & vector2::operator+=(const int &num){
    vector2::x += num;
    vector2::y += num;
    return *this;
}

vector2 & vector2::operator-=(const vector2 &vec2){
    vector2::x -= vec2.x;
    vector2::y -= vec2.y;
    return *this;
}

vector2 & vector2::operator-=(const int &num){
    vector2::x -= num;
    vector2::y -= num;
    return *this;
}

vector2 vector2::operator*(const vector2 &vec2) const{
    vector2 newVec;
    newVec.x = vector2::x * vec2.x;
    newVec.y = vector2::y * vec2.y;
    return newVec;
}

vector2 vector2::operator*(const int &num) const{
    vector2 newVec;
    newVec.x = vector2::x * num;
    newVec.y = vector2::y * num;
    return newVec;
}

vector2 & vector2::operator*=(const vector2 &vec2){
    vector2::x *= vec2.x;
    vector2::y *= vec2.y;
    return *this;
}

vector2 & vector2::operator*=(const int &num){
    vector2::x *= num;
    vector2::y *= num;
    return *this;
}

int vector2::get_x() const {
    return x;
}

int vector2::get_y() const {
    return y;
}

void vector2::set_x(int &x) {
    vector2::x = x;
}

void vector2::set_y(int &y) {
    vector2::y = y;
}