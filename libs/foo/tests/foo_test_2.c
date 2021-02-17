#include <stdio.h>
#include <foo.h>

int main(int argc, char * argv[])
{
    printf("Running test 2...\n");
    return 666 == FOO_action(333, 333) ? 0 : 1;
}
