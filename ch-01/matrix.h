//
// Created by werbinich on 8/6/22.
//

#ifndef CH_01_MATRIX_H
#define CH_01_MATRIX_H

#include <vector>

class Matrix {
public:
    Matrix(int rows, int cols);
    explicit Matrix(std::vector<std::vector<int>> matrix);
    explicit Matrix(std::vector<std::vector<int>>&& matrix);
    const std::vector<int>& operator[](int row) const;
    auto numRows() const;
    auto numCols() const;
private:
    std::vector<std::vector<int>> matrix;
};

#endif //CH_01_MATRIX_H
