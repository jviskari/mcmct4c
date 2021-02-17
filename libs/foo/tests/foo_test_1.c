#include <stdio.h>
#include <foo.h>

int main(int argc, char * argv[])
{
    printf("Running test 1...\n");
    return 42 == FOO_action(40, 2) ? 0 : 1;
}
