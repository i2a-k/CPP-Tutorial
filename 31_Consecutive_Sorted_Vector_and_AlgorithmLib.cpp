#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    //Example: Checking whether elements of a sorted vector are consecutive
    //[2][3][4][5] => Consecutive, [1][2][4][5] => Not Consecutive
    vector<int> numbers;
    int n;
    bool t = true;

    cin >> n;

    for (int i=0; i<n; i++){
        int m;
        cin >> m;
        numbers.push_back(m);
    }

    sort(numbers.begin(), numbers.end()); //sorting the elements of vector in ascending order (algorithm library)

    for (int j=0; j<numbers.size()-1; j++)
    {
        if (numbers[j+1] != (numbers[j]+1))
        {
            t = false;
            break;
        }
    }

    if (t) cout << "Consecutive";
    else cout << "Not Consecutive";
}
