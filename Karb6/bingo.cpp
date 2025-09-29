#include<bits/stdc++.h>
using namespace std;

const string colHead = "BINGO";

int colOf(char L){
    size_t p = colHead.find(L);
    return (p==string::npos)? -1 : (int)p;
}
bool bingo_chk(const vector<int>& r, const vector<int>& c, int d1, int d2){
    if (d1==5 || d2==5) return true;
    for (int i=0;i<5;i++) if (r[i]==5 || c[i]==5) return true;
    return false;
}
void print_line(const vector<vector<int>>& board, const vector<pair<int,int>>& cells){
    bool first=true;
    for (auto [r,c]:cells){
        if (r==2 && c==2) continue;              
        if (!first) cout << ", ";
        first=false;
        cout << colHead[c] << board[r][c];       
    }
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string z; for(int i=0;i<5;i++) cin>>z;

    vector<vector<int>>  board(5, vector<int>(5,-1));
    vector<vector<bool>> marked(5, vector<bool>(5,false));
    vector<vector<int>>  pos(5,  vector<int>(76,-1)); 

    for (int r=0;r<5;r++){
        for (int c=0;c<5;c++){
            string cell; cin >> cell;
            if (cell=="*"){ board[r][c] = -1; continue; }
            int val = stoi(cell);
            board[r][c] = val;
            if (0<=val && val<=75) pos[c][val] = r;
        }
    }

    vector<int> rowCnt(5,0), colCnt(5,0);
    int d1=0, d2=0;

    marked[2][2]=true; rowCnt[2]++; colCnt[2]++; d1++; d2++;

    int used = 0;
    bool bingo = false;
    string token;

    while(!bingo && (cin>>token)){
        if (token.size()<2) continue;
        int c = colOf(token[0]);                  
        if (c<0) continue;

        string numStr = token.substr(1);
        if (numStr.empty() || !all_of(numStr.begin(),numStr.end(),::isdigit)) continue;

        int num = stoi(numStr);
        used++;                                   

        if (num<0 || num>75 || pos[c][num]==-1){  
            bingo = bingo_chk(rowCnt,colCnt,d1,d2);
            continue;
        }

        int r = pos[c][num];
        if (!marked[r][c]){
            marked[r][c] = true;
            rowCnt[r]++; colCnt[c]++;
            if (r==c) d1++;
            if (r+c==4) d2++;
        }
        bingo = bingo_chk(rowCnt,colCnt,d1,d2);
    }

    cout << used << "\n";

    for (int r=0;r<5;r++) if (rowCnt[r]==5){
        vector<pair<int,int>> cells; for (int c=0;c<5;c++) cells.push_back({r,c});
        print_line(board,cells);
    }
    for (int c=0;c<5;c++) if (colCnt[c]==5){
        vector<pair<int,int>> cells; for (int r=0;r<5;r++) cells.push_back({r,c});
        print_line(board,cells);
    }
    bool printed=false;
    if (d1==5 && !printed){
        vector<pair<int,int>> cells; for (int i=0;i<5;i++) cells.push_back({i,i});
        print_line(board,cells); printed=true;
    }
    if (d2==5 && !printed){
        vector<pair<int,int>> cells; for (int i=0;i<5;i++) cells.push_back({4-i,i});
        print_line(board,cells);
    }
    return 0;
}
