typedef struct TestAbc *TestAbc;

typedef struct TestAbcClassMethod
{
	TestAbc (*create)(int);
} TestAbcClassMethod;

typedef struct TestAbcMethod
{
	void (*increment)(void);
	void (*decrement)(void);
	int (*getValue)(void);
	//TestAbc (*destroy)(void);
	void *(*destroy)(void);
} TestAbcMethod;

TestAbcClassMethod*
TestAbc_(void);

static TestAbc
create(int);

TestAbcMethod*
testAbc_(TestAbc);

static void
increment(void);

static void
decrement(void);

static int
getValue(void);

static void*
destroy(void);
