#include<iostream>
using namespace std;
class Engine{
public:
string type;
int horsepower;
Engine(string t, int hp):type(t),horsepower(hp){}
void ShowEngineDetails(){
cout<<"Engine Type:"<<type<<endl;
cout<<"Horse Power:"<<horsepower<<endl;
}
};
class Car{
private:
Engine engine;
public:
string model;
int year;
Car(string m, int y, Engine e):model(m),year(y),engine(e){}
void ShowCarDetails(){
cout<<"Model:"<<model<<endl;
cout<<"Year:"<<year<<endl;
engine.ShowEngineDetails();
}
};
int main(){
Engine myEngine("V8",400);
Car myCar("G-Wagon",2023,myEngine);
myCar.ShowCarDetails();
return 0;
}