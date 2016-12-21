#include <iostream>

using namespace std;

int main()
{
    int A;
    cin >> A;
    int aux1=1,aux2,aux3=1000000,sol1=1,sol2=A;
    aux2 = A/aux1;
    while(aux1<=aux2){
        if(aux1*aux2==A && aux2-aux1<aux3){
            aux3=aux2-aux1;
            sol1=aux1;
            sol2=aux2;
        }
        aux1++;
        aux2 = A/aux1;
    }
    cout << sol1 << " " << sol2 << endl;
    return 0;
}
