
#include <iostream>
#include <string>
//표준 입출력 라이브러리

using namespace std;

int main()
{
    int i = 20.2; 
    //int i2 { 20.2 };//리스트 양식 초기화 시 부동 소수점이기 때문에 에러
    double in3{ 20.2 };
    
    //auto 키워드의 경우 명시적 언급이 없을 경우 

    int a = 10;
    const int b = 20;
   
    std::string a3 = "sdd";
    char* a4 = &a3[1];

    cout << a4 << endl;
    cout << &a4 << endl;
    cout << *a4 << endl;

    int b1 = 40;
    int* b2 = &b1;

    cout << b2 << endl;
    cout << *b2 << endl;
    cout << &b2 << endl;

    int c1 [10] { 1,2,3,4,5,6,7 };

    for (int i : c1) {
        cout << i << endl;
    }

    for (int i : {1, 2, 3, 4, 5, 6, 7}) {
        cout << i << endl;
    }


    std::cout << "Test" << std::endl;
}
