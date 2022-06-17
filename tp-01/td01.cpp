#include <iostream>
#include <string>
#include <vector>

// using namespace std;

// int main()
// {

//     short       s0='j';

//     cout<<s0<<endl;

//     // const short s1{0};

//     const int i1 = 2;

//     // bool b2 { false };
//     bool b3 { i1/2 };
//     // bool b4;

//     unsigned       u5 { 0x10 };
//     unsigned short us6 = -10;
//     unsigned long  ul7 { b3 + u5 + us6 };

//     cout<<ul7<<endl;

//     // char c8 { "a"[0] };
//     // char c9 = -10;

//     // double       d10 { i1 };
//     // double&      d11 { d10 };
//     // double&      d12=d10;
//     // const double d13 { .0f };

//     // int        i14 = i1;
//     // const int&       i15 = i1;
//     // bool&       i16 = b2;
//     // const int& i17 { i14 };

//     return 0;
// }

int add(const int& a, const int& b)
{
    return a + b;
}

void add_to(int& a, const int& b)
{
    a += b;
}

// Return the number of occurrences of 'a' found in string 's'.
int count_a_occurrences(const std::string& s);

// Update function of a rendering program.
// - dt (delta time) is read by the function to know the time elapsed since the last frame.
// - errors is a string filled by the function to indicate what errors have occured.
void update_loop(const float& dt, std::string& errors_out);

// Return whether all numbers in 'values' are positive.
// If there are negative values in it, fill the array 'negative_indices_out' with the indices
// of these values and set its size in 'negative_count_out'.
// ex: auto res = are_all_positive({ 1, -2, 3, -4 }, negative_indices, negative_count);
//    -> res is false, since not all values are positive
//    -> negative_indices contains { 1, 3 } because values[1] = -2 and values[3] = -4
//    -> negative_count is 2
bool are_all_positives(const std::vector<int>& values, int negative_indices_out[],
                       size_t& negative_count_out);

// Concatenate 'str1' and 'str2' and return the result.
// The input parameters are not modified by the function.
std::string concatenate(const std::string& str1, const std::string& str2);

std::vector<unsigned int> count_lower(const std::string& input)
{
    std::vector<unsigned int> res (26,0);

    for (auto in : input)
    {
        res[in - 'a']++;
    }

    return res;
}

void display(const std::vector<unsigned int>& res)
{
    for (int i = 0; i < 26; i++)
    {
        std::cout << char('a' + i) << " :: " << res[i] << std::endl;
    }
}

int main()
{
    // const int x { 10 };
    // int       y = add(x, x);
    // add_to(y, 22);
    // std::cout << y << std::endl;

    std::cout << "write something ::::";
    std::string input;
    std::cin >> input;

    auto res = count_lower(input);

    display(res);

    // if (!input.empty())
    // {
    //     int table[26] { 0 };

    //     for (auto in : input)
    //     {
    //         std::cout << in << " - " << table[in - 'a'] << std::endl;
    //         table[in - 'a'] += 1;
    //     }

    //     for (int i = 'a'; i <= 'z'; i++)
    //     {
    //         std::cout << i + 'a' << " :: " << table[i] << std::endl;
    //     }
    // }

    return 0;
}