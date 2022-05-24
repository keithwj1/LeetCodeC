class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1){return s;}
        int row = 0;
        bool down = false;
        vector<string> vect(min(numRows, int(s.size())));
        for (char l : s){
            vect[row] += l;
            if (row == 0 || row == numRows - 1) {down = !down;}
            row += down ? 1 : -1;
        }
        //make vector into string
        string sreturn;
        for (string srow : vect){
            sreturn += srow;
        }
        return sreturn;
    }
};
