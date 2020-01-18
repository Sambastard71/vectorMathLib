#include"vector3.hpp"

vector3 vector3::operator+(const vector3 &vec3) const{
    vector3 newVec;
    newVec.x = vector3::x + vec3.x;
    newVec.y = vector3::y + vec3.y;
    newVec.z = vector3::z + vec3.z;
    return newVec;
}

vector3 vector3::operator+(const int &num) const{
    vector3 newVec;
    newVec.x = vector3::x + num;
    newVec.y = vector3::y + num;
    newVec.z = vector3::z + num;
    return newVec;
}

vector3 operator+(const int &num, const vector3 &vec3){
    vector3 newVec;
    newVec.x = vec3.x + num;
    newVec.y = vec3.y + num;
    newVec.z = vec3.z + num;
    return newVec;
}

vector3 vector3::operator-(const vector3 &vec3) const{
    vector3 newVec;
    newVec.x = vector3::x - vec3.x;
    newVec.y = vector3::y - vec3.y;
    newVec.z = vector3::z - vec3.z;
    return newVec;
}

vector3 vector3::operator-(const int &num) const{
    vector3 newVec;
    newVec.x = vector3::x - num;
    newVec.y = vector3::y - num;
    newVec.z = vector3::z - num;
    return newVec;
}

vector3 operator-(const int &num, const vector3 &vec3){
    vector3 newVec;
    newVec.x = vec3.x - num;
    newVec.y = vec3.y - num;
    newVec.z = vec3.z - num;
    return newVec;
}

vector3 & vector3::operator+=(const vector3 &vec3){
    vector3::x += vec3.x;
    vector3::y += vec3.y;
    vector3::z += vec3.z;
    return *this;
}

vector3 & vector3::operator+=(const int &num){
    vector3::x += num;
    vector3::y += num;
    vector3::z += num;
    return *this;
}

vector3 & vector3::operator-=(const vector3 &vec3){
    vector3::x -= vec3.x;
    vector3::y -= vec3.y;
    vector3::z -= vec3.z;
    return *this;
}

vector3 & vector3::operator-=(const int &num){
    vector3::x -= num;
    vector3::y -= num;
    vector3::z -= num;
    return *this;
}

vector3 vector3::operator*(const vector3 &vec3) const{
    vector3 newVec;
    newVec.x = vector3::x * vec3.x;
    newVec.y = vector3::y * vec3.y;
    newVec.z = vector3::z * vec3.z;
    return newVec;
}

vector3 vector3::operator*(const int &num) const{
    vector3 newVec;
    newVec.x = vector3::x * num;
    newVec.y = vector3::y * num;
    newVec.z = vector3::z * num;
    return newVec;
}

vector3 & vector3::operator*=(const vector3 &vec3){
    vector3::x *= vec3.x;
    vector3::y *= vec3.y;
    vector3::z *= vec3.z;
    return *this;
}

vector3 & vector3::operator*=(const int &num){
    vector3::x *= num;
    vector3::y *= num;
    vector3::z *= num;
    return *this;
}

int vector3::get_x() const {
    return vector3::x;
}

int vector3::get_y() const {
    return vector3::y;
}

int vector3::get_z() const {
    return vector3::z;
}

void vector3::set_x(int &x) {
    vector3::x = x;
}

void vector3::set_y(int &y) {
    vector3::y = y;
}

void vector3::set_z(int &z) {
    vector3::z = z;
}