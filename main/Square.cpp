#include "./Square.hpp"
#include "./common.hpp"
#include <iostream>

double Square::getSide()const {
		return side;
}

double Square::getArea() const {
		return side * side;
}

double Square::getPerimeter()const{
		return 4*side;
}

void Square::print(std::ostream &out)const {
		out << "(Square " << getSide() << ")" << std::endl;

}

std::ostream &operator<<(std::ostream &os, const Square&rhs) {
		rhs.print(os);
		return os;
}


#ifdef DEBUG
#include<vector>
using namespace std;
int main() {
		vector<Square> v{Square(3.0), Square(2.0), Square(2.5)};
		cout << "Largest square: " << findMax(v) << std::endl;
		return 0;
}
#endif // 
