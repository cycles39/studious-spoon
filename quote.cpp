#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string quotes[] = {
        "Keep going!", "You got this!", "Stay curious.", "Never give up.",
        "Dream big."
    };
    srand(time(0));
    int i = rand() % 5;
    cout << quotes[i] << endl;
}
