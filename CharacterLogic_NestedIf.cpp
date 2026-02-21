#include<iostream>
using namespace std;
int main(){

	char ch;
	cout<<"Enter a character: ";
	cin>>ch;
	
	if(isalpha(ch)){cout<<"You entered alphabet :"<<endl;
	if(isupper(ch)){
	char ch2=tolower(ch);
	
	cout<<"This it is upper case, its lower case is   "<<ch2;
	}

  
  	else if(islower(ch)){cout<<"This is lower case";
  	char ch3=(toupper(ch));
  	{cout<<"This is lower case, its upper case  "<<ch3;
	  }
	  
}
	  }
  
  else if(isdigit(ch)){cout<<"You entered a digit :";
  }
  
  else{cout<<"You entered special character :";
  }
}
