#include <iostream>
#include <cmath>
#include <vector>
#include <map>

int main()
{
    /*
    double E0 = 0.66208;
    double Es = 0.04;
    double Enum = 13;

    std::vector<double> Et_vec;
    // left
    unsigned int n_l = Enum / 2 ;
    for (unsigned int i = 1; i <= n_l; i++) {
        double Et = std::log(double(i) / n_l) * Es + E0;
        Et_vec.push_back(Et);
    }

    // right
    unsigned int n_r = Enum - n_l-1;
    for (unsigned int i = 1; i < n_r; i++) {
        double Et = E0 - std::log(1.0 - double(i) / n_r) * Es;
        Et_vec.push_back(Et);
    }

    std::cout << "n_l = " << n_l << ", n_r = " << n_r << std::endl;
    for (unsigned int i = 0; i < Et_vec.size(); i++) {
        std::cout << " " << Et_vec[i];
    }
    std::cout << "\n";
    */

    std::multimap<int, char> example{{1, 'a'}, {2, 'b'}, {2, 'c'}, {3, 'x'}, {1, 'z'}, {2, 's'}};

    auto fit = example.equal_range(2);

    for (auto it = fit.first; it != fit.second; ++it) {
        std::cout << "Found " << it->first <<" -> " << it->second << std::endl;
    }

}
