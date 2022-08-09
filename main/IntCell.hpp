#ifndef __INT_CELL__
#define __INT_CELL__

class IntCell{
public:
    explicit IntCell(int initialValue = 0);

    IntCell(const IntCell &rhs) = default;
    IntCell(IntCell &&rhs) = default;

    IntCell& operator=(const IntCell&)=default;
    IntCell& operator=(IntCell&&)=default;


    int read() const;
    void write(int x);
private:
    int storeValue;

};

#endif // !__INT_CELL__
