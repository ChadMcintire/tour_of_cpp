class Vector {
public:
    Vector(int s); //default constructor
    ~Vector(); //destructor

    //copy
    Vector(const Vector& a); //copy constuctor 
    Vector& operator=(const Vector& a); //copy assignment

    // bracket operators
    double& operator[](int i); //access element: subscripting
    const double& operator[](int i) const; //access element: subscripting

    //move 
    Vector(Vector&& a);  //move constructor 
    Vector& operator=(Vector&& a); //move assignment

    int size() const;

private:
    double* elem; //pointer to the element
    int sz;       //the number of elements
};

