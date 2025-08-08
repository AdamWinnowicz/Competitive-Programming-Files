#include "bits/stdc++.h"
using namespace std;
// Namespace = provides a solution for preventing name conflicts in large projects. Each entity needs a unique name. 
// A namespace allows for identically named entities as long as the namespaces are different.
// int x = 0;
// int x = 1;
// The above code will give an error because the variable x is already declared in the same scope.
// To avoid this, we can use namespaces.
namespace first {
    int x = 1;
}
namespace second {
    int x = 2;
}

int main() {

    int x = 0;

    cout << "Global x: " << x << '\n'; // 0
    cout << "Local x one: " << first::x << '\n'; // 1
    cout << "Local x two: " << second::x << '\n'; // 2
    return 0;
}

//Important note: if you use namespace std; you can use cout, cin, etc. without the std:: prefix, but this is not recommended in large projects as it can lead to name conflicts.
// It is better to use std::cout, std::cin, etc. to avoid confusion and maintain clarity in your code.
// For example, if you have a variable named data in your code and you use using namespace std;, it will conflict with the std::data() function.