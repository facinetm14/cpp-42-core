#ifndef SPAN_HPP
#define SPAN_HPP
# define RED "\033[31;1m"
# define GREEN "\033[32;1m"
# define DEFAULT "\033[0m"

# include <iostream>
# include <vector>

class Span
{
private:
    std::vector<int> _arr;
    size_t _size;
    size_t _nb_item;
public:
    Span(int n);
    Span(void);
    Span & operator=(Span const & src);
    Span(Span const & src);
    ~Span();
    
    class FilledException : public std::exception 
    {
        public:
            const char *what() const throw()
            {
                return "Exception : Span already filled\n";
            }
    };
    class NoSpanException : public std::exception 
    {
        public:
            const char *what() const throw()
            {
                return "Exception : No span\n";
            }
    };
    size_t  size() const;
    void    addNumber(int nb);
    int     getItem(size_t i) const;
    int     shortestSpan();
    int     longestSpan();
};

#endif


