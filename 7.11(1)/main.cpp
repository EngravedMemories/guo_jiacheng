#include <iostream>
#include <cstddef>
#include <array>

using namespace std;

int main()
{
    array<int, 10>n={};

    array<int, 15>m={};
    cout << "Items before modification: " << endl;
    for(int item: m)
        cout<<item<<" ";

    for(int &itemRef: m)
        itemRef++;
    cout<<"\nItems after modification: "<<endl;
    for(int item: m)
        cout<<item<<" ";

    array<double, 12>k={};
    for(size_t i=0; i<=k.size(); i++)
        cin>>k[i];

    array<int, 5>p={1, 2, 3, 4, 5};
    for(size_t j=0; j<=p.size(); j++)
        cout<<p[j]<<endl;

}
