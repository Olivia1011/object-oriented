#include "Scan.h"
#include "Print.h"
#include "Priority.h"
#include "Calculation.h"
#include<iostream>
#include<queue>
#include<string>
#include<stack>
#include<ctype.h>

using namespace std;
double Calculation::Calculate(string str,double num1,double num2)
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

void Calculation::Separate(queue<string>que_input) 
{
	stack<double>stanum;
	stack<string>stasym;
		stasym.push("#");
	
	string temp = que_input.front();
	
	que_input.push("#");
	stanum.push(0);
	
	int i;
	double num1,num2,result; 
	char sign;
	Priority Pri;
	string Sign;
	
	//	char Priority::ReturnPriority(string str1,string str2);
	//	double Priority::Change(string str);
		
	while(temp != "#" || stasym.top() != "#")
	{
		if(temp  == "+" || temp == "-" || temp == "*" || temp == "/"       //判断是符号
		                                          || temp == "(" || temp == ")" || temp == "#") //是运算符 
		{
			sign=Pri.ReturnPriority(stasym.top(),temp);
			if (sign == '>')
			{
				num1 = stanum.top();
				stanum.pop();
				
				num2 = stanum.top();
				stanum.pop();
				
				Sign = stasym.top();
				stasym.pop();
				
				result = Calculate(Sign,num2,num1);
				stanum.push(result);
				
				
				
			
			}
			if (sign == '<')
			{
				stasym.push(temp);
				que_input.pop();
				temp = que_input.front();
			}
			if (sign == '=')
			{
				stasym.pop();
				que_input.pop();
				temp = que_input.front();
			}
			
			
		}
		else   //是数字 
		{
		
			stanum.push(Pri.Change(temp));
			que_input.pop();
		    temp = que_input.front();
	    }
		
		
	}
	cout << stanum.top() << endl;
	
}




void Calculation::CoutResult()
{
} 
