#include <vector>
#include <algorithm>
#include <iostream>
#include <stack>

using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int lineas, opcion, numero;
    stack<int> pila;
    
    cin >> lineas;
    
    for (int i = 0; i < lineas; i++){
        
        cin >> opcion;
        
        if (opcion == 1){
            
            cin >> numero;
            
            pila.push(numero);
            
        }
        else if (opcion == 2){
            
            if (!pila.empty()){
                pila.pop();
            }
        }
        else{
            
            if (!pila.empty()){
                
                cout << pila.top() << "\n";
                
            }
            else{
                
                cout << "Empty!\n";
                
            }
            
        }
        
    }
    
    return 0;
}