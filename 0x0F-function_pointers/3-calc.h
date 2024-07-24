#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * struct oper - Struct oper
 *
 * @oper: The operator
 * @f: The function associated
 */
typedef struct oper
{
	char *oper;
	int (*f)(int a, int b);
} oper_t;
int op_add(int a, int b);
int oper_sub(int a, int b);
int oper_mul(int a, int b);
int oper_div(int a, int b);
int oper_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
