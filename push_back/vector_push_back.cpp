#include <iostream>
#include <chrono>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <fstream>
using namespace std;
int main()
{
   freopen("out.txt", "w", stdout);


int n=1024;vector <int> v ;
v.resize(n);
n=150000;
 auto begin_ = chrono::high_resolution_clock::now();



for ( int i = 0 ; i < n ; i++) {
v.push_back(i) ;


  auto end_ = chrono::high_resolution_clock::now();

        //cout << (chrono::duration_cast <chrono::microseconds>(end_ - begin_).count()) / 1000 << " " << v.size() << endl;
        cout<<v.capacity()<<" "<<v.size();
        cout << endl;
        }
}
