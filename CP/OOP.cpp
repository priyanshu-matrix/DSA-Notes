#include<iostream>  //Header file
#include<string>
using namespace std;  // Namespace

//We have three access specifiers
class pet{ // by default private // Parent class
public:
    string name;
    void print(){
        cout << name << endl;
    }
    virtual void sound(){

    }
};

class Dog : public pet{ // Child class
public:
    void sound(){ //function overridding
        cout << "Bark" << endl;
    }
};
class Cat : public pet {
public:
    void sound(){   //function overridding
        cout <<"MEow" << endl;
    }
};
// function overloading
int cal(int x){
    cout << x << endl;
    return 0;
}
int cal(float y){
    cout << 5*y << endl;
    return 0;
}

int main(){
    pet cat; // Main/Parent class object
    cat.name = "Meow"; // data members
    cat.print(); // class methods/functions
    Dog one; // Child class1 object
    one.name = "pluto";
    one.print();
    one.sound();
    Cat two;
    two.sound();
}