// C++ program to automatically assign grades based on students exam marks.
#include<iostream>
#include<string>
using namespace std;
int main()
{
int marks;
string name;
char grade;

cout<<"Enter student marks:";
cin>>marks;

cout<<"Enter student name:";
getline(cin,name);

cout<<"Enter student grade:";

if(marks >= 70 && marks <= 100)
{
    cout<<"Grade: A"<<endl;
}
else if(marks >= 60 && marks < 69)
{
    cout<<"Grade: B"<<endl;
}
else if(marks >= 50 && marks < 59)
{
    cout<<"Grade: C"<<endl;
}
else if(marks >= 40 && marks < 49)
{
    cout<<"Grade: D"<<endl;
}
else
{
    cout<<"Grade: F"<<endl;
}
 cout<<"Enter student grade;";


display:
cout<<"Name: "<<name<<endl;
cout<<"Marks: "<<marks<<endl;
cout<<"Grade: "<<grade<<endl;

return 0;
}