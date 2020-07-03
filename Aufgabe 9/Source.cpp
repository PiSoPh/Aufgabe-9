#include <memory>
#include <iostream>
#include "example.h"


using namespace std;
int main()
{
	cout << "Unique Pointer:" << endl;
	unique_ptr<example> A = make_unique<example>('A');
	cout << "Shared Pointer: " << endl;
	shared_ptr<example> B = make_shared<example>('B');

	cout << "Start of for-Scope: " << endl;
	for (int x = 0; x < 1; x++)
	{
		cout << "B still exists:" << endl;
		shared_ptr<example> C = B;
		shared_ptr<example> D = make_shared<example>('D');
	}
	cout << "End of for-Scope: " << endl;

	unique_ptr<example> F = make_unique<example>('F');

	//shared_ptr<example> E = D; <- will not work, out of scope
}