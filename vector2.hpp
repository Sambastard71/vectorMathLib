#pragma once

struct vector2 {

	vector2() = default;
    vector2(int x_, int y_) : x{x_}, y{y_} {}

	vector2 operator+(const vector2 &vec2) const;
	vector2 operator+(const int &num) const;
	friend vector2 operator+(const int &num, const vector2 &vec2);

	vector2 operator-(const vector2 &vec2) const;
	vector2 operator-(const int &num) const;
	friend vector2 operator-(const int &num, const vector2 &vec2);
	
	vector2 & operator+=(const vector2 &vec2);
	vector2 & operator+=(const int &num);
	
	vector2 & operator-=(const vector2 &vec2);
	vector2 & operator-=(const int &num);
	
	vector2 operator*(const vector2 &vec2) const;
	vector2 operator*(const int &num) const;
	
	vector2 & operator*=(const vector2 &vec2);
	vector2 & operator*=(const int &num);
	
	int get_x() const;
	int get_y() const;
				
	void set_x(int &x);
	void set_y(int &y);
private:
	int x;
	int y;
				
};