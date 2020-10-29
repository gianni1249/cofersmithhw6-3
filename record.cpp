
#include <iostream>
//#include<fstream>
//#include<string>
//#include<sstream>
#include "record.h"

using std::cout;
using std::endl;


//using namespace std;
Record::Record(){}

Record::Record(string n, int num){
	name = n;
	number = num;
}

void Record::setName(string s){

	name = s;
}

string Record::getName(){

	return name;
}
void Record::setNumber(int n){

	number = n;
}

int Record::getNumber(){
	return number;
}


Record::~Record(){}

