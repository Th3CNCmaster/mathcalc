
// tokens come in several different variants
enum token_type
{
    // for example "1234455", the int 1234455 is stored in int operand of struct token.
    CONST,
    // '*'
    MUL,
    // '+'
    ADD,
    // '-'
    SUB,
    // '/'
    DIV,
    // '^'
    POW,
    // '('
    OPEN_PARENTHESIS,
    // ')'
    CLOSE_PARENTHESIS,
    // return this on end of file or newline
    CALCULATE
};

struct token
{
    // determines the variant of a token
    enum token_type type;

    // here it says which integer. this is unused and alwasy zero except if
    // type is OPERAND_CONSTANT_INTEGER
    int operand;
};

struct get_token_return_value
{
    // 0 would mean end of stream. program should stop
    // 1 would mean we should look only at index 0. index 1 has junk data.
    // 2 would mean we should look at both indices.
    int num_tokens;

    // the tokens. 1 or 2 of them.
    struct token tokens[2];
};

// should return 1 or 2 tokens.
struct get_token_return_value get_token();