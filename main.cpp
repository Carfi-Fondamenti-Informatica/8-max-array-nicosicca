#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int d;
    cin>>d;
    float v[d];

    for(int i=0;i<d;i++)
    {
        cin>>v[i];
    }

    cout<<maggiore(v,d);


    return 0;
}
