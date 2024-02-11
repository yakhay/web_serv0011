#ifndef CLIENT_CLASS_HPP
#define CLIENT_CLASS_HPP

#include "post.hpp"
#include "request.hpp"
#include "macro.hpp"

class   cl
{
public:
    struct timeval  spend;
    cl();
    int                 lock;
    std::string path;
    static const size_t buffer_size = 1024;
    std::vector<char >  buffer;
    std::ifstream   fileStream;
    cgi             cgi;
    post            post;
    request         req;
    respons         res;
    int             test1;
    int             test2;
    int             test3;
    bool            end_send;
    std::vector<class Location>::iterator location;
    cl(const cl& other);
    cl& operator=(const cl& other);
    ~cl();
    void    t3ta9t_men_lmoot()
    {
        gettimeofday(&this->spend, NULL);
    }
    bool    too_long() const
    {
        struct timeval  Now;
    
        gettimeofday(&Now, NULL);
        if (Now.tv_sec - this->spend.tv_sec + (float)(Now.tv_usec - this->spend.tv_usec) / 1000000 >= CLIENT_MAX_TIME)
            return (false);
        return (true);
    }
};

#endif