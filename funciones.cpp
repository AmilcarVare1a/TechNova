#include <iostream>
using namespace std; 
int OperacionSuma(int n1,int n2){
    int resultado=0;
    resultado=n1+n2;
    return resultado;
}
int main() {
    int n1=0,n2=0,resultado=0;
    cout << "Ingresa el primer numero " <<endl;
    cin >> n1;
    cout << "Ingresa el segundo numero " <<endl;
    cin >> n2;
    resultado= OperacionSuma(n1,n2);
    cout << resultado;
    return 0;
}