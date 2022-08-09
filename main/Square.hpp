#ifndef __SQUARE__
#define __SQUARE__
#include <iostream>

class Square {
public:
		explicit Square(double s = 0.0f) :side{s} {}
		double getSide()const;
		double getArea()const;
		double getPerimeter()const;
		void print(std::ostream &)const;
		bool operator< (const Square &rhs) const {
				return getSide() < rhs.getSide();
		}

		
private:
		double side;
};


std::ostream &operator<<(std::ostream &os, const Square&rhs);
#endif // !__SQUARE__
