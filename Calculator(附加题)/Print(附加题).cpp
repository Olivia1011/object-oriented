#include "Print.h"
#include<string>
#include<iostream>
#include<queue>

using namespace std;

/*****************************************************
    Description: 输出队列
	Input：一个队列 
	Ouput：队列中的每个单元逐个输出 
	Return：无返回值 
*****************************************************/ 

void Print::print(queue<string>que_input) //输出queue
{ 
	int count2 = que_input.size(); //设置一个变量等于队列长度
	for (int k=0; k<count2; k++) 
	{
		cout << que_input.front() << endl;
		que_input.pop();
	}
}
