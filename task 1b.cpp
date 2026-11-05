// a simple C++ program to determine whether a learner driver has passed or failed the driving test
#include<iostream>
#include<string>
using namespace std;
int main()
{
int theoryTestMarks, practicalTestMarks;
string studentName;
float averageScore;

cout<<"Enter student name:";
getline(cin,studentName);

cout<<"Enter theory test marks:";
cin>>theoryTestMarks;

cout<<"Enter practical test marks:";
cin>>practicalTestMarks;    

averageScore = (theoryTestMarks + practicalTestMarks) / 2;

display:
cout<<"Name: "<<studentName<<endl;
cout<<"Theory Marks: "<<theoryTestMarks<<endl;
cout<<"Practical Marks: "<<practicalTestMarks<<endl;
cout<<"Average Score: "<<averageScore<<endl;

if(averageScore >= 50)
{
    cout<<"Result: Passed"<<endl;
}
else
{
    cout<<"Result: Failed"<<endl;
}

return 0;
}