#include <bits/stdc++.h>
using namespace std;

class human {
public:
    int age;
    string name;
    string gender;
    void setter(int age, string name) {
        this->age=age;
        this->name=name;
    }
    
    void setter(string gender) {
        this->gender=gender;
    }
    
    void display() {
        cout<<"Age: "<<age<<"\n";
        cout<<"Name: "<<name<<"\n";
    }
    
    void voice() {
        // if(this->gender=="Male")
        //     cout<<"Low Pitch\n";
        // else if(this->gender=="Female")
        //     cout<<"High Pitch\n";
        
        cout<<"Speak\n";
    }
};

class male : public human {
public:
    void getGender() {
        cout<<gender<<"\n";
    }
    
    void voice() {
            cout<<"Low Pitch\n";
    }
};

class female : public human {
public:
    void getGender() {
        cout<<gender<<"\n";
    }
};

int main() {
    human h;
    h.setter(22, "Yashul");
    h.setter("Male");
    // h.display();
    
    male m;
    m.setter(21, "Deepak");
    m.setter("Male");
    // m.display();
    // m.getGender();
    m.voice();
    
    female f;
    f.setter(21, "Alia");
    f.setter("Female");
    // f.display();
    // f.getGender();
    f.voice();
}