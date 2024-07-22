//#include <bits/stdc++.h>
//
//void solve()
//{
//    int q; // queries
//    std::cin >> q;
//    std::stack<int> stack;
//
//    std::vector<int> results;
//    // or
//    // using res_t = long long;
//    // std::vector<res_t> results;
//
//    const int PUSH = 1, POP = 2;
//
//    for (int i = 0; i < q; ++i) {
//        int type, v;
//        std::cin >> type >> v;
//
//        if (PUSH == type) {
//            stack.push(v);
//        } else if (POP == type) {
//            long long sum = 0;
//            int k = v;
//            while(k > 0 && stack.size() > 0){
//                sum += stack.top();
//                stack.pop();
//                --k;
//            }
//            results.push_back(sum);
////            std::cout << sum << " ";
//        }
//    }
//    for (size_t i = 0; i < results.size(); ++i) {
//        std::cout << results.at(i) << " ";
//    }
//}
//
//int main(){
//    solve();
//    return 0;
//}
