// the type of a mathematical expression
enum expr_type
{
    EXPR_CONST,
    EXPR_ADD,
    EXPR_SUB,
    EXPR_MUL,
    EXPR_DIV,
    EXPR_POW,
};

// a mathematical expression
struct expr
{
    enum expr_type type;

    // the left side operand.
    // if type == EXPR_CONST, then this is 0 and has no meaning.
    struct expr *left_operand;

    // the right side operand.
    // if type == EXPR_CONST, then this is 0 and has no meaning.
    struct expr *right_operand;

    // the constant.
    // if type != EXPR_CONST, then this is 0 and has no meaning.
    int number;
};

// calculate the value of an expression (that may reference other expressions)
int expr_calc(struct expr *);

// run tests that verify that expr.c works as it should
void expr_run_tests();
