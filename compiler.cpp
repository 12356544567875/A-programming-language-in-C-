// including my own custom C++ library the source code of this library is in my github so if you are intrested in this so you can get this
#include "asdoco.h"

// terminal - main function
int main(){
	
	// creating a infinite line generator
	bool line = true;
	// creating code
	string code;
	for (int lines = 1;line = true;lines++){
		
		// all main code will be here
		
		// input code
		cin>>code;
		
		// print statement
		if (code == "print:"){
			string data_print;
			cin>>data_print;
			cout<<endl<<endl<<data_print<<endl;
		}
		
		// syntax error
		else if (code == "print"){
			cout<<endl<<"Syntax error at line "<<lines<<" . please use ':' after print"<<endl;
		}
		
	}
	
	return 0;
}