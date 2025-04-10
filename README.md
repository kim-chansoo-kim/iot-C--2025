# iot-Cpp-2025
IoT 개발자 C++언어 리포지토리

## 1일차

### C ++ 기초 화면 출력
- cout - 출력을 담당하는 객체
- endl - 개행을 시켜주는 객체(출력 후 한칸 뛰어쓰기)
- ::   - 범위를 나타내는 스코프
- cin  - 입력을 담당하는 객체

	```c++
	#include <iostream>
	using namespace std;						// std라는 namespace를 사용하겠다

	int main()
	{	
		// 변수
		int num = 100;
		char str[100] = "홍길동";
		double d = 3.14;
		
		std:: cout << "abcdefg";		
		std:: cout << num << std:: endl;
		std:: cout << str << std:: endl;
		cout << d << endl;						// using namespace std; - 이 구문을 통해 앞에 std를 안붙여도 실행

		return 0;
	}
	```

### 함수의 다형성

- 함수 오버로딩 
	- 함수의 다중정의
	```c++
	/*
	함수 오버로딩(다중정의) : 이름은 같지만 매개변수의 타입, 갯수 등이 다르면 다른 함수이다.
	*/
	#include <iostream>
	using namespace std;

	int func() { return 10; }
	int func(char c) { return c; }
	int func(int n) { return 10 + n; }
	int func(int n1, int n2) { return n1 + n2; }
	//char func(char c) { return c; } - 8line과 충돌 // 타입과 상관없이 변수가 같을 수는 없다

	int main()
	{
		cout << func() << endl;			// int func() { return 10; }
		cout << func('a') << endl;		// 97 아스키코드로 a - func(char c)의 출력
		cout << func(10) << endl;		// int func(int n) { return 10 + n; }
		cout << func(10, 20) << endl;	// int func(int n1, int n2) { return n1 + n2; }


		return 0;
	}
	```
- 함수 오버라이딩 
	- 함수의 재정의 --> 상속

### 디폴트 매개변수

1. 입력이 없으면 디폴트 매개변수가 적용된다
	```c++
	#include <iostream>
	int func(int num = 10) {
		return num * num;
	}

	int main()
	{
		int res;
		res = func(10);
		std::cout << res << std::endl;

		res = func(0);
		std::cout << res << std::endl;

		res = func();						// 입력이 없으면 디폴트 매개변수가 적용된다.
		std::cout << res << std::endl;
		return 0;
	}
	```

2. 디폴트 매개변수를 여러개 적용할때 가장 오른쪽부터 순서대로 작성한다
	```c++
	#include <iostream>
	#include <math.h>
	using namespace std;
	int coordinates(int x, int y = 0, int z = 0);		// default값은 선언(원형)에만 작성한다.

	int main()
	{
		cout << "(10, 20, 30): " << coordinates(10, 20, 30) << endl;
		cout << "(10, 20, def): " << coordinates(10, 20) << endl;
		cout << "(10, def, def): " << coordinates(10) << endl;

		return 0;
	}

	int coordinates(int x, int y, int z)
	{
		int res = 0;
		res = pow(x, 2) + pow(y, 2) + pow(z, 2);	// 제곱
		return sqrt(res);							// 제곱근
	}
	```

- 함수 오버로딩중 디폴트 매개변수와 입력이 없는 순수한 함수 정의가 있을 때,
  입력없는 함수 호출시 문제가 발생한다
	```c++
	#include <iostream>
	using namespace std;

	int func(int n = 0) { return n * n; }
	int func() { return 10; }

	int main()
	{
		cout << func(10) << endl;
		// cout << func() << endl; 위에 두함수를 구분 못함

		return 0;
	}
	```

### namespace

- 이름 충돌을 방지하기 위한 기능
-  :: 연산자로 네임스페이스 내부 요소를 접근할 수 있다
- using 키워드로 네임스페이스 생략가능
	- using namespace를 사용하면 네임스페이스 생략이 가능하지만, 충돌 위험이 있다
	```c++
	#include <iostream>
	namespace aName
	{
		void func()
		{
			printf("aName::func()\n");
		}
	}
	namespace bName
	{
		void func()
		{
			printf("bName::func()\n");
		}
	}
	namespace cName
	{
		void func()
		{
			printf("cName::func()\n");
		}
	}
	using namespace cName;
	int main()
	{
		aName::func();
		bName::func();
		func(); // using을 사용해 func()를 사용했을때 cName이 나옴
		return 0;
	}
	```

### new

1. 메모리 동적 할당: new - delete
2. 자료형 포인터 = new 자료형(크기)
3. new는 생성자를 호출한다.(즉 new는 객체를 생성시킨다)
4. 객체를 생성하기 위해서는 생성자 호출이 있어야 한다
5. new는 생성자 호출이되므로 초기화가 가능하다
	- 생성자 - 객체를 생성하고, 초기화시키는 기능을 가지는 특별한 메서드이다

	```c++
	#include <iostream>
	using namespace std;

	int main()
	{
		int* parr;
		parr = new int[3] {10, 20, 30};				// 이름없는 배열객체 생성하고 10, 20, 30으로 초기화
													// parr = new int[3] = {10, 20, 30};
		cout << parr[0] << ", " << parr[1] << ", " << parr[2] << endl;
		delete[] parr;								// new가 나오면 반드시 delete가 따라온다
		return 0;
	}
	```

### Reference

- 또 다른 이름(별명)
	```c++
	#include <iostream>
	using namespace std;

	void chFunc(int& rn)			// & 래퍼런스(참조변수) 선언
	{
		rn = 20;
	}

	int main()
	{
		int n = 10;
		cout << "호출 전 n: " << n << endl;

		chFunc(n);					// 호출 후 n = 20

		cout << "호출 후 n: " << n << endl;
		return 0;
	}
	```
- 원형과 같은 메모리를 공유한다
- 레퍼런스를 통해 원본 변수에 접근하고 수정할 수 있다
- const 레퍼런스는 원본 변경을 방지하며, 임시 객체도 참조 가능하다
- 선언과 동시에 반드시 초기화해야만 한다
- 상수레퍼런스 - 상수도 참조 가능하다.

	```c++
	#include <iostream>
	using namespace std;

	int main()
	{
		int n = 10;
		// int& ref = n;
		// int& ref = 10; - 원래는 참조기 때문에 메모리를 저장할 수 없다
		const int& ref = 10;	// 상수레퍼런스로 선언하면 리터럴도 참조할 수 있다
								// 임시객체를 저장할 수 있는 공간이 생성된다.

		cout << "ref: " << ref << endl;

		return 0;
	}
	```

<img src="./image/포인터와 레퍼런스의 차이.png" width="700">

### c++ 구조체

## 2일차

### class

1. 접근제어 지시자
	- private - 클래스 내(클래스 내에 정의된 함수)에서만 접근허용
	- public - 어디서든 접근 허용
	- protected - 상속관계에 놓여있을 때, 유도 클래스에서의 접근허용
	
2. 멤버변수
	- 속성, private 영역
	
3. 멤버함수(메서드)
	- 기능, public 영역

	`TIP)객체가 어떤 클래스로부터 만들어졌는지 이야기 할때 인스턴스라고 부름`

	```c++
	#define _CRT_SECURE_NO_WARNINGS
	#include <iostream>
	#include <cstring>

	using namespace std;

	class MyClass
	{
	private:
		int id;
		char* name;
		int age;
	public:
		MyClass() : id(0), age(0), name(nullptr) {}					// 기본생성자 초기화 까지

		MyClass(int _id, const char* _name, int _age);				// 매개변수가 있는 생성자

		~MyClass() { delete name; }									// 소멸자(자동호출, 동적할당경우 말고는 별도로 작성할 필요없음)
																	// 동적 메모리 해제 [] == 타입이 배열이 아니기 때문에 필요가 없음

		void getData() const;
	};
	// 밖에서 작성할때는 항상 소속을 알려줘야함 MyClass::
	MyClass::MyClass(int _id, const char* _name, int _age)			// 매개변수가 있는 생성자
	{
		id = _id;
		name = new char[strlen(_name) + 1];							// 동적 메모리 할당
		strcpy(name, _name);										// char은 무조건 초기화
		age = _age;
	}

	void MyClass::getData() const									// 상수 멤버 함수(모든 멤버들을 상수화 시킨다)
	{
		cout << "ID: " << id << endl << "이름: " << name << endl << "나이: " << age << endl;
	}

	int main()
	{
		MyClass obj2(1, "김철수", 20);
		obj2.getData();
		return 0;
	}
	```
	
	#### 생성자	

	1. 생성자는 객체가 생성될 때 자동으로 호출됨.
    2. 생성자는 클래스 이름과 동일하며, 반환형이 없음.
    3. 생성자를 사용하면 멤버 변수를 쉽게 초기화할 수 있음.
    4. 멤버 이니셜라이저 리스트 (: m_x(x)) 사용이 더 효율적.
    5. 생성자는 여러 개(오버로딩) 만들 수 있음.

	#### 초기화

	1. 변수 초기화
		- 복사 초기화 - 대입연산자 사용
		- 직접 초기화 - 소괄호 사용
		- 중괄호 복사 초기화 (c++ v.11부터사용)
		- 중괄호 직접 초기화
	2. 클래스 객체 초기화
	3. 콜론 초기화 - 객체가 생성됨과 동시에 초기화가 이루어져야하는 경우 사용
		- 상수 멤버변수 초기화
		- 레퍼런스 초기화
		- 객체 멤버변수 초기화

## 3일차
- 디폴트로 자동으로 제공받는 생성자
	- 디폴트 생성자
	- 복사 생성자
	- 소멸자

### 복사생성자
- 복사 생성자는 const 타입으로 참조를 받아야함
- 객체를 복사할 때 호출됨

const 참조를 받아야하는 이유
	- 값으로 전달하면 또 복사가 발생해서 무한 루프에 빠질 수 있음
	- 불필요한 복사를 방지하기 위해 참조(&)로 받아야 함

동적 할당을 받는 복사생성자
	- 생성자에 동적할당을 함
	- 복사 생성자에서 동적할당을 하면 깊은 복사
	- 복사 생성자에서 동적할당을 하지 않으면 얕은 복사


#### STL(Standard Template library)
- container: 객체를 저장하고 관리하는 자료구조
- 컨테이너 종류
	1. 시퀀스 컨테이너 - 선형적으로 데이터 저장(순서), vector, list, queue
	2. 연관 컨테이너 - 일정한 규칙으로 저장, set, multiset, map, multimap
	3. 컨테이너 어댑터 - 변형

v.front(); - 첫번째 원소를 참조합니다.
v.back(); - 마지막 원소를 참조합니다.
v.clear(); - 모든 원소를 제거합니다.
	- 원소만 제거하고 메모리는 남아있습니다.
	- size만 줄어들고 capacity는 그대로 남아있습니다.
- v.push_back(7); - 마지막 원소 뒤에 원소 7을 삽입합니다.
- v.pop_back(); - 마지막 원소를 제거합니다.
- v.begin(); - 첫번째 원소를 가리킵니다. (iterator와 사용)
- v.end(); - 마지막의 "다음"을 가리킵니다 (iterator와 사용)
- v.rbegin(); - reverse begin을 가리킨다 (거꾸로 해서 첫번째 원소를 가리킵니다)- iterator와 사용.
- v.rend();- reverse end 을 가리킨다 (거꾸로 해서 마지막의 다음을 가리킵니다)- iterator와 사용.
- v.reserve(n);- n개의 원소를 저장할 위치를 예약합니다(미리 동적할당 해놉니다)
- v.resize(n);- 크기를 n으로 변경한다.- 더 커졌을 경우 default값인 0으로 초기화 한다.
- v.resize(n,3);- 크기를 n으로 변경한다.- 더 커졌을 경우 인자의 값을 3으로 초기화한다.
- v.size();- 원소의 갯수를 리턴한다.
- v.capacity();- 할당된 공간의 크기를 리턴한다.
	- 공간 할당의 기준은 점점 커지면서로 capacity를 할당하게 됩니다.
	- **size와 capacity에 관계는 4번 항목에서 설명드립니다. 
	- 중요하니 꼭 보고 가세요v2.swap(v1);- v1과 v2의 원소와 capacity 바꿔줍니다. (모든걸 스왑해줌)
	- v1의 capacity를 없앨때 (할당한 메모리를 프로그램이 끝나기 전에 없애고 싶을때) 사용하기도 합니다.
	- v2를 capacity가 0인 임시 객체로 만들어서 스왑을 해줍니다.
- vector<int>().swap(v1);v.insert(2, 3, 4);
	- 2번째 위치에 3개의 4값을 삽입합니다. (뒤엣놈들은 뒤로 밀림)
- v.insert(2, 3); - 2번째 위치에 3의 값을 삽입합니다.- 삽입한 곳의 iterator를 반환합니다.
- v.erase(iter); - iter 가 가리키는 원소를 제거합니다.
	- size만 줄어들고 capacity(할당된 메모리)는 그대로 남습니다.
	- erase는 파라미터 하나를 받을때와 두개를 받을 때 다릅니다.
- v.empty()- vector가 비었으면 리턴 true- 비어있다의 기준은 size가 0이라는 것이지, capacity와는 상관이없습니다.
