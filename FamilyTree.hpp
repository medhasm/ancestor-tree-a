#include <stdio.h>
#include <string>
#include<iostream>
using namespace std;
namespace family{

class Tree{
string name;
public:
Tree(string name){
this->name=name;}
Tree addFather(string name,string fathername);
Tree addMother(string name,string mothername);
string relation(string name);
string find(string name);
void display();
bool remove(string name);
};

}
