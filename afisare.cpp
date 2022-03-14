#include <iostream>
#include "afisare.h"
using namespace std;

void afisare(int n,int *&v){
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
}


