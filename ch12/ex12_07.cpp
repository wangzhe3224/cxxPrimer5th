#include <iostream>
#include <vector>
#include <memory>

using std::vector;
using std::shared_ptr; using std::make_shared;

shared_ptr<vector<int>> foo() {
    return make_shared<vector<int>>(); // make_shared is a function, Dont forget the function call operatr ()
}

shared_ptr<vector<int>> use_foo( shared_ptr<vector<int>> vp ) {
    int tmp;
    while ( std::cin >> tmp ) {
	vp->push_back( tmp );
    }

    return vp; 
}

void printFoo ( shared_ptr<vector<int>> vp) {
    for ( auto i : *vp )
	std::cout << i << " ";
    std::cout << std::endl;

    /// Dont need to free the memory manually
}

int main() {
    
    printFoo( use_foo( foo() ) );
    return 0;
}
