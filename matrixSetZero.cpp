#include <iostream>
#include <stdlib.h>
#include <array>
#include <vector>
using namespace std;


// ECE 302
// ECE 521
// ECE 537
void printMatrix(vector< vector<double> > matrix);
void setMatrix(vector< vector<double> > & matrix, int row, int col, double value);

int main(){
	cout << "hello world" << endl;
	cout << "how many rows for matrix? ";
	int row, col;
	cin >> row;
	cout << "how many cols for matrix? ";
	cin >> col;


	vector< vector<double> > matrix;
	matrix.resize(row, vector<double>(col, 1));
	
	printMatrix(matrix);

	cout << "what row to change? ";
	cin >> row;
	cout << "what col to change? ";
	cin >> col;
	double value;
	cout << "what value to change? ";
	cin >> value;

	setMatrix(matrix, row, col, value);
	printMatrix(matrix);

	matrix.clear();

	return 0;
}


void printMatrix(vector< vector<double> > matrix){
	int row = matrix.size();
	int col = matrix[0].size();
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			cout << matrix[i][j];
		}
		cout << endl;
	}
}
void setMatrix(vector< vector<double> > & matrix, int row, int col, double value){
	row--;
	col--;
	matrix[row][col] = value;
	if (value == 0){
		for(int i = 0; i < matrix.size(); i++){
			matrix[i][col] = 0;
		}
		for(int i = 0; i < matrix[0].size(); i++){
			matrix[row][i] = 0;
		}
	}

}
















