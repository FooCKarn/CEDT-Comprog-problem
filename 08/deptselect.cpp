#include <bits/stdc++.h>
using namespace std;

struct Student {
    string id;
    double score;
    vector<string> choices;
    string assigned; // ภาคที่ได้
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;

    map<string,int> capacity;
    for (int i=0;i<n;i++) {
        string dep; int cap;
        cin >> dep >> cap;
        capacity[dep] = cap;
    }

    int m;
    cin >> m;
    vector<Student> students(m);

    for (int i=0;i<m;i++) {
        cin >> students[i].id >> students[i].score;
        students[i].choices.resize(4);
        for (int j=0;j<4;j++) cin >> students[i].choices[j];
    }

    sort(students.begin(), students.end(), [](auto &a, auto &b){
        return a.score > b.score;
    });

    for (auto &st : students) {
        for (string dep : st.choices) {
            if (capacity[dep] > 0) {
                st.assigned = dep;
                capacity[dep]--;
                break;
            }
        }
    }

    sort(students.begin(), students.end(), [](auto &a, auto &b){
        return a.id < b.id;
    });


    for (auto &st : students) {
        cout << st.id << " " << st.assigned << "\n";
    }

    return 0;
}
