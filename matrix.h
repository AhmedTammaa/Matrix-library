#include <string>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
class matrix {
private:
	int i, j;
	vector<vector<int>> mat;
	vector<int> maindiagonal;
public:
	matrix(vector<vector<int>>& mat1) {
		i = mat1.size();
		j = mat1[0].size();
		mat.resize(i, vector<int>(j));
		data.resize(i, vector<int>(j));
		mat = data;
		dim1 = i;
		dim2 = j;
	}
	int main_diagonal = 0;
	vector <vector<int>> data;
	
	int dim1, dim2;
	bool is_square() {
		if (i == j) {
			return true;
		}
		return false;
	}
	int main_diagonal_sum() {
		if (is_square()) {
			int col = 0;
			for (int row = 0; row < i; row++) {
				main_diagonal += mat[row][col];
				col++;
			}
			return main_diagonal;
		}
		//the function must return a value
	}
};
bool is_equal(matrix m1, matrix m2) {
	//first test
	bool checker = 1;
	if (m1.dim1 == m2.dim2 && m1.dim2 == m2.dim2) {
		// second teste
		for (int i = 0; i < m1.dim1; i++) {
			for (int j = 0; j < m1.dim2; j++) {
				if (m1.data[i][j] != m2.data[i][j]) {
					return false;
				}

			}
		}
	}
	return checker;
	
}
