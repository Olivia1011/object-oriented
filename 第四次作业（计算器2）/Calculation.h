#ifndef CALCULATION_H

#define CALCULATION_H

#include<string>

#include<iostream>

#include<queue>

#include<stack>

#include<ctype.h>



using namespace std;



class calculator

{

	public:

		

		stack <double>Separate(queue<string>que_input) ;

		double Calculate(string str,double num1,double num2);

		void CoutResult(stack<double>sta);

		

	protected:

};



#endif
