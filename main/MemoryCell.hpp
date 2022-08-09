#ifndef __MEMORYCELL__
#define __MEMORYCELL__

template <typename Object>
class MemoryCell {
public:
		explicit MemoryCell(const Object &initialValue=Object{})
				:storedValue{initialValue}{}
		const Object& read()const{
				return storedValue;
		}
		void write(const Object&x) {
				storedValue = x;
		}
private:
		Object storedValue;

};

#endif // 
