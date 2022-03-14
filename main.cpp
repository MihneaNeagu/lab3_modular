#include <iostream>
#include "citire.h"
#include "afisare.h"
#include "secv4.h"
#include "secv5.h"
#include "tests.h"
using namespace std;
int n;
int main()
{
    int *v = new int[100];
    for(int i=0;i<sizeof(v);i++)
        v[i]=0;
    while (true)
    {
        test();
        cout<<"1. Scrieti o lista de numere intregi: "<<'\n';
        cout<<"2. Afisati lista de numere intregi: "<<'\n';
        cout<<"3. Afisati cea mai lunga secventa care are numerele in ordine crescatoare: "<<'\n';
        cout<<"4. Afisati cea mai lunga secventa care are toate numerele prime:"<<'\n';
        cout<<"5. Exit"<<'\n';
        int optiune;
        cout<<"Dati optiunea:";

        cin>>optiune;
        if (optiune==1)
            citire(n,v);
        else if (optiune==2)
            afisare(n,v);
        else if (optiune==3)
            secv4(n,v);
        else if (optiune==4)
            secv5(n,v);
        else if (optiune==5)
        { dealocare(v);
            break;}
    }
    return 0;
}
