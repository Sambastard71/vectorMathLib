#pragma once

struct vector2 {
				
				vector2 & operator+(const int &vec2);
				int & get_x() const;
				int & get_y() const;
				
private:
				int x;
				int y;
				
}