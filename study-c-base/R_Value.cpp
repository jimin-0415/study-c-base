#include "R_Value.h"

R_Value::R_Value()
{
}

R_Value::~R_Value()
{
}

//Rvalue 레퍼런스는 우측값 참조 라는 새로운 기능이다.

void R_Value::main()
{
	A a(1);
}
