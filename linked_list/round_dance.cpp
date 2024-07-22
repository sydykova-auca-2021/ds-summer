//#include <bits/stdc++.h>
//
//void solve()
//{
//    // input
//    int n;
//    std::cin >> n;
//
//    std::vector<int> p(n + 1);
//    for (auto& v : p) std::cin >> v;
//
//
//    std::vector<int> a(n);
//    for (auto& v : a) std::cin >> v;
//
//    // preparation
//    int head = 0;
//
//    auto head_it = find(p.begin(), p.end(), head);
//
//    std::list<int> order(head_it, p.end());
//    order.insert(order.end(), p.begin(), head_it);
//    order.push_back(head);
//
//    using node_t = std::list<int>::iterator;
//
//    std::vector<node_t> nodes(n + 1);
//    for (auto node = order.begin(); node != order.end(); ++node)
//    {
//        nodes[*node] = node;
//    }
//
//    // processing + output
//    for (auto& id : a)
//    {
//        auto& node = nodes[id];
//
//        auto prev_node = std::prev(node);
//        auto next_node = std::next(node);
//
//        order.erase(node);
//
//        std::cout << *prev_node << " " << *next_node << "\n";
//    }
//}
//
//int main(){
//    solve();
//    return 0;
//}