#include "Print.h"

#include<string>

#include<iostream>

#include<queue>



using namespace std;



/*****************************************************

    Description: �������

	Input��һ������ 

	Ouput�������е�ÿ����Ԫ������ 

	Return���޷���ֵ 

*****************************************************/ 



void Print::print(queue<string>que_input) //���queue

{ 

	int count2 = que_input.size(); //����һ���������ڶ��г���

	for (int k=0; k<count2; k++) 

	{

		cout << que_input.front() << endl;

		que_input.pop();

	}

}
