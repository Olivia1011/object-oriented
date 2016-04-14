#include "Priority.h"
#include <string>
#include <sstream>

using namespace std;

string SymPriority[10];
int num[1000];

void Priority::priority() 
{

	
	SymPriority[0] = ">><<<>>";
	SymPriority[1] = ">><<<>>";
	SymPriority[2] = ">>>><>>";
	SymPriority[3] = ">>>><>>";
	SymPriority[4] = "<<<<<= ";
	SymPriority[5] = ">>>> >>";
	SymPriority[6] = "<<<<< =";
	
	num['+'] = 0;
	num['-'] = 1;
	num['*'] = 2;
	num['/'] = 3;
	num['('] = 4;
	num[')'] = 5;
	num['#'] = 6;
	
}

int Priority::isnum(string str)
{
	return (num[str[0]]);
}

char Priority::ReturnPriority(string str1,string str2) 
{
	priority();
	return SymPriority[isnum(str1)][isnum(str2)];
}

/**********
bool Priority::Judge(string str) //isopr
{
	if(str == '+' || str == '-' || str == '*' || str == '/'      
		  || str == '(' || str == ')')
	{
		return true
	}
	else
	{
		return false;
	}
}
******/

double Priority::Change(string str)
{
	std::stringstream stream;
	double k;
	stream.clear();
	stream << str;
	stream >> k;
	return k;
	
}

