#include <iostream>
#include <list>
using namespace std;
class Employee{
    private:
        int rollno;
        int salary;
    public:
        void input(int index){
            cout<<"Enter Roll of Employee ["<<index+1<<"]:";
            cin>>rollno;
            cout<<"Enter Salary of Employee ["<<index+1<<"]:";
            cin>>salary;
        }
        void display() const{
            cout<<"Roll No: "<<rollno<<" Salary:"<<salary<<endl;
        }
};
int main(){
    list<Employee> employees;
    int numEmployees;
    cout<<"Enter the number of employees: ";
    cin>>numEmployees;
    for(int i=0; i<numEmployees;i++){
        Employee emp;
        emp.input(i);
        employees.push_back(emp);
    }
    int index =1;
    for(Employee& emp:employees){
        cout<<"["<<index++<<"]";
        emp.display();
    }
    return 0;
}   