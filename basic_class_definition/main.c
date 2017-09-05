#include <stdio.h>

#include "TestAbc.h"

int
getValue(void)
{
	return 1;
}

int
main(int argc, char **argv)
{
	TestAbc ab = TestAbc_()->create(10);
	TestAbc bc = TestAbc_()->create(100);
	
	printf("getValue() : %19d\n", getValue());
	printf("testAbc_(ab)->getValue() : %5d\n", testAbc_(ab)->getValue());
	printf("testAbc_(bc)->getValue() : %5d\n", testAbc_(bc)->getValue());
	
	printf("\n");
	
	testAbc_(ab)->increment();
	printf("testAbc_(ab)->increment()\n");
	
	testAbc_(bc)->decrement();
	printf("testAbc_(bc)->decrement()\n");
	
	printf("\n");
	
	printf("getValue() : %19d\n", getValue());
	printf("testAbc_(ab)->getValue() : %5d\n", testAbc_(ab)->getValue());
	printf("testAbc_(bc)->getValue() : %5d\n", testAbc_(bc)->getValue());
	
	ab = (TestAbc)testAbc_(ab)->destroy();
	bc = (TestAbc)testAbc_(bc)->destroy();
	
	return 0;
}
