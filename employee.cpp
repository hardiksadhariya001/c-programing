#include<iostream>
using namespace std;
class Employee
                {
                        private:
                                    int a,b,c;
                        public:
                                    int d,e;
                                void setData(int a1,int b1,int c1);
                                void getData()
                                {
                                    cout<<"The vlaue of A is"<<a<<endl;
                                    cout<<"The vlaue of B is"<<b<<endl;
                                    cout<<"The vlaue of C is"<<c<<endl;
                                    cout<<"The vlaue of D is"<<d<<endl;
                                    cout<<"The vlaue of E is"<<e<<endl;                                 
                                }
                };
void Employee::setData(int a1,int b1,int c1)
            {
                    a=a1;
                    b=b1;
                    c=c1;
            }
int main()
            {
                    Employee hardik;
                    hardik.d=33;
                    hardik.e=34;
                    hardik.setData(1,2,4);
                    hardik.getData();
                    return 0;
            }