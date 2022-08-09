#include "./IntCell.hpp"


IntCell::IntCell(int initialValue):storeValue{initialValue} {

}

int IntCell::read() const {
    return storeValue;
}

void IntCell::write(int x) {
    storeValue = x;
}
