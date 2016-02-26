#include "Print.h"
#include<string>
#include<iostream>
#include<queue>

using namespace std;

void Print::print(queue<string>que_input) //输出queue 
	{
		int count2=que_input.size(); //设置一个变量等于队列长度 
		for(int k=0; k<count2; k++) 
		{
		    cout<<que_input.front()<<endl;
			que_input.pop();
		}
	}
