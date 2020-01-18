#pragma once

struct vector3 {

	vector3() = default;
    vector3(int x_, int y_, int z_) : x{x_}, y{y_}, z{z_} {}

	vector3 operator+(const vector3 &vec3) const;
	vector3 operator+(const int &num) const;
	friend vector3 operator+(const int &num, const vector3 &vec3);

	vector3 operator-(const vector3 &vec3) const;
	vector3 operator-(const int &num) const;
	friend vector3 operator-(const int &num, const vector3 &vec3);
	
	vector3 & operator+=(const vector3 &vec3);
	vector3 & operator+=(const int &num);
	
	vector3 & operator-=(const vector3 &vec3);
	vector3 & operator-=(const int &num);
	
	vector3 operator*(const vector3 &vec3) const;
	vector3 operator*(const int &num) const;
	
	vector3 & operator*=(const vector3 &vec3);
	vector3 & operator*=(const int &num);
	
	int get_x() const;
	int get_y() const;
	int get_z() const;
				
	void set_x(int &x);
	void set_y(int &y);
	void set_z(int &z);

private:
	int x;
	int y;
    int z;
};