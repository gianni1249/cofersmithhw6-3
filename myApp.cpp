#include <iostream> 
#include <string>
#include "record.h"
#include "phoneBook.h"


using namespace std;


int main(){
        Phonebook s("Friends");
	int choice;
	int contactNum;
	string contact;

	      cout << "     **** PHONEBOOK APP******   " << endl;
	while(choice != 5){
	      cout << "-------------------------------------" << endl;
	      cout << "1. Insert name and number" << endl
		   << "2. Get a number for a person" << endl
		   << "3. Display phone book" << endl
		   << "4. Remove person from phonebook" << endl
	           << "5. Quit" << endl
		   << " Enter your choice: " << endl;
		   cin >> choice;
	           cout << "You choose: " << choice << endl;
	

	switch(choice)
	{
            case 1:
		    cout << "Enter name and number" << endl;
		    cin >> contact >> contactNum;
		    cout << "You entered: " << contact << endl;
		    cout << "You entered: " << contactNum << endl;
		    s.insert(contact,contactNum);
		    
		    

		    break;
	    case 2:
		    cout << "Enter contacts name: " << endl;
		    cin >> contact;
		    cout << "You entered: " << contact << endl;
		    s.getPhoneNumber(contact);

		    break;
	    case 3: 
		    s.displayPhoneBook();
		    break;   
	    case 4:
		    cout << " Enter contacts name to remove: " << endl;
		    cin >> contact;
		    s.removeName(contact);   
		    break;
	    case 5:
		    cout << "Quitting Program. Goodbye!" << endl;
	}
	
		    
	}

}
