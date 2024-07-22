//#include <iostream>
//#include "dynamic_array.cpp"
//
//void solve() {
//    int n; // 5
//    std::cin >> n;
//
//    DynamicArray<std::string> all_str;
//    DynamicArray<std::string> good_str;
//
//    for(size_t i = 0; i < n; ++i){
//        std::string str;
//        std::cin >> str;
//        all_str.push_back(str);
//    }
//
//    for(size_t i = 0; i < all_str.size(); ++i){
//        if(all_str[i].size() % 2 == 0){
//            good_str.push_back(all_str[i]);
//        }
//    }
//
//    std::cout << good_str.size() << std::endl;
//    for(size_t i = 0; i < good_str.size(); ++i){
//        std::cout << good_str[i] << " ";
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
