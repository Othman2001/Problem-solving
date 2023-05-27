#include <iostream>
#include <vector>
#include <sstream>


int main() {
    int n; int d;

       std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    ss >> n >> d;
    std::vector<int> myVector(n);

    for (int i = 0; i < n; ++i) {
        int value;
        std::cin >> value;
        myVector[i] = value;
    }

    for (int i = 0 ; i <= d; i++) { 
        myVector.push_back(myVector[i]);
    }
        myVector.erase(myVector.begin() , myVector.begin() + d);
    for (int i = 0; i < n; ++i) {
        std::cout << myVector[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
