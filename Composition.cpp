#include<iostream>
using namespace std;
class Engine
{
public:
Engine(){
cout<<"Engine Created."<<endl;
}
~Engine(){
cout<<"engine Destroyed."<<endl;
}
void Start(){
cout<<"Engine Started."<<endl;
}
};
class Car{
private:
Engine engine;
public:
Car(){
cout<<"Car Created."<<endl;
}
~Car(){
cout<<"Car destroyed."<<endl;
}		
void Drive(){
engine.Start();
cout<<"Car is Driving."<<endl;
}
};
int main(){
Car myCar;
myCar.Drive();
return 0;
}


