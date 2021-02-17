#include <stdio.h>
#include <foo.h>
#include <bar.h>


#ifdef TC_1

#define BP1 (2)
#define BP2 (1)
#define FP1 (1)
#define FP2 (2)
#define RESULT (4)

#define RUN_TEST tc_1

static int tc_1()
{
    return RESULT == BAR_action(BP1, BP2) + FOO_action(FP1, FP2) ? 0 : 1;
}
#else
#error "TEST CASE NOT DEFINED"
#endif




int main(int argc, char * argv[])
{
    return ( RUN_TEST() );
}
