#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    // Attributes
    int id;
    int age;
    string name;
    int nos;
    
    // ctor->default constructor
    Student(){
        cout<<"Default constructor"<<endl;
    }
    // ctor-> parametarised constructor
    Student(int id,int age,string name,int nos){
        this->id=id;
        this->age=age;
        this->name=name;
        this->nos=nos;
    }
    //copy ctor-> copy constructor
    Student(const Student & srcobj){
        this->id=srcobj.id;
        this->age=srcobj.age;
        this->name=srcobj.name;
        this->nos=srcobj.nos;
    }
    // behaviour || methods || function
    void study(){
        cout<<this->name<<"Student is studying"<<endl;
    }
    void sleep(){
        cout<<this->name<<"Sleeping"<<endl;
    }
    void bunk(){
        cout<<this->name<<"Bunking"<<endl;
    }
    // dtor->distoctor
    ~Student(){
        cout<<this->name<<"This is default dtor"<<endl;
    }
};

int main(){
    // Student A;
    // A.name="Ankit";
    // A.age=15;
    // A.id=2343;
    // A.nos=5;
    // A.study();

    // Student B;
    // B.name="Soham";
    // B.age=23;
    // B.id=235;
    // B.nos=2;
    // B.sleep();
   // Student A(2123,23,"Ankit",5);//stack
   // Student B(2,20,"Anil",2);
    // Student C(3,21,"Amit",9);
    // Student D(6,19,"Aham",3);

   // cout<<A.name<<" "<<A.age<<" "<<A.id<<" "<<A.nos<<endl;
    //A.bunk();
    //B.sleep();
  //  Student B(A);
    //cout<<B.name<<" "<<B.age<<" "<<B.id<<" "<<B.nos<<endl;

    //dynamic allocation
    Student* A=new Student(2,23,"Ankit",5);
    cout<<A->age<<" "<<A->name<<" "<<A->id<<endl;
    delete A; // memory stores in heap;

    return 0;
}