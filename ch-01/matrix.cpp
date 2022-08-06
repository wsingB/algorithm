//
// Created by werbinich on 8/6/22.
//

#include "matrix.h"

#include <utility>

Matrix::Matrix(int rows, int cols) {
    for(auto &thisRow : matrix) {
        thisRow.resize(cols);
    }
}

Matrix::Matrix(std::vector<std::vector<int>> matrix): matrix{std::move(matrix)} {

}

Matrix::Matrix(std::vector<std::vector<int>> &&matrix) :matrix{std::move(matrix)} {

}

const std::vector<int> &Matrix::operator[](int row) const {
    return matrix[row];
}

auto Matrix::numRows() const {
    return matrix.size();
}

auto Matrix::numCols() const {
    return numRows() > 0 ? matrix[0].size() : 0;
}
