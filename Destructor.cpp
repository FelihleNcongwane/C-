#include <iostream>
using namespace std;

class Test {
	public:
		Test(){
			cout << "Constructor is executed. \n";
		}

		~Test()
		{
			cout << "Destructor is called. \n";
		}
};

main()
{
	Test(); 
	Test t;

	t.~Test();

	return 0;
}
