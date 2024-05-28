#include <vector>

std::vector<std::vector<int>> generate(int numRows) {
    std::vector<std::vector <int>> generate;
    generate.resize(numRows);
    for (int i = 0; i < numRows; ++i) {
        generate[i].resize(i + 1);
    }

    for (size_t n = 0; n < numRows; n++)
    {
        for (size_t k = 0; k <= n; k++)
        {
            if (k == 0 || k == n) {
                generate[n][k] = 1;
            }
            else {
                generate[n][k] = generate[n - 1][k - 1] + generate[n - 1][k];
            }
        }

    }
    return generate;
}