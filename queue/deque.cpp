#include <bits/stdc++.h>


void solve()
{
    int q; // num of queries
    std::cin >> q;
    std::deque<int> de;
    std::vector<int> results;
    const int PUSH = 1, POP = 2;

    for (int i = 0; i < q; ++i) {
        int type; // 1st num type
        char s; // char type
        std::cin >> type >> s;

        // if add
        if (PUSH == type) {
            int v; // 2nd num
            std::cin >> v;

            // if add to front
            if(s == 'f'){
                de.push_front(v);
            // if add to back
            } else if (s == 'b'){
                de.push_back(v);
            }
//            s == 'f' ? de.push_front(v) : s == 'b' ? de.push_back(v) : void();

        // if remove
        } else if (POP == type) {
            if (de.empty()) {
                results.push_back(-1);
            } else {
                // if remove from front
                if(s == 'f'){
                    // beginning of queue
                    results.push_back(de.front());
                    de.pop_front();
                // if remove from back
                } else if(s == 'b'){
                    // end of queue
                    results.push_back(de.back());
                    de.pop_back();
                }
            }
        }
    }

    for (size_t i = 0; i < results.size(); ++i) {
        std::cout << results.at(i) << " ";
    }
    std::cout << "\n";
}

int main(){
    solve();
    return 0;
}