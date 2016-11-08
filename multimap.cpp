// Example program
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    multimap<string, int> mymap;
    mymap.insert(make_pair("Group2", 11));
    mymap.insert(make_pair("Group1",  3));
    mymap.insert(make_pair("Group2", 10));
    mymap.insert(make_pair("Group1",  1));
    mymap.insert(make_pair("Group2", 12));
    mymap.insert(make_pair("Group1",  2));

    cout << "mymap contains:" << endl;

    for(auto it=mymap.begin(); it!= mymap.end(); it = mymap.upper_bound(it->first)){
       
        std::pair <std::multimap<string,int>::iterator, std::multimap<string,int>::iterator> ret;
        ret = mymap.equal_range(it->first);
        std::cout << it->first << " =>";
        for (std::multimap<string,int>::iterator it=ret.first; it!=ret.second; ++it)
          std::cout << ' ' << it->second;
        std::cout << '\n';
    }
    
    

}
