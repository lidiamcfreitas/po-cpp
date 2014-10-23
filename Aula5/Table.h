#include "Transform.h"
#include <vector>

class Table{
    private:
        std::vector<int> _vector;   // vector of integers
        int _size;

    public:
        Table(int size);
        virtual ~Table();

        int getSize() const;
        void setValue(int position, int value);
        void setAll(int value);
    
        virtual void print(Transform *t) const;
};
