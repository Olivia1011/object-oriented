#include "Scan.h"
#include "Print.h"
#include<iostream>
#include<queue>
#include<string>
#include<iostream>

using namespace std;

int main()
{
	string character;
	queue<string>que_character;
	Scan INPUT;
	Print OUTPUT;
	cin >> character;
	que_character = INPUT.ToStringQueue (character);
	OUTPUT.print(que_character);
	return 0;
}
