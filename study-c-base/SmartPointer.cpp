#include "SmartPointer.h"

#include <iostream>
using namespace std;

class A
{
public:
	A(){
		cout << "A()" << endl;
	}

	~A(){
		cout << "What is" << endl;
	}
};




void SmartPointer::main()
{
	A* testA = new A();
	shared_ptr<A> p1(testA);
	cout << "p1 Shared Point Count : " << p1.use_count() << endl;
	shared_ptr<A> p2(p1);
	cout << "p2 Shared Point Count : " << p2.use_count() << endl;

	cout << testA << endl;
	cout << p1 << endl;
	cout << p2 << endl;
	
	shared_ptr<A> p3(p2);
	cout << "UserCount Test" << endl;
	cout << "p1 Shared Point Count : " << p1.use_count() << endl;
	cout << "p2 Shared Point Count : " << p2.use_count() << endl;
	cout << "p3 Shared Point Count : " << p3.use_count() << endl;

	//Shared_Ptr 생성 방법으로 해당 방법은 좋은 방법이 아니다.
	shared_ptr<A> a1(new A()); //A 생성 ,Shared_ptr 생성
	shared_ptr<A> a2 = make_shared<A>(); //A생성과 Shared_ptr생성을 공통으로 실행한다.


}
