#include "unity.h"
#include "HMSC.h"
extern  void add();  
extern void list();
extern void edit();  
extern void delete1();
extern void search();

void setUp()
{

}
void teardown()
{

}
void test_HMSC(void)
{
    
}
int main()
{
    UnityBegin(NULL);
    RUN_TEST(add);
    RUN_TEST(list);
    RUN_TEST(edit);
    RUN_TEST(delete1);
    RUN_TEST(search);

    return UnityEnd();
}