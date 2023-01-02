#include<bits/stdc++.h>
using namespace std;
class student{
    public:
        string name;
        int age;
        int std_id;
        string phone;
        string email;
    // protected:
    //     string admin;
    //     string password;
    //privet:
    void print_info(){
        cout<<"name:"<<name<<endl<<"age:"<<age<<endl<<"std_id:"<<std_id<<endl<<"phone:"<<phone<<endl<<"E-mail:"<<email<<endl;
    }
};
int main(){
    student s;
    s.name="Sarbajit";
    s.age=20;
    s.std_id=6155;
    s.phone="01315-352270";
    s.email="bappy15-6155@s.diu.edu.bd";
    student s2;
    s2.name = "Sarbajit";
    s2.age = 20;
    s2.std_id = 6155;
    s2.phone = "01315-352270";
    s2.email = "bappy15-6155@s.diu.edu.bd";
    s.print_info();
    s2.print_info();
}