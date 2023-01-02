#include<bits/stdc++.h>

using namespace std;

class Student
{
private:
    string student_name;
    int student_id;
    float student_cgpa;

public:
    Student()
    {

    }
    Student(string student_name,int student_id,float student_cgpa)
    {
        this->student_name=student_name;
        this->student_id=student_id;
        this->student_cgpa=student_cgpa;
    }
    bool comp(Student a, Student b)
    {
        return a.student_cgpa < b.student_cgpa;
    }
};

void PrintInfo(string student_name,int student_id,float student_cgpa)
{
    cout<<"Name Of The Student : "<<student_name<<"\n";
    cout<<"Student Id          : "<<student_id<<"\n";
    cout<<setprecision(2)<<fixed<<"Student CGPA        : "<<student_cgpa<<"\n";
}

int main()
{
    vector<Student>s;
    string nam;
    int id;
    float cgpa;
    for(int i=0; i<4; i++)
    {
        getline(cin,nam);
        cin>>id;
        cin>>cgpa;
        getchar();
        s.push_back(Student(nam,id,cgpa));
    }
    for(int i=0; i<4; i++)
    {
        s[i].PrintInfo();
    }
    sort(s.begin(),s.end(),comp);
    cout<<"After Sorting\n";
    for(int i=0; i<4; i++)
    {
        s[i].PrintInfo();
    }
    return 0;
}