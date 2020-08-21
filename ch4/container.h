class Container {
public:
    virtual double& operator[](int) = 0; //pure virtual
    virtual int size() const = 0;  //const virtual
    virtual ~Container() {} //destructor
};
