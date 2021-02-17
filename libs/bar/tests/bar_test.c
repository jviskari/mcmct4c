#include <stdio.h>
#include <bar.h>


int main(int argc, char * argv[])
{
    printf("Running test 1...\n");
    return 38 == BAR_action(40, 2) ? 0 : 1;
}
