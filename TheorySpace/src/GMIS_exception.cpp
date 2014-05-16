#include "GMIS_exception.h"
namespace GMIS_exceptions
{
    GMIS_exception::GMIS_exception(const char *m):str(m) {}
    const char* GMIS_exception::what()
    {
        return this->str;
    }

}
