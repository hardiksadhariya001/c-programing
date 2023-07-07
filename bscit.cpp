#include<iostream>
using namespace std;
class Demo
                {
                        private:        //class Declaration
                                    int a,b;
                        public:
                                void input();
                                void output()
                            {   
                                cout<<"\n a ="<<a;
                                cout<<"\n b ="<<b;
                            }
                };
void Demo::input()
        {
                cout<<"Enter two Number";
                cin>>a>>b;
        }
int main()
            {
                   Demo d1;
                   d1.input();
                   d1.output();
                   return 0;
            }