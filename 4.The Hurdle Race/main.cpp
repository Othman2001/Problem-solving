#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    int n; int k;

    int result = 0;

       std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    ss >> n >> k;
    std::vector<int> myVector(n);

    for (int i = 0; i < n; ++i) {
        int value;
        std::cin >> value;
        myVector[i] = value;
    }
    for (int i = 0 ; i < n; i++) { 
         auto maxElement = max_element(myVector.begin(), myVector.end());
             if (maxElement != myVector.end()) {
        int maxValue = *maxElement;
             if(k >= maxValue ){
             result = 0;
         }else  {
            result =maxValue - k;
         }
    }



    }

        cout << result;
    return 0;
}
