#include <iostream>

using namespace std;

bool isUnique(string nString) //boolen function returns 0 or 1 based on the codes below
{
	for (int i=0; i<nString.length();i++){ //first for loop to compare
		for (int j=0; j<nString.length();j++){ //Second for loop to compare with the first
			if (nString[i] != nString[j]){ //this line checks is any characters are repeating
				return true; //if any character repeats then return true (1)
			}
		}
	}
	
	
}

int main()
{
	string anyString;
	cout<<"Type a string of characters (no spaces): ";
	cin>>anyString;
	
	if(isUnique(anyString)){
	
	cout<<"Your string is unique."<<endl;
	}
	else
	cout<<"Your string is not unique"<<endl;
	return 0;

}
	
