
#include<iostream>
#include<string>
#include<sstream>
#include "phoneBook.h"

using std::cout;
using std::endl;


Phonebook::Phonebook(){}

Phonebook::Phonebook(string s){
	
	s = bookName;
}

void Phonebook::insert(string s, int n){

       if (num_records < MAXSIZE){
	       list[num_records] = Record(s,n);
	       ++num_records;
	       cout << "Inserted " << s << "in phone book." << endl;
       }
       else{
	       cout << "Phone book is full!" << endl;
	       cout << "Did not insert " << s << endl;
       }
       

}

void Phonebook::displayPhoneBook(){
	cout << "***********************************************" << endl;
	cout << "Displaying Contacts: " << endl;
	for(int i=0; i < num_records; i++){

		cout << " Contact Name: " << list[i].getName() << " Number: " << list[i].getNumber() << endl;
	}

}

void Phonebook::removeName(string s){
	
	for(int q=0; q < num_records; q++){

		if(s.compare(list[q].getName()) == 0){
			cout << "Deleting " << s << " from contacts " << endl;
			list[q].setName("");
			list[q].setNumber(0);
		}
		else{
			cout << "Invalid contact" << endl;
		}	
	}
}
int Phonebook::getPhoneNumber(string s){

	for(int w=0; w < num_records; w++){
		if(s.compare(list[w].getName()) == 0){
			cout << list[w].getName();
			}
			else{ cout << "Invalid Contact!" << endl; }	
	}
}

string Phonebook::getPhoneBookName(){

	        return bookName;
}

int Phonebook::getNumberofRecords(){

	        return num_records;
}
Phonebook::~Phonebook(){}
