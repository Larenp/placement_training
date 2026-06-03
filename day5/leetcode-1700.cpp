class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        int cnt = 0;

        while (!students.empty() && cnt < students.size()) {

            if (students[0] == sandwiches[0]) {
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                cnt = 0;
            }
            else {
                students.push_back(students[0]);
                students.erase(students.begin());
                cnt++;
            }
        }

        return students.size();
    }
};
/*
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int cnt[2] = {0, 0};

        for (int num : students) {
            cnt[num]++;
        }

        for (int sand : sandwiches) {
            if (cnt[sand] == 0) {
                return cnt[0] + cnt[1];
            }

            cnt[sand]--;
        }

        return 0;
    }
};

*/