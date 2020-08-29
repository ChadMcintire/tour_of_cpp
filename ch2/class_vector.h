template<typename T>
class Vector {
public:
    Vector(int s); //default constructor
    ~Vector(); //destructor

    //copy
    Vector(const Vector& a); //copy constuctor 
    Vector& operator=(const Vector& a); //copy assignment

    // bracket operators
    T& operator[](int i); //access element: subscripting
    const T& operator[](int i) const; //access element: subscripting

    //move 
    Vector(Vector&& a);  //move constructor 
    Vector& operator=(Vector&& a); //move assignment

    T size() const;

private:
    T* elem; //pointer to the element
    int sz;       //the number of elements
};

