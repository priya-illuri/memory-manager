// dllproject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "mydll\mydll.h"

#include<iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << getAge()<<"\n";
	cout << getName() << "\n";
	system("PAUSE");
	return 0;
}

