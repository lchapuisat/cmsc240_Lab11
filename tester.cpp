#include "LinkedList.h"
#include <iostream>
using namespace std;

int main()
{

	cout << "Creating a LinkedList object..." << endl;
	LinkedList<int> l;

	l.add(7);
	cout << l.get(0) << endl;


}