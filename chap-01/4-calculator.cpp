#include <iostream>
#include <string>
#include <vector>

bool parse_params(char op, std::vector<int> values, int argc, char** argv);
int  compute_result(char op, std::vector<int> values);
void display_results(int result);

int main(int argc, char** argv)
{

    char             op = '?';
    std::vector<int> values;

    if (!parse_params(op, values, argc, argv))
    {
        return -1;
    }

    auto result = compute_result(op, values);

    // Output result.
    display_results(result);
    return 0;
}

bool parse_params(char op, std::vector<int> values, int argc, char** argv)
{
    if (argc < 2)
    {
        std::cerr << "Expected operator as first argument." << std::endl;
        return false;
    }

    std::string op_str = argv[1];
    if (op_str != "+" && op_str != "*" && op_str != "-")
    {
        std::cerr << "Expected operator to be '+', '*' or '-'." << std::endl;
        return false;
    }

    op = op_str[0];

    for (auto arg_i = 2; arg_i < argc; ++arg_i)
    {
        auto value = std::stoi(argv[arg_i]);
        values.emplace_back(value);
    }

    if (op == '-' && values.empty())
    {
        std::cerr << "Operator '-' expects at least one operand to substract from." << std::endl;
        return -1;
    }

    return true;
}

void display_results(int result)
{
    std::cout << "Result is :: " << result << std::endl;
}

int compute_result(char op, std::vector<int> values)
{

    // Process operation, depending on the operator.
    auto result = 0;

    switch (op)
    {
    case '+':
        for (auto v : values)
        {
            result += v;
        }
        break;

    case '*':
        for (auto v : values)
        {
            result += v;
        }
        break;

    case '-':
        result = values[0];
        for (auto i = 1; i < values.size(); ++i)
        {
            result -= values[i];
        }
        break;

    default:
        std::cerr << "Operator '-' expects at least one operand to substract from." << std::endl;
        break;
    }

    return result;
}