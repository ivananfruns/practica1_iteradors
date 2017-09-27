
#include "Header.h"

void main()
{
	//VECTOR:*******************************************************************************************************************************************
	std::cout << "*****VECTOR*****\n\n\n";

	std::vector<int> v{ 1,2,3,4,5,6 };

	//Forward:
	std::cout << " Iterador Forward:\n\n";
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		std::cout << *it << " "; 	
	std::cout << std::endl<<std::endl;

	// Constant Forward
	std::cout << " Iterador Constant Forward:\n\n";
	for (std::vector<int>::const_iterator it= v.cbegin(); it != v.cend(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	//Backward:
	std::cout << " Iterador Backward:\n\n";
	for (std::vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl << std::endl;

	//Constant Backwards:
	std::cout << " Iterador Constant Backward:\n\n";
	for (std::vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl << std::endl;

	//Random Access:
	std::cout << " Iterador Random Access:\n\n";
	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl << std::endl;

	//Access by value using a copy:
	std::cout << " Iterador por copia:\n\n";
	for (int e : v)
		std::cout << e << " ";
	std::cout << std::endl << std::endl;

	//Access by constant value using a copy:
	std::cout << " Iterador por copia con un valor constante:\n\n";
	for (const int e : v)
		std::cout << e << " ";
	std::cout << std::endl << std::endl;

	//Type inference by reference:
	std::cout << " Iterador por referencia:\n\n";
	for (int e : v)
		std::cout << e << " ";
	std::cout << std::endl << std::endl;

	//Type inference by reference with constant value:
	std::cout << " Iterador por referencia con valor constante:\n\n";
	for (int e : v)
		std::cout << e << " ";
	std::cout << std::endl << std::endl;


	//DEQUE:*******************************************************************************************************************************************
	std::cout << "*****DEQUE*****\n\n\n";
	std::deque<int> d{ 1,2,3,4,5,6 };

	std::cout << " Iterador Forward:\n\n";
	for (std::deque<int>::iterator it = d.begin(); it != d.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl << std::endl;

	// Constant Forward
	std::cout << " Iterador Constant Forward:\n\n";
	for (std::deque<int>::const_iterator it = d.cbegin(); it != d.cend(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	//Backward:
	std::cout << " Iterador Backward:\n\n";
	for (std::deque<int>::reverse_iterator it = d.rbegin(); it != d.rend(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl << std::endl;

	//Constant Backwards:
	std::cout << " Iterador Constant Backward:\n\n";
	for (std::deque<int>::reverse_iterator it = d.rbegin(); it != d.rend(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl << std::endl;

	//Random Access:
	std::cout << " Iterador Random Access:\n\n";
	for (int i = 0; i < d.size(); i++)//la deque deixa accedir per Random Access! Però no és eficient ja que ha de expandir i contraure.
		std::cout << d[i] << " ";
	std::cout << std::endl << std::endl;

	//Access by value using a copy:
	std::cout << " Iterador por copia:\n\n";
	for (int e : d)
		std::cout << e << " ";
	std::cout << std::endl << std::endl;

	//Access by constant value using a copy:
	std::cout << " Iterador por copia con un valor constante:\n\n";
	for (const int e : d)
		std::cout << e << " ";
	std::cout << std::endl << std::endl;

	//Type inference by reference:
	std::cout << " Iterador por referencia:\n\n";
	for (int e : d)
		std::cout << e << " ";
	std::cout << std::endl << std::endl;

	//Type inference by reference with constant value:
	std::cout << " Iterador por referencia con valor constante:\n\n";
	for (int e : d)
		std::cout << e << " ";
	std::cout << std::endl << std::endl;
	std::cout << std::endl;


	//LIST:*******************************************************************************************************************************************

	std::cout << "*****LIST*****\n\n";
	std::list<int> l{ 1,2,3,4,5,6 };

	std::cout << " Iterador Forward:\n\n";
	for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl << std::endl;

	// Constant Forward
	std::cout << " Iterador Constant Forward:\n\n";
	for (std::list<int>::const_iterator it = l.cbegin(); it != l.cend(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	//Backward:
	std::cout << " Iterador Backward:\n\n";
	for (std::list<int>::reverse_iterator it = l.rbegin(); it != l.rend(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl << std::endl;

	//Constant Backwards:
	std::cout << " Iterador Constant Backward:\n\n";
	for (std::list<int>::reverse_iterator it = l.rbegin(); it != l.rend(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl << std::endl;

	//Random Access:
	std::cout << " Iterador Random Access:\n No tiene.\n";


	//Access by value using a copy:
	std::cout << " Iterador por copia:\n\n";
	for (int e : d)
		std::cout << e << " ";
	std::cout << std::endl << std::endl;

	//Access by constant value using a copy:
	std::cout << " Iterador por copia con un valor constante:\n\n";
	for (const int e : d)
		std::cout << e << " ";
	std::cout << std::endl << std::endl;

	//Type inference by reference:
	std::cout << " Iterador por referencia:\n\n";
	for (int e : d)
		std::cout << e << " ";
	std::cout << std::endl << std::endl;

	//Type inference by reference with constant value:
	std::cout << " Iterador por referencia con valor constante:\n\n";
	for (int e : d)
		std::cout << e << " ";
	std::cout << std::endl << std::endl;
	std::cout << std::endl;


	//FORWARD LIST:*******************************************************************************************************************************************

	std::cout << "*****FORWARD_LIST*****\n\n";
	std::forward_list<int> fl{ 1,2,3,4,5,6 };

	std::cout << " Iterador Forward:\n\n";
	for (std::forward_list<int>::iterator it = fl.begin(); it != fl.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl << std::endl;

	// Constant Forward
	std::cout << " Iterador Constant Forward:\n\n";
	for (std::forward_list<int>::const_iterator it = fl.cbegin(); it != fl.cend(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	//Backward:
	std::cout << " Iterador Backward:\nNo tiene\n\n";

	//Constant Backwards:
	std::cout << " Iterador Constant Backward:\nNo tiene\n\n";

	//Random Access:
	std::cout << " Iterador Random Access:\n No tiene.\n\n";


	//Access by value using a copy:
	std::cout << " Iterador por copia:\n\n";
	for (int e : d)
		std::cout << e << " ";
	std::cout << std::endl << std::endl;

	//Access by constant value using a copy:
	std::cout << " Iterador por copia con un valor constante:\n\n";
	for (const int e : d)
		std::cout << e << " ";
	std::cout << std::endl << std::endl;

	//Type inference by reference:
	std::cout << " Iterador por referencia:\n\n";
	for (int e : d)
		std::cout << e << " ";
	std::cout << std::endl << std::endl;

	//Type inference by reference with constant value:
	std::cout << " Iterador por referencia con valor constante:\n\n";
	for (int e : d)
		std::cout << e << " ";
	std::cout << std::endl << std::endl;
	std::cout << std::endl;


	//MAP:*******************************************************************************************************************************************
	std::map<char, int> m;
	m['a'] = 1;
	m['b'] = 2;
	m['c'] = 3;
	m['d'] = 4;
	m['e'] = 5;
	m['f'] = 6;

	for (std::map<char, int>::iterator it = m.begin(); it != m.end(); ++it)
	{
		std::cout << it->first << "=>" << it->second << std::endl;
	}

	for (std::map<char, int>::reverse_iterator it = m.rbegin(); it != m.rend(); ++it)
	{
		std::cout << it->first << "=>" << it->second << std::endl;
	}
	for (/*const std::pair<int, char>*/auto &x : m)
	{
		std::cout << x.first << "=>" << x.second << std::endl;
	}
	std::cout << std::endl;

	//SET:*******************************************************************************************************************************************
	std::set<int> s{ 1,2,3,4,5,6 };

	for (std::set<int>::iterator it = s.begin(); it != s.end(); ++it)
	{
		std::cout << *it << std::endl;
	}

	for (std::set<int>::reverse_iterator it = s.rbegin(); it != s.rend(); ++it)
	{
		std::cout << *it << std::endl;
	}
	for (const int &x : s)
	{
		std::cout << x << std::endl;
	}

	system("pause");
}
