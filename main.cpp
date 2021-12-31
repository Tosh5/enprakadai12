#include <iostream>
using namespace std;


int main(){   
    int A,B;
    string op;

    cin >> A >> B;
    cin >> op;

    if(op == "+"){
        cout << A+B << endl;
    }else if(op == "-"){
        cout << A-B << endl;
    }else if(op == "*"){
        cout << A*B << endl;
    }else if(op == "/"){
        cout << A/B << endl;
    }else{
        cout << "error" << endl;
    }

    //std::cout << "Hello World!" << std::endl;
    return 0;
    
}