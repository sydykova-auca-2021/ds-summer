//#include <bits/stdc++.h>
//
//void solve()
//{
//    int q;
//    std::cin >> q;
//
//    std::stack<long long> stack;
//    std::queue<long long> results;
//
//    const int PUSH = 1, POP = 2;
//
//    for (int i = 0; i < q; ++i) {
//        int type;
//        std::cin >> type;
//
//        if (PUSH == type) {
//            int x, v;
//            std::cin >> x >> v;
//            for(int j = 0; j < x; ++j){
//                stack.push(v);
//            }
//
//        } else if (POP == type) {
//            long long sum = 0;
//            long long k;
//            std::cin >> k;
//            while(k > 0 && !stack.empty()){
//                sum += stack.top();
//                stack.pop();
//                --k;
//            }
//            results.push(sum);
//        }
//    }
//    while(!results.empty()) {
//        std::cout << results.front() << " ";
//        results.pop();
//    }
//    std::cout << "\n";
//}
//
//int main(){
//    std::ios::sync_with_stdio(false); // turn off sync with scanf/printf; needs include <iomanip>
//    std::cin.tie(NULL); // turn off sync between cin and cout
//
//    solve();
//    return 0;
//}
