#include <iostream>

using namespace std;


/****************************************
* struct of vector
****************************************/

struct Vector {
    int sz;
    double* elem;
};

/****************************************
* Allocate memory for the vector
****************************************/

void vector_init(Vector &v, int s)
{
    v.elem = new double[s];
    v.sz = s;
}

/****************************************
* Get user info then sum the digits
****************************************/

double read_and_sum(int s)
{
    Vector v;
    vector_init(v,s);

    //for each element get a user input and append it
    for (int i=0; i!=s; ++i)
        cin>>v.elem[i];

    double sum = 0;
    for (int i=0; i!=s; ++i)
        sum+=v.elem[i];
    return sum;
}

int main()
{
    read_and_sum(4);
}
