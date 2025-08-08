#include "bits/stdc++.h"
using std::cin;
using std::cout;
using std::string;

//typedef std::vector<std::pair<std::string, int>> pairlist_t; // can make a complex type much easier to read and type quickly
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

int main() {
    // typedef = reserved keyword used to create an additional name (alias) for another data type. 
    // It is a new identifier for an existing type. It helps with readability and reduces typos.
    // Use when there is a clear benefit
    // Replace with 'using' (works better w/ templates)
    text_t firstName = "Adam";
    number_t age = 17;

    cout << firstName << '\n';
    cout << age << '\n';
    return 0;
}