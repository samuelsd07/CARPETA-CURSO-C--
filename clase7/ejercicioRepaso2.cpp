#include <iostream>
using namespace std;

void aumentar(int &x){
    x = x + 1;
    cout << "Dentro de la función x vale: " << x << endl;
}
int main(){
    int a = 10;
    aumentar(a);

    cout << "Fuera de a función x vale a es: " << a << endl;
    return 0;
}