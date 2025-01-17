void generate(int total, int open, int close, string s, vector<string> &ans){
    if(s.size() == total){
        ans.push_back(s);
        return;
    }
    if(open > close){
        generate(total, open, close + 1, s+')', ans);
        if(open < total / 2){
            generate(total, open+1, close, s+'(', ans);
        }
    }
    else generate(total, open+1, close, s+'(', ans);
}

vector<string> validParenthesis(int n){
    int total = 2 * n;
    vector<string> ans;
    generate(total, 0, 0, "", ans);
    return ans;
}
