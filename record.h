/** File name: record.h 
* Class for holding name and phone number of a person.
*
*/

#ifndef RECORD_H
#define RECORD_H

// std::string needed because using type string
using std::string;

class Record {
	private:
	 	string name;
		int number;
	public:
		Record();
		Record(string name, int number);
		string getName();
		int getNumber();
		void setName(string s);
		void setNumber(int n);
		~Record();
};

#endif //RECORD_H



