#include <iostream>
#include "./IntCell.hpp"
#include "./common.hpp"
#include "./MemoryCell.hpp"

int main(int argc, char**argv) {
    IntCell intcell{0};
    std::cout << intcell.read() << std::endl;
    intcell.write(10);
    std::cout << intcell.read() << std::endl;
    IntCell *m;
    m = new IntCell{4};
    std::cout << m->read() << std::endl;
    m->write(5);
    std::cout << m->read() << std::endl;
    delete m;
    MemoryCell<IntCell> t(IntCell(10));
    std::cout << t.read().read() << std::endl;

    return 0;
}
