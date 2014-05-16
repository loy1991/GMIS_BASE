#ifndef GMIS_EXCEPTION_H
#define GMIS_EXCEPTION_H

#include <exception>
namespace GMIS_exceptions
{
    class GMIS_exception
    {
    public:
        GMIS_exception(const char *m);
        const char *what();
    private:
        const char *str;
    };

}
#endif // GMIS_EXCEPTION_H
