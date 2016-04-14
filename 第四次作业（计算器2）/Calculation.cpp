#include "Scan.h"
#include "Print.h"
#include "Calculation.h"
#include<iostream>
#include<queue>
#include<string>
#include<stack>
#include<ctype.h>

using namespace std;


stack <double>calculator::Separate(queue<string>que_input) 
{
	stack<double>stanum;
	stack<string>stasym;
	string temp = que_input.front();
	que_input.push("#");
	stasym.push("#");
	stanum.push(0);
	
	int i;
	double num1,num2,result; 
	char sign;
	string Sign;
	
		char ReturnPriority(string str1,string str2);
		double Change(string str);
	while(temp != "#" || stasym.top() != "#")
	{
		if(temp  == "+" || temp == "-" || temp == "*" || temp == "/"       //判断是符号
		                                          || temp == "(" || temp == ")") //是运算符 
		{
			sign=ReturnPriority(stasym.top(),temp);
			if (sign == '>')
			{
				num1 = stanum.top();
				stanum.pop();
				
				num2 = stanum.top();
				
				Sign = stasym.top();
				result = Calculate(Sign,num2,num1);
				stanum.push(result);
				
				
				
			
			}
			if (sign == '<')
			{
				stasym.push(temp);
				temp = que_input.front();
				que_input.pop();
			}
			if (sign == '=')
			{
				stasym.pop();
				temp = que_input.front();
				que_input.pop();
			}
			que_input.pop();
			
			
			
		}
		else   //是数字 
		{
		
			stanum.push(Change(temp));
			temp = que_input.front();
			que_input.pop();
	    }
		
		
	}
	return stanum;
	
}


double calculator::Calculate(string str,double num1,double num2)
{
	double result;
	if (str == "+")
    {
    	result = num1 + num2;
    }
    else if (str == "-")
    {
    	result = num1 - num2;
    }
    else if (str == "*")
	{
		result = num1 * num2;
	} 
    else if (str == "/")
    {
    	result = num1 / num2;
    }
    return result;
}

void calculator::CoutResult(stack<double>sta)
{
	cout << sta.top() << endl;
} 
