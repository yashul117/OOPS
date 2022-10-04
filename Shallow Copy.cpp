#include <bits/stdc++.h>
using namespace std;

class human {
public:
    int age;
    char* name;
    
    human () {
        age=10;
        
    }
    void setName(char *name) {
        this->name=name;
    }
    
    void print () {
        cout<<age<<", "<<name<<"\n"; 
    }
};

int main() {
    human h;
    char str[7]="Yashul";
    h.setName(str);
    human h1(h);
    h1.name[0]='T';
    h.print();
}