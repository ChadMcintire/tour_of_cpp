#include <iostream>

using namespace std;

//define struct for name an value 
struct Entry {
     string name;
     int value;
};

//get name and value
Entry read_entry(istream& is)     // naive read function (for a better version, see §10.5)
{
     string s;
     int i;
     //read in stream
     is >> s >> i;
     return {s,i};
}

int main() 
{
    auto [n,v] = read_entry(cin);
    cout << "{" << n << "," << v << " }\n";
    return 0;
}
