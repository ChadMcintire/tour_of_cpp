#include <iostream>

using namespace std;

#include "class_vector.h" // get Vector's interface

Vector::Vector(int s)    //establish invariant, acquire resources
{
    if (s<0)
        throw length_error{"Vector constructor: negative size"};
     elem = new double[s];
     sz = s;// initialize members
}

double& Vector::operator[](int i)
{
    if (i<0 || size()<i)
        throw out_of_range{"Vector::operator[]"};
    return elem[i];
}

const double& Vector::operator[](int i) const
{
    if (i<0 || size()<i)
        throw out_of_range{"Vector::operator[]"};
    return elem[i];
}

int Vector::size() const
{
     return sz;
}

Vector::~Vector(){
    delete[] elem;  // destructor 
}

Vector::Vector(const Vector& a) //copy constructor
    :elem{new double[a.sz]},    //allocate space for elements
    sz{a.sz}
{
    for (int i=0; i!=sz; ++i) //copy elements
        elem[i] = a.elem[i];
}

Vector& Vector::operator=(const Vector& a) //copy assignment
{
    double* p = new double[a.sz];  //a pointer to an allocate memory to an array of doubles
    for (int i=0; i!=a.sz; ++i){
        p[i] = a.elem[i]; //assign to the space
    }
    delete[] elem; //delete old elements
    elem = p; //assign new elements 
    sz = a.sz; //set size
    return *this; //points to the object for which the member function is called
}

//non-member function operator
Vector operator+(const Vector& a, const Vector& b)
{
  if (a.size()!=b.size())
  {
        throw out_of_range{"operator+ vector a and b different size"};
  }

  Vector res(a.size());
  for (int i=0; i!=a.size(); ++i)
  {
      res[i]=a[i]+b[i];
  }
  return res;
}

//move constructor
Vector::Vector(Vector&& a) //&& means rvalue reference
    :elem{a.elem}, //grab elements from a
    sz{a.sz}
{
    a.elem = nullptr;
    a.sz = 0;
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

