#include <stdio.h>
#include <stdlib.h>

#include "TestAbc.h"

typedef struct TestAbc
{
	int value;
} field_struct;

static TestAbc me;

static TestAbcClassMethod class_method_struct =
{
	create
};

static TestAbcMethod method_struct =
{
	increment,
	decrement,
	getValue,
	destroy
};

TestAbcClassMethod*
TestAbc_(void)
{
	return &class_method_struct;
}

static TestAbc
create(int num)
{
	TestAbc instance = (TestAbc)malloc(sizeof(field_struct));
	instance->value = num;
	return instance;
}

TestAbcMethod*
testAbc_(TestAbc instance)
{
	me = instance;
	return &method_struct;
}

static void
increment(void)
{
	++me->value;
}

static void
decrement(void)
{
	--me->value;
}

static int
getValue(void)
{
	return me->value;
}

static void*
destroy(void)
{
	free(me);
	return NULL;
}
