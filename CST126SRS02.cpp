// CST126SRS02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <ostream>
#include <string>
using namespace std;
int main()
{
	string name[257];
	string array[] = { 0 };
	int size = 0;
	string Names;
	cout << "What are the names you wish to input?" << endl;
	cin >> setw(256) >> Names;
	getline(cin, Names);
	for (int x = 0; x < Names.length(); x++) 
	
		for (int i = 0; i < x; i++) 
		
			cin >> array[i];
			cout << "Names in reverse order" << endl;
			for (i = x; x >= 0; i--) 
			
				cout << array[i];
			
		
	
	
    return 0;
	
}

