#include <iostream>

using namespace std;

class Vector {
public:
    Vector(int s) :elem{new double[s]}, sz{s} { } //default constructor
    double& operator[](int i) { return elem[i];} //access element: subscripting
    int size() { return sz;}
private:
    double* elem; //pointer to the element
    int sz;       //the number of elements
};

double read_and_sum(int s)
{
    Vector v(s);
    for (int i=0; i!=v.size(); ++i)
        cin>>v[i];

    double sum = 0;
    for (int i=0; i!=v.size(); ++i)
        sum+=v[i];
    return sum;
}

int main()
{
    read_and_sum(4);
}

