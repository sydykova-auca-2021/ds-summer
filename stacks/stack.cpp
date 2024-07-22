//#include <bits/stdc++.h>
//
//void solve()
//{
//    int q; // num of queries
//    std::cin >> q;
//    std::stack<int> st;
//    std::vector<int> results;
//    const int PUSH = 1, POP = 2;
//
//    for (int i = 0; i < q; ++i) {
//        int type; // 1st num type
//        std::cin >> type;
//
//        // add to top of stack
//        if (PUSH == type) {
//            int v; // 2nd num
//            std::cin >> v;
//            st.push(v);
//        // remove from top of stack
//        } else if (POP == type) {
//            if (st.empty()) {
//                results.push_back(-1);
//            } else {
//                results.push_back(st.top());
//                st.pop();
//            }
//        }
//    }
//
//    for (size_t i = 0; i < results.size(); ++i) {
//        std::cout << results.at(i) << " ";
//    }
//    std::cout << "\n";
//}
//
//int main(){
//    solve();
//    return 0;
//}