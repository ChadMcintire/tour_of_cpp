#include "../ch2/class_vector.cpp"
#include "container.h"

class Vector_container : public Container {   // Vector_container implements Container
public:
     Vector_container(int s) : v(s) { }   // Vector of s elements
     ~Vector_container() {}

     double& operator[](int i) override { return v[i]; }
     int size() const override { 
        return v.size(); 
     }
private:
     Vector v;
};
