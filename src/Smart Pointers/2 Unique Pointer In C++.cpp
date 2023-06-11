// TOPIC: Unique Pointer In C++

// NOTES:
// 0. unique_ptr is a class template.
// 1. unique_ptr is one of the smart pointer provided by c++11 to prevent memory leaks.
// 2. unique_ptr wraps a raw pointer in it, and de-allocates the raw pointer,
//    when unique_ptr object goes out of scope.
// 3. similar to actual pointers we can use -> and * on the object of unique_ptr, 
//    because it is overloaded in unique_ptr class.
// 4. When exception comes then also it will de-allocate the memory hence no memory leak.
// 5. Not only object we can create array of objects of unique_ptr.

// OPERATIONS:
// release, reset, swap, get, get_deleter.


// PROGRAM: 

#include<iostream>
#include<memory>
using namespace std;

class Foo {
	int x;
public:
	explicit Foo(int x) :
			x { x } {
	}
	int getX() {
		return x;
	}
	~Foo() {
		cout << "Foo Dest" << endl;
	}
};

int main() {
	unique_ptr<Foo> p1 (new Foo(10));
	unique_ptr<Foo> p6 (new Foo(100));
	unique_ptr<Foo> p2 = make_unique<Foo>(20); // should use make unique (there are reasons)

	cout << p1->getX() << (*p2).getX() << endl;

	// p1 = p2; // FAIL: This will fail because you can not copy ownership.
	unique_ptr<Foo> p3 = std::move(p1); // PASS: Because moving ownership is allowed.

	Foo* p = p3.get();

	Foo* p4 = p3.release();

	cout << p2->getX();

	return 0;
}
