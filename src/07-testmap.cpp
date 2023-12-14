#include <iostream>
#include <map>

void print_map(std::map<unsigned int, double> mymap)
{
    for (auto it = mymap.begin(); it != mymap.end(); it++) {
        std::cout << "(" << it->first << ", " << it->second << ")" << std::endl;
    }
}

int main()
{

    std::map<std::pair<unsigned int, unsigned int>, double> dTedx;
    dTedx[std::make_pair(2,12)] = 1.0; 
    dTedx[std::make_pair(3,12)] = 2.0; 
    dTedx[std::make_pair(4,8)] = 1.0; 
    dTedx[std::make_pair(4,9)] = 2.0; 
    dTedx[std::make_pair(4,10)] = 3.0; 
    dTedx[std::make_pair(4,12)] = 4.0; 

    std::map<unsigned int, double> lside;
    std::map<unsigned int, double> uside;

    for (auto tit = dTedx.begin(); tit != dTedx.end(); tit++) {
        unsigned int l = tit->first.first;
        unsigned int u = tit->first.second;
        double dJdx = tit->second;

        lside[l] += dJdx;
        uside[u] += dJdx;
    }

    std::cout << "lside: ";
    print_map(lside);

    std::cout << "uside: ";
    print_map(uside);

    return 0;
}

