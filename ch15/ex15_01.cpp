#include <iostream>
#include <string>

class Quote {
public:
    Quote() = default;
    Quote( const std::string &book, double sales_pirce ):
	bookNo(book), price(sales_pirce) {}
    std::string isbn() const { return bookNo; }

    virtual double net_price( std::size_t n ) const
    { return n * price; }

    virtual ~Quote() = default;

private:
    std::string bookNo;
protected:
    double price = 0.0;
};

int main() {
    Quote q1;
    return 0;
}
