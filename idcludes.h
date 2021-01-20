#ifndef IDCLUDES_H_INCLUDED
#define IDCLUDES_H_INCLUDED

#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include<set>
using namespace std;

int maks (map<string, int> zodziai){
    map<string,int>::iterator it
        = std::max_element(zodziai.begin(),zodziai.end(),[]
                           (const std::pair<string,int>& a, const std::pair<string,int>& b)->bool{ return a.second < b.second; } );
    return it->second;
}

#endif // IDCLUDES_H_INCLUDED
