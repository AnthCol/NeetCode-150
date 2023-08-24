class Solution {
public:

    bool check (vector<char>& row, vector<char>& column)
    {
        
        for (char i = '1'; i <= '9'; i++)
        {
            if (count(row.begin(), row.end(), i) > 1) return false; 
            if (count(column.begin(), column.end(), i) > 1) return false; 
        }

        return true; 
    }

    bool check_square(vector<char>& sq)
    {
        for (char i = '1'; i <= '9'; i++)
        {
            if (count(sq.begin(), sq.end(), i) > 1) return false; 
        }
        return true; 
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        vector<char> row; 
        vector<char> column; 
        vector<char> sq; 

        for (int i = 0, i2 = 0; i < 9; i++, i2 += 3)
        {
            for (int x = 0, x2 = 0; x < 9; x++, x2 += 3)
            {
                if (board[i][x] != '.') row.push_back(board[i][x]); 
                if (board[x][i] != '.') column.push_back(board[x][i]);

                if (i2 < 9 && x2 < 9)
                {
                    if (board[i2][x2] != '.') sq.push_back(board[i2][x2]); 
                    if (board[i2][x2 + 1] != '.') sq.push_back(board[i2][x2 + 1]);
                    if (board[i2][x2 + 2] != '.') sq.push_back(board[i2][x2 + 2]); 

                    if (board[i2 + 1][x2] != '.') sq.push_back(board[i2 + 1][x2]); 
                    if (board[i2 + 1][x2 + 1] != '.') sq.push_back(board[i2 + 1][x2 + 1]); 
                    if (board[i2 + 1][x2 + 2] != '.') sq.push_back(board[i2 + 1][x2 + 2]); 

                    if (board[i2 + 2][x2] != '.') sq.push_back(board[i2 + 2][x2]); 
                    if (board[i2 + 2][x2 + 1] != '.') sq.push_back(board[i2 + 2][x2 + 1]); 
                    if (board[i2 + 2][x2 + 2] != '.') sq.push_back(board[i2 + 2][x2 + 2]); 


                    if (!check_square(sq)) return false; 
                    sq.clear(); 
                }
            }

            if (!check(row, column)) return false; 
            row.clear(); 
            column.clear(); 


        }

        return true; 
    }
};
