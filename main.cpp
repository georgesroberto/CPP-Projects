#include <iostream>

using namespace std;


class StudentRecord
{
private:
    string studentId;
    int units;
    char gender;

public:
    StudentRecord(string s,int u,char g)
        {
            studentId=s;
            units=u;
            gender=g;
        }
    StudentRecord()
        {
            studentId="J17S/MSA/1265/2007";
            units=8;
            gender='M';
        }
    //display student information
    void printRecord()
    {
         cout<<"StudentID: "<<studentId<<endl<<"units: "<<units<<endl<<"Gender: "<<gender<<endl;
    }
};
    int main()
 {
    StudentRecord Jmart("J27S/MSA/2453/2008",16,'F');

    //call the method
    Jmart.printRecord();
 return 0;
 }


