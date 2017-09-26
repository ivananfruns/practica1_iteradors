#include "Header.h"

void main()
{
	//iteradores de vector
	std::vector<int> v{ 1,2,3,4,5,6 };
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) //tambien se puede reverse con reverse_iterator i r.begin() y rend()
	{
		std::cout << *it << std::endl;
	}
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << std::endl;
	}
	for (int e : v) {
		std::cout << e << std::endl;
	};
	std::cout << std::endl;

	//iteradores de deque
	std::deque<int> d{ 1,2,3,4,5,6 };
	for (std::deque<int>::iterator it = d.begin(); it != d.end(); ++it) //tambien se puede reverse con reverse_iterator i rbegin() y rend()
	{
		std::cout << *it << std::endl;
	}
	for (int i = 0; i < d.size(); i++)
	{
		std::cout << d[i] << std::endl;
	}
	for (int e : d) {
		std::cout << e << std::endl;
	};
	std::cout << std::endl;
	//iteradores de list
	std::list<int> l{ 1,2,3,4,5,6 };
	for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
	for (std::list<int>::reverse_iterator it = l.rbegin(); it != l.rend(); ++it)
	{
		std::cout << *it << std::endl;
	}
	std::cout << std::endl;
	//iteradores de map
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
	//iteradores de set
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

}

