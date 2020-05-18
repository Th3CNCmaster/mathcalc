
#include "expr.h"
#include <assert.h>
#include <stdio.h>

int expr_calc(struct expr *self)
{
    // TODO:
    // if it's a constant, return the constnat.
    // else, calculate the left and right side operands.
    // then perform the appropriate operation and return.
    assert("axel" == "implement");
    return 0;
}

void expr_run_tests()
{
    printf("expr_run_tests() we expect this to fail. it is unimplemented!");
    // test 1
    // #######
    // setup an expression consisting of the constant 42
    struct expr forty_two = {0};
    forty_two.type = EXPR_CONST;
    forty_two.number = 42;

    // expect calculating that expression to give the result 42
    assert(expr_calc(&forty_two) == 42);

    // test 2
    // #######
    // setup an expression consisting of the constant 1
    // setup an expression consisting of the constant 2
    // setup an expression consisting of addition of the first constant with the second constant
    struct expr one = {0};
    one.type = EXPR_CONST;
    one.number = 1;

    struct expr two = {0};
    one.type = EXPR_CONST;
    one.number = 2;

    struct expr add_one_and_two = {0};
    add_one_and_two.type = EXPR_ADD;
    add_one_and_two.left_operand = &one;
    add_one_and_two.right_operand = &two;

    // expect calculating that expression to give the result 3
    assert(expr_calc(&add_one_and_two) == 3);
}
