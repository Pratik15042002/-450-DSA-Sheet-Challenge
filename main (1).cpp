
#include <iostream>

using namespace std;

class student{
    string name;
    public:
    
     int age;
     bool gender;
     student(){
         cout<<"default constutirtr"<<endl;
     }
     
     
       //parametereized constructor
       student(string s,int a, bool g){
           cout<<"parametereized constructor"<<endl;
    name=s;
    age=a;
    gender=g;   
}     
student(student &a){
    cout<<"copy  constructur"<<endl;
    
    name=a.name;
    age=a.age;
    gender=a.gender;
    cout<<"deep copy  not shallow copy"<<endl;
}

~student(){
    cout<<"destrccutor called"<<endl;
}

       void setname(string s){
           name=s;
           
       }
        void getname(string s){
           cout<<name<<endl;
       }
       void print(){
           cout<<name;
           cout<<age;
           cout<<gender;
       }
       
       
       //operator overlaoding
       bool operator ==(student &a){
         if (name==a.name&&age==a.age&&gender==a.gender){
             return true;
       }
       else{
           return false;
       }
       } 
};

int main()
{
/* student arr[3];
 for( int i=0;i<2;i++){
     cout<<"enter details"<<endl;
     string s;
     cin>>s;
     arr[i].setname(s);
     cin>>arr[i].age;
     cin>>arr[i].gender;
     
 }
 for( int i=0;i<2;i++){
     arr[i].print();
     
 }
*/
student a("URfi",20,1);/*
a.getname();
*//*
a.print();*/
student b("rahul",21,0);
student c(a);  //deafult copy constuctiir  ,
/*
student d=a;
*/
if(c==a){
    cout<<"same"<<endl;
}
else{
    cout<<"not same"<<endl;
}



    return 0;
}