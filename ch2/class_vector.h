class Vector {
public:
    Vector(int s); //default constructor
    double& operator[](int i); //access element: subscripting
    int size() const;
private:
    double* elem; //pointer to the element
    int sz;       //the number of elements
};

