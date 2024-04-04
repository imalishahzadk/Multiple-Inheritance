#include <iostream>
#include<string>
using namespace std;


//Department Class
class Department
{

private:
    string deptName;

public:
    //No argument constructor
    Department()
    {
        deptName = " ";
    }

    //Setters
    void set_deptName(const string name)
    {
        deptName = name;
    }

    //Getters
    string getDeptName() const
    {
        return deptName;
    }

    void Print() const
    {
    
        cout << "\t Department : " << deptName << endl;
        
    }



};

//Class Student
class Student
{
private:
    int studentNo;
    string studentName;
    double studentAvg;

public:
    //No argument constructor
    Student()
    {
        studentNo = 0;
        studentName = " ";
        studentAvg = 0.0;
    }

    //Setters
    void set_studentNo(const int num)
    {
        studentNo = num;
    }

    void set_studentName(const string name)
    {
        studentName = name;
    }

    void set_studentAvg(const double avg)
    {
        studentAvg = avg;
    }

    //Getters
    int get_studentNo() const
    {
        return studentNo;
    }

    string getStudentName() const
    {
        return studentName;
    }

    double getStudentAverage() const
    {
        return studentAvg;
    }

    void Print() const
    {
        cout << "\t Student Number : " << studentNo << endl;
        cout << "\t Student Name : " << studentName << endl;
        cout << "\t Student Average : " << studentAvg << endl;

    }
};


//Class GraduateStudent
class graduateStudent : public Department, public Student
{
private:
    int level;
    int year;

public:
    //No Argument Contructor
    graduateStudent()
    {
        level = 0;
        year = 0;
    }

    //Setters
    void set_level(const int l)
    {
        level = l;
    }
    void set_year(const int y)
    {
        year = y;
    }

    //Getters
    int get_level() const
    {
        return level;
    }

    int get_year() const
    {
        return year;
    }

    void Print() const
    {
        Department::Print();
        Student::Print();
        cout << "\t Studnet Level : " << level << endl;
        cout << "\t Student Year : " << year << endl;

    }
};


//Main Function
int main()
{
    cout << endl << endl;

    int num, level, year;
    string name, dept;
    double avg;

    cout << "\t\t *Studnent Record*" << endl << endl;

    graduateStudent M1;

    //cin.ignore();
    cout << "\t Enter Department Name : ";
    getline(cin, dept);
    cout << "\t Enter Student Number : ";
    cin >> num;
    cin.ignore();
    cout << "\t Enter Student Name : ";
    getline(cin, name);
    cout << "\t Enter Student Average : ";
    cin >> avg;
    cout << "\t Enter Student Level : ";
    cin >> level;
    cout << "\t Enter Student Year : ";
    cin >> year;

    cout << endl << endl;

    M1.set_deptName(dept);
    M1.set_studentNo(num);
    M1.set_studentName(name);
    M1.set_studentAvg(avg);
    M1.set_level(level);
    M1.set_year(year);
    
    

    cout << "\t\t Student Details" << endl;
    M1.Print();
    cout << endl << endl;

    return 0;
}