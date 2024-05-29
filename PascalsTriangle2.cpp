#include<vector>

std::vector<int> getRow(int rowIndex) {

    std::vector<std::vector <int>> gen;
    std::vector<int> rInd;

    if (rowIndex == 0) {
        rInd.resize(1);
        rInd[0] = 1;
        return rInd;
    }
    if (rowIndex == 1) {
        rInd.resize(2);
        rInd[0] = 1;
        rInd[1] = 1;
        return rInd;
    }

    int rows = 34;

    gen.resize(rows);
    for (int i = 0; i < rows; ++i) {
        gen[i].resize(i + 1);
    }

    for (size_t n = 0; n < rows; n++)
    {
        for (size_t k = 0; k <= n; k++)
        {
            if (k == 0 || k == n) {
                gen[n][k] = 1;
            }
            else {
                gen[n][k] = gen[n - 1][k - 1] + gen[n - 1][k];
            }
        }

    }

    for (const auto& row : gen) {
        for (auto a : row) {
            if (a == rowIndex) {
                rInd.resize(row.size());
                int i = 0;
                for (auto s : row) {
                    rInd[i] = s;
                    ++i;
                }
            }
        }

    }

    return rInd;
}