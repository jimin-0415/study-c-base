
#include <iostream>
#include <string>
#include <Windows.h>

#pragma execution_character_set("utf-8")

#include "R_Value.h"

//표준 입출력 라이브러리

using namespace std;

void F(A* a) {
    

    try {
        A k = a[20];
    }
    catch (out_of_range) {
        cout << "Out of Range" << endl;
    }
}

int main()
{
    //SetConsoleOutputCP(CP_UTF8);
    wcout << L"이거 왜 안돼";
    R_Value r;
    r.main();

    //int i = 20.2; 
    ////int i2 { 20.2 };//리스트 양식 초기화 시 부동 소수점이기 때문에 에러
    //double in3{ 20.2 };
    //
    ////auto 키워드의 경우 명시적 언급이 없을 경우 

    //int a = 10;
    //const int b = 20;
   
    //std::string a3 = "sdd";
    //char* a4 = &a3[1];

    //cout << a4 << endl;
    //cout << &a4 << endl;
    //cout << *a4 << endl;

    //int b1 = 40;
    //int* b2 = &b1;

    //cout << b2 << endl;
    //cout << *b2 << endl;
    //cout << &b2 << endl;

    //int c1 [10] { 1,2,3,4,5,6,7 };

    ////범위 기반 for문, 첫번째 부터 마지막까지 복사본을 저장한 후 출력을 진행한다.
    //for (int i : c1) {
    //    cout << i << endl;
    //}

    //for (int i : {1, 2, 3, 4, 5, 6, 7}) {
    //    cout << i << endl;
    //}

    ////범위 기반 for문 Test Create
    //A array[3] = { A(1), A(2), A(3) };
    //for (auto a : array) {
    //    cout << a.value << endl;
    //}

    ////1개 복사후 진행, 1개 복사 후 진행
    //for (A a : array) {
    //    cout << a.value << endl;
    //}

    ////복사 하지 않음
    //for (A& a : array) {
    //    cout << a.value << endl;
    //}
    //
    ////Try Catch 예외 처리
    //

    //wcout << "이거 왜 안돼" << endl;
}
