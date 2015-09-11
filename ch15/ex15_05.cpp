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

class Bulk_quote : Quote {
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string &book, double p, std::size_t qty, double disc)
	: Quote(book, p), min_qty(qty), discount(disc)
    {}
    
    double net_price(std::size_t cnt) const {
	if (cnt >= min_qty)
	    return cnt*(1-discount)*price;
	else
	    return cnt*price;
    }
private:
    std::size_t min_qty = 0;
    double discount = 0.0;
};

int main() {
    Quote q1("1234567890", 12.0);
    Bulk_quote bq1("12345", 12.0, 100, 0.1);

    std::cout << q1.net_price(120) << std::endl
	      << bq1.net_price(120) << std::endl;
    return 0;
}
