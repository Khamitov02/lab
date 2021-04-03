#include "subforwardlist.cpp"
#include <iostream>
#include <chrono>
#include <ctime>
#include <cstdlib>
#include <forward_list>
#include <fstream>
using namespace std;
int main()
{
   freopen("out.txt", "w", stdout);
double g;
for (int size = 10000; size <= 600000; size += 10000)
	{g=0;
forward_list<int> f;

		for (int i = 0; i < size; i++)
		{
			f.push_front(i);
		}

		for (int i = 0; i < 10000; i++)
		{

			auto begin = chrono::high_resolution_clock::now();


			f.push_front(0);
auto end = chrono::high_resolution_clock::now();
f.pop_front();
			g+=chrono::duration_cast<chrono::nanoseconds>(end-begin).count();
		}
 cout <<  g/10000<< " " << distance(f.begin(), f.end()) << endl;



        }
        freopen("out1.txt", "w", stdout);
    for (int size = 10000; size <= 600000; size += 10000)
	{ g=0;
		subforwardlist<int> s;

		for (int i = 0; i < size; i++)
		{
			s.push_forward(i);
		}

		for (int i = 0; i < 10000; i++)
		{

			auto begin1 = chrono::high_resolution_clock::now();



			s.push_forward(0);
auto end1 = chrono::high_resolution_clock::now();
s.pop_forward();
			g+=chrono::duration_cast <chrono::nanoseconds>(end1 - begin1).count();
		}
cout <<  g/10000<< " " << s.size() << endl;
		}



        return 0;
}
