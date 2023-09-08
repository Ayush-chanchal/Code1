#include <iostream>
#include <vector>
using namespace std;

// int main()
// {
// int arr[2][2] = {{1, 1}, {1, 0}};
// int n;
// int result[2][2] = {0};
// cout << "Enter a value:" << endl;
// cin >> n;
// if (n <= 1)
// {
//     cout << n;
// }
// else
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             for (int k = 0; k < 2; k++)
//             {
//                 result[j][k] += arr[j][k] * arr[k][j];
//             }
//         }
//         cout << endl;
//     }
//     cout << "Answer:" << result[0][0];
// }
// }

const int MOD = 1000000007;
vector<vector<long long>> matrix_multiply(const vector<vector<long long>> &A, const vector<vector<long long>> &B)
{
    int rows_A = A.size();
    int cols_A = A[0].size();
    int rows_B = B.size();
    int cols_B = B[0].size();
    vector<vector<long long>> result(rows_A, vector<long long>(cols_B, 0));

    for (int i = 0; i < rows_A; ++i)
    {
        for (int j = 0; j < cols_B; ++j)
        {
            for (int k = 0; k < cols_A; ++k)
            {
                result[i][j] = (result[i][j] + A[i][k] * B[k][j]) % MOD;
            }
        }
    }

    return result;
}

vector<vector<long long>> matrix_power(const vector<vector<long long>> &matrix, int exponent)
{
    int size = matrix.size();
    if (exponent == 1)
    {
        return matrix;
    }

    if (exponent % 2 == 0)
    {
        vector<vector<long long>> half_power = matrix_power(matrix, exponent / 2);
        return matrix_multiply(half_power, half_power);
    }
    else
    {
        vector<vector<long long>> half_power = matrix_power(matrix, (exponent - 1) / 2);
        return matrix_multiply(matrix_multiply(half_power, half_power), matrix);
    }
}

long long nth_fibonacci(int N)
{
    if (N <= 0)
    {
        return 0;
    }
    if (N == 1)
    {
        return 1;
    }

    vector<vector<long long>> F = {{1, 1}, {1, 0}};
    vector<vector<long long>> F_power_N_minus_1 = matrix_power(F, N - 1);

    return F_power_N_minus_1[0][0];
}

int main()
{
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    long long result = nth_fibonacci(N);
    cout << "The " << N << "th Fibonacci number: " << result << endl;

    return 0;
}
