#include "Scan.h"
#include<string>
#include<iostream>
#include<queue>

using namespace std;


	queue<string> Scan::ToStringQueue (string input)
	{    
	    queue<string>que_input;
		string num=""; //�������� 
		string sym=""; //������� 
		int count=0; //��¼����λ�� 
		int i; 
		int temp=0; //��¼�����Ƿ���� 
		
		for(i=0; i<input.size(); i++)
		{
			if(input[i] >= '0' && input[i] <= '9' || input[i]=='.') //�ж������ֻ�С���� 
			{
				num+=input[i]; //��¼������ 
				count++;   //��¼������λ�� 
				if(count>10)  //������ʮλ��������ѭ�� ��ͬʱ��¼�´��� 
				{
					cout << "More than ten...Error!" << endl;
					num="";
					break;
					temp=1;
				}
			}
			
			else if(input[i]=='+' || input[i]=='-' || input[i]=='*' || input[i]=='/' || input[i]=='(' || input[i]==')') //�ж��Ƿ��� 
			{
				if(num!="") //�жϸ÷���֮ǰ�Ƿ�Ϊ���� 
				{
					que_input.push(num);  //��֮ǰΪ���֣���������� 
					num="";    //������ִ������ 
					count=0;  //��ռ�¼����λ������ 
				}
				sym=input[i]; 
				que_input.push(sym); //���ַ�push��queue�� 
			}
		}
		
		if(num!="") //�ж��ַ������һλ�ǲ������� 
			{
				que_input.push(num); 
				num="";
				count=0;
			}
	
		if(temp==1) //���������queue��ֹ��� 
		{
			int count1=que_input.size();
		    for(int j=0; j<count1; j++)
		    {
			    que_input.pop();
	    	}
		}
		return que_input;
	}
