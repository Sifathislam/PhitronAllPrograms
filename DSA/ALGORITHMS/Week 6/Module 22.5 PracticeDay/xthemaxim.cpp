// Algo:
// //memoizaiton max path sum
// Input:
 
// row and column: The dimensions of the grid (number of rows and columns).
// arr[11][11]: A 2D array representing the grid with values at each cell.
// Output:
 
// The maximum path sum from the top-left corner to the bottom-right corner of the grid.
// Algorithm:
 
// Input Reading: Read the dimensions of the grid row and column, and populate the arr 2D array with values representing the grid.
 
// Recursive Function maxPath: Define a recursive function maxPath that takes two parameters:
 
// start: The current row index.
// end: The current column index.
// Base Case:
 
// If start and end both reach the last row and last column (i.e., they equal row - 1 and column - 1), return the value of the grid cell at that position as it represents the maximum path sum.
// Base Case for Out of Bounds:
 
// If start goes beyond the last row or end goes beyond the last column (i.e., start == row or end == column), return a large negative value (e.g., -1000000) to indicate that this path is invalid.
// Recursive Calls for Right and Down Movements:
 
// Recursively calculate the maximum path sum by exploring two possible movements:
// Move right: Call maxPath(start, end + 1) to explore the path by moving to the right.
// Move down: Call maxPath(start + 1, end) to explore the path by moving down.
// Returning the Maximum of Right and Down Movements:
 
// Return the maximum of the values obtained from the right and down movements, along with the value of the current cell. This represents the maximum path sum from the current cell to the destination.
// Main Function:
 
// In the main function, read the dimensions and values of the grid using input.
// Output:
 
// Call the maxPath function with the starting position (0, 0) and print the result, which represents the maximum path sum from the top-left corner to the bottom-right corner of the grid.
 
 
// Code:
#include <bits/stdc++.h>
using namespace std;
int row,column;
int arr[11][11];
int maxPath(int start,int end){ 
	if(start == row - 1 && end == column - 1){
		return arr[start][end];
	} else if(start == row + 1 || end == column + 1){
		return -1000000;
	}
	int right = maxPath(start,end+1);
	int down = maxPath(start+1,end);
	return arr[start][end] + max(right,down);
}
int main() {
	cin>>row>>column;
	for(int i=0;i<row;i++){
		for(int z=0;z<column;z++){
			cin>>arr[i][z];
		}
	}
	cout<<maxPath(0,0);
}