#pragma once
#include <iostream>
#include "citire.h"

using namespace std;
void citire(int &n,int *&v){
    cout<<"Dati n:";
    cin>>n;
    v=new int[n];
    for(int i=1;i<=n;i++)
        cin>>v[i];
}
 void dealocare(int* &v){
    if(v != nullptr){
        delete v;
        v = nullptr;
    }
}


