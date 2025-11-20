// #include <iostream>
// using namespace std;

// class Person {
// public:
//     string name;

//     Person(string n) {
//         name = n;
//     }

//     void display() {
//         cout << "Name: " << name << endl;
//     }
// };

// // Function declared outside the class to change name
// void change(Person&p, string newName) {
//     p.name = newName;   
// }

// int main() {
//     Person p1("Neel");

//     cout << "Before change: ";
//     p1.display();//neel

//     change(p1, "Patil"); 

//     cout << "After change: ";
//     p1.display();//patil

//     return 0;
// }


//pass by pointers-1
// #include <iostream>
// using namespace std;

// class Person {
// public:
//     string name;

//     Person(string n) {
//         name = n;
//     }

//     void display() {
//         cout << "Name: " << name << endl;
//     }
// };

// // Function declared outside the class to change name
// void change(Person *p, string newName) {
//     p->name = newName;  // use -> because p is a pointer (*p).name is same as p->name
// }

// int main() {
//     Person p1("Neel");

//     cout << "Before change: ";
//     p1.display();

//     change(&p1, "Patil");  // pass address of object

//     cout << "After change: ";
//     p1.display();

//     return 0;
// }

//pass by pointers -2



// #include <iostream>
// using namespace std;

// class Person {
// public:
//     string name;

//     Person(string n) {
//         name = n;
//     }

//     void display() {
//         cout << "Name: " << name << endl;
//     }
// };

// // Function declared outside the class to change name
// void change(Person *p, string newName) {
//     p->name = newName;  // use -> because p is a pointer
// }

// int main() {
//     Person p1("Neel");

//     Person *Ptr=&p1;

//     cout << "Before change: ";
//     p1.display();

//     change(ptr, "Patil");  // pass address of object

//     cout << "After change: ";
//     p1.display();

//     return 0;
// }

//pass by pointer -3



#include <iostream>
using namespace std;

class Person {
public:
    string name;

    Person(string n) {
        name = n;
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

// Function declared outside the class to change name
void change(Person *p, string newName) {
    p->name = newName;  // use -> because p is a pointer
}

int main() {
    Person *p1=new Person("Neel"); //dynamic allocation of object

   

    cout << "Before change: ";
    p1.display();

    change(p1, "Patil");  // pass address of object

    cout << "After change: ";
    p1.display();

    return 0;
}
