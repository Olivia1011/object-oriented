#include "Scan.h"
#include "Print.h"
#include "Priority.h"
#include "Calculation.h"
#include<iostream>
#include<queue>
#include<string>
#include<sstream>
#include<stack>
#include<ctype.h>

using namespace std;

int main(int argc, char* argv[])
{
	bool flag = false;
	stack <double>result;
	string character;
	queue<string>que_character;
	Scan INPUT;
	cin >> character;
	Print OUTPUT;
	Calculation CAL;
	//Calculation RES;
	
	character = argv[1];
	
	if(character == "-a")
	{
		character = argv[2];
		flag = true;
	}
	if(flag)
	{
		cout << character << "=";
	}*/ 
	
	 ;
	CAL.Separate(INPUT.ToStringQueue (character));
	RES.CoutResult(result);
	OUTPUT.print(que_character);
	return 0;
}
