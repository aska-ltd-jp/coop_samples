typedef struct TestAbcTag *TestAbc;

typedef struct TestAbcMethodTag {
	void (*increment)(void);
	void (*decrement)(void);
	int (*getValue)(void);
	//TestAbc (*destroy)(void);
	void *(*destroy)(void);
} TestAbcMethod;

TestAbc
TestAbc_new(int);

TestAbcMethod*
testAbc(TestAbc);

static void
increment(void);

static void
decrement(void);

static int
getValue(void);

static void*
destroy(void);
