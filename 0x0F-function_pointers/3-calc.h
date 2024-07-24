#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct oper
{
	char *oper;
	int (*f)(int a, int b);
} oper_t;
int oper_ada(int a, int b);
int oper_sub(int a, int b);
int oper_mul(int a, int b);
int oper_div(int a, int b);
int oper_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
