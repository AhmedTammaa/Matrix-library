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
	int main_diagonal = 0;
	matrix(vector<vector<int>> &mat1){
		i = mat1.size();
		j = mat1[0].size();
		mat.resize(i, vector<int>(j));
	}
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