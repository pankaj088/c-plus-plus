#include<iostream>

using namespace std;

class employee{    // class ka kam hi yahi hai ki ak nya deta coustem type define kar detai hai 
    int id;
    int salary;
     public:
     void setId(void){
         salary = 125;  // salary set kar diya sab employee kai liyai
         cout<<"enter the id of employee"<<endl;
         cin>>id;
     }

     void getId(void){
         cout<<"the id of this employee is "<<id<<endl;
     }

};

int main(){
    // employee pankaj ,nitish, abhishiek ;
    // pankaj.setId();
    // pankaj.getId();

    employee fb[3];
    for( int i = 0; i < 3; i++){

        fb[i].setId();
        fb[i].getId();
    }

    
    return 0;
}