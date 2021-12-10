#include <middle.h>

void outer_func()
{
    inner_t inner = 1;
    middle_t middle = 1;
    inner = middle_func(middle);
}