#include <stdio.h>
void test_return_void(void);
int main ()
{
    
    test_return_void();
    return 0;
}

void test_return_void(void) {
    printf("test_return_void\n");
    return;
    printf("test_return_void_222\n");
}