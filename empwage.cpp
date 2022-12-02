#include<iostream>
 using namespace std;
 class Employee
 {
     private:
         int empid;
         char empname[20];
         int wagePerHour;
         int attendence;
         int hour;
         int Fsalary;

     public:
         Employee()
         { 
             wagePerHour = 1000;
         }
         void GetData();
         void DispData();
 };
 void Employee::GetData()
 {
     cout<<"Enter the employee id: ";
     cin>>empid;
     cout<<"Enter the employee name: ";
     cin>>empname;
     cout<<"Enter the employee attendence: ";
     cin>>attendence;
     cout<<"Enter the employee workinghour: ";
     cin>>hour;
       

 }
 void Employee::DispData()
 {
     cout<<endl<<empid<<"\t"<<empname<<"\t"<<wagePerHour<<"\t"<<attendence<<"\t"<<hour<<"\t"<<wagePerHour*hour*attendence;
 }
 int main()
 {
     Employee e[3];
     cout<<"Enter the employee information:"<<endl;
     for(int i=0;i<3;i++)
     {
         e[i].GetData();
     }
     cout<<endl<<"The employee information is:";
     cout<<endl<<"EmpID \t Name \t wagePerHour \t Attendence \t hour \t Fsalary" ;
     for(int i=0; i<3;i++)
     {
         e[i].DispData();
     }
 }