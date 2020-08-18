#include <iostream>
using namespace std;
 
int countMazePath(int endrow, int endcol, int curr_row, int curr_col) {
	if(curr_row == endrow and curr_col == endcol) {
		return 1;
	}
	if(curr_row > endrow or curr_col > endcol) {
		return 0;
	}
	int hresult = countMazePath(endrow, endcol, curr_row, curr_col+1); // horizontal move
  int dresult = countMazePath(endrow, endcol, curr_row+1, curr_col+1); // diagonal move
	int vresult = countMazePath(endrow, endcol, curr_row+1, curr_col); // vertical move
	int myresult = hresult + dresult +vresult;
	return myresult;
}
 
int main()
{
	cout<<countMazePath(2,2,0,0);
	return 0;
}
