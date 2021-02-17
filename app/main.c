#include <bar.h>
#include <foo.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
    printf("2 - 1 = %d\n", BAR_action(2, 1));
    printf("1 + 2 = %d\n", FOO_action(1, 2));
    return 0;
}
