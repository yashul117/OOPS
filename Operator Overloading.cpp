#include <bits/stdc++.h>
using namespace std;

class Complex {
    int real;
    int imag;
public:
    Complex(int real, int imag) {
        this->real=real;
        this->imag=imag;
    }
    
    Complex operator+ (Complex c2) {
        Complex res(0,0);
        res.real=this->real+c2.real;
        res.imag=this->imag+c2.imag;
        
        return res;
    }
    
    void print() {
        cout<<real<<" + i"<<imag<<"\n";
    }
};

int main() {
    Complex c1(3,10);
    Complex c2(4,20);
    
    Complex c3=c1+c2;
    c3.print();
}