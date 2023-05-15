/// Added so that lwIP can be built as a DLL

#include <stdio.h>

void lwip_example_app_platform_assert(const char* expression, const char* file, int line)
{
    // Print the assertion failure details to the debug output
    printf("Assertion failed: %s, file %s, line %d\n", expression, file, line);
}
