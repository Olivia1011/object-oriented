#include "Scan.h"
#include<string>
#include<iostream>
#include<queue>

using namespace std;

/*****************************************************
    Description: 处理输入的字符串将其分开存入队列中 
	Input：一个字符串 
	Ouput：一个队列 
	Return：要求的队列 
*****************************************************/ 

queue<string> Scan::ToStringQueue (string input)
{
	queue<string>que_input;
	string num = ""; //储存数字
	string sym = ""; //储存符号
	int count = 0; //记录数字位数
	int i;
	int temp = 0; //记录输入是否出错

	for (i=0; i<input.size(); i++) 
	{
		if (input[i] >= '0' && input[i] <= '9' || input[i] == '.')     //判断是数字或小数点
		{ 
			num += input[i]; //记录下数字
			count++;   //记录下数字位数
			if (count > 10)     //若超出十位报错并跳出循环 ，同时记录下错误
			{ 
				cout << "More than ten...Error!" << endl;
				num  ="";
				break;
				temp = 1;
			}
		}

		else if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/'       //判断是符号
		                                          || input[i] == '(' || input[i] == ')') 
		{
			if (num != "")      //判断该符号之前是否为数字
			{ 
				que_input.push(num);  //若之前为数字，将数字输出
				num = "";      //清空数字储存变量
				count = 0;  //清空记录数字位数变量
			}
			sym = input[i];
			que_input.push(sym); //将字符push到queue上
		}
	}

	if (num != "")      //判断字符串最后一位是不是数字
	{ 
		que_input.push(num);
		num = "";
		count = 0;
	}

	if (temp==1)      //若出错清空queue防止输出
	{
		int count1 = que_input.size();
		for (int j = 0; j < count1; j++) 
		{
			que_input.pop();
		}
	}
	return que_input;
}
