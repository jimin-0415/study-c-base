#pragma once

#include <iostream>
using namespace std;

class A {
public:
	A(int data) //생성자
		:m_data(data)
	{
		wcout << L"일반 생성자 호출" << endl;
	}
	~A() //소멸자
	{ 
		wcout << L"소멸자 호출" << endl;
	}
	A(const A& a)
		:m_data(a.m_data) 
	{
		wcout << L"복사 생성자 호출" << endl;
	}

private:
	int m_data;
};

class R_Value
{
public:
	R_Value();
	~R_Value();

public:
	void main();
};

