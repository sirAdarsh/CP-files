#include<bits/stdc++.h>
#define ll long long
using namespace std;


using std::vector;

struct Seg {
    int start, end;
};

bool sortFunction(Seg i, Seg j) { return (i.end < j.end); }

vector<int> optimal_points(vector <Seg> &segs) {

    std::sort(segs.begin(), segs.end(), sortFunction);

    vector<int> points;
    int point = segs[0].end;
    points.push_back(point);

    for (size_t i = 1; i < segs.size(); ++i) {
        if (point < segs[i].start || point > segs[i].end) {
            point = segs[i].end;
            points.push_back(point);
        }
    }
    return points;
}

int main() {
    int n;
    std::cin >> n;
    vector <Seg> segs(n);
    for (size_t i = 0; i < segs.size(); ++i) {
        std::cin >> segs[i].start >> segs[i].end;
    }
    vector<int> points = optimal_points(segs);
    std::cout << points.size() << "\n";
    for (size_t i = 0; i < points.size(); ++i) {
        std::cout << points[i] << " ";
    }
}

