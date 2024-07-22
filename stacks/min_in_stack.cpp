//#include <bits/stdc++.h>
//
//// get min from left side of stack
//using max_stack = std::stack<std::pair<int, int>>;
//int get_min(max_stack& stack, int neutral){
//    if(stack.empty()){
//        return neutral;
//    } else {
//        return stack.top().second;
//    }
//}
//
//void solve() {
//    int q; // num of queries
//    std::cin >> q;
//    max_stack stack;
//    std::vector<int> results;
//    const int PUSH = 1, POP = 2;
//
//    int pos_inf = 1e9;
//
//    for (int i = 0; i < q; ++i) {
//        int type;
//        std::cin >> type;
//
//        if (PUSH == type) {
//            int v;
//            std::cin >> v;
//
//            // get min values (curr v compared to prev min)
//            int min_v = std::min(v, get_min(stack, pos_inf));
//            stack.emplace(v, min_v); // push new elem on top of stack
//        } else if (POP == type) {
//            if (stack.empty()) {
//            } else {
//                stack.pop();
//            }
//            // std::cout << get_min(stack, -1) << " ";
//        }
//        // print each min values
//        results.push_back(get_min(stack, -1));
//    }
//
//    for (size_t i = 0; i < results.size(); ++i) {
//        std::cout << results.at(i) << " ";
//    }
//}
//
//int main(){
//    solve();
//    return 0;
//}