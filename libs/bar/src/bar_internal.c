#include "bar_internal.h"
#ifdef BRAVO
#include "bravo.h"
#else
#define BRAVO(...)
#endif
int bar_process(int first, int second)
{
    BRAVO();
    return (first - second);
}
