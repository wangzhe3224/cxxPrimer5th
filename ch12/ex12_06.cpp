#include <iostream>
#include <vector>

using std::vector;

vector<int> * foo() {
    return new vector<int>;
}

vector<int> * use_foo( vector<int> *vp ) {
    int tmp;
    while ( std::cin >> tmp ) {
	vp->push_back( tmp );
    }

    return vp;
}

void printFoo ( vector<int> *vp) {
    for ( auto i : *vp )
	std::cout << i << " ";
    std::cout << std::endl;

    delete vp;
}

int main() {
    
    printFoo( use_foo( foo() ) );
    return 0;
}
