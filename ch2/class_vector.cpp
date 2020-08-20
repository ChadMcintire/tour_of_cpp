#include <iostream>

using namespace std;

#include "class_vector.h" // get Vector's interface

Vector::Vector(int s)
     :elem{new double[s]}, sz{s}      // initialize members
{
}

double& Vector::operator[](int i)
{
    if (i<0 || size()<i)
        throw out_of_range{"Vector::operator[]"};
    return elem[i];
}

int Vector::size()
{
     return sz;
}

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

