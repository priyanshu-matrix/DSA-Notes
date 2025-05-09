#include <bits/stdc++.h>
using namespace std;

class Pet{
    int x;
    Pet* ptr;
public:
    Pet(){ //Default contructor
        x = 0;
        ptr = nullptr;
    }
    Pet(int m){ // Parametrized constructor
        x = m;
        ptr = nullptr;
    }
    void print(){
        cout << x << endl;
    }
};

int main() {
    Pet cat;
    cat.print();
    Pet dog(5);
    dog.print();
    return 0;
}