//#include <bits/stdc++.h>
//
//template <typename T>
//class DynamicArray {
//private:
//    T* values;
//    size_t capacity;
//    size_t current_size;
//
//    void ensure_capacity() {
//        if (current_size < capacity){
//            return;
//        }
//        size_t new_capacity = capacity == 0 ? 1 : capacity * 2;
//        T *new_values = new T[new_capacity];
//
//        for (size_t i = 0; i < current_size; ++i) {
//            new_values[i] = values[i];
//        }
//
//        delete[] values;
//        values = new_values;
//        capacity = new_capacity;
//    }
//
//public:
//    DynamicArray() : values(nullptr), capacity(0), current_size(0) {}
//    ~DynamicArray() {
//        delete[] values;
//    }
//
//    size_t size() const {
//        return current_size;
//    }
//
//    bool empty() const {
//        return current_size == 0;
//    }
//
//    void push_back(const T &val) {
//        ensure_capacity();
//        values[current_size++] = val;
//    }
//
//    void pop_back() {
//        if (current_size > 0) {
//            --current_size;
//        }
//    }
//
//    // [5, 2, _, 7, 1, 3]
//    //  0, 1, 2, 3, 4
//    //
//    void insert(size_t pos, const T &val) {
//        if (pos > current_size) {
//            throw std::out_of_range("Position out of range");
//        }
//        ensure_capacity();
//        // move to right
//        for (size_t i = current_size; i > pos; --i) {
//            values[i] = values[i - 1];
//        }
//
//        values[pos] = val;
//        ++current_size;
//    }
//
//    void erase(size_t pos) {
//        if (pos >= current_size) {
//            throw std::out_of_range("Position out of range");
//        }
//        for (size_t i = pos; i < current_size - 1; ++i) {
//            values[i] = values[i + 1];
//        }
//        --current_size;
//    }
//
//    size_t find(const T &val) const {
//        for (size_t i = 0; i < current_size; ++i) {
//            if (values[i] == val) {
//                return i;
//            }
//        }
//        return current_size;
//    }
//
//    T &at(size_t pos) {
//        if (pos >= current_size) {
//            throw std::out_of_range("Position out of range");
//        }
//        return values[pos];
//    }
//    const T &at(size_t pos) const {
//        if (pos >= current_size) {
//            throw std::out_of_range("Position out of range");
//        }
//        return values[pos];
//    }
//
//    T &back() {
//        if (current_size == 0) {
//            throw std::out_of_range("Array is empty");
//        }
//        return values[current_size - 1];
//    }
//    const T &back() const {
//        if (current_size == 0) {
//            throw std::out_of_range("Array is empty");
//        }
//        return values[current_size - 1];
//    }
//
//    T &operator[](size_t pos) {
//        return values[pos];
//    }
//    const T &operator[](size_t pos) const {
//        return values[pos];
//    }
//
//
//    class Iterator {
//    private:
//        T *ptr;
//    public:
//        Iterator(T *p) : ptr(p) {}
//
//        const T &operator*() const {
//            return *ptr;
//        }
//
//        Iterator &operator++() {
//            ptr++;
//            return *this;
//        }
//
//        bool operator!=(const Iterator &other) const {
//            return ptr != other.ptr;
//        }
//
//        std::ptrdiff_t operator-(const Iterator& other) const{
//            return ptr - other.ptr;
//        }
//    };
//
//    Iterator begin() {
//        return Iterator(values);
//    }
//    const Iterator begin() const {
//        return Iterator(values);
//    }
//
//    Iterator end() {
//        return Iterator(values);
//    }
//    const Iterator end() const {
//        return Iterator(values);
//    }
//};
//
//template <typename T>
//typename DynamicArray<T>::Iterator find(typename DynamicArray<T>::Iterator begin, typename DynamicArray<T>::Iterator end, const T& value) {
//    for(auto& it = begin; it != end; ++it){
//        if(*it == value){
//            return it;
//        }
//    }
//    return end;
//}
//
//int main() {
//    int q;
//    std::cin >> q;
//
//    std::vector<int> dynamic_array;
//    std::vector<int> results;
//
//    const int PUSH_BACK = 1, POP_BACK = 2, INSERT = 3, ERASE = 4, FIND = 5, AT = 6;
//
//    for (int _ = 0; _ < q; ++_) {
//        int type;
//        std::cin >> type;
//
//        if (PUSH_BACK == type) {
//            int v;
//            std::cin >> v;
//            dynamic_array.push_back(v);
//        }
//
//        if (POP_BACK == type) {
//            if (dynamic_array.empty()) {
//                results.push_back(-1);
//            } else {
//                results.push_back(dynamic_array.back());
//                dynamic_array.pop_back();
//            }
//        }
//
//        if (INSERT == type) {
//            int pos, v;
//            std::cin >> pos >> v;
//            --pos;
//
//            auto it = std::next(dynamic_array.begin(), pos);
//            dynamic_array.insert(it, v);
//        }
//
//        if (ERASE == type) {
//            int pos;
//            std::cin >> pos;
//            --pos;
//
//            if(!dynamic_array.empty()){
//                auto it = std::next(dynamic_array.begin(), pos);
//                results.push_back(*it);
//                dynamic_array.erase(it);
//            } else {
//                results.push_back(-1);
//            }
//
////            int pos;
////            std::cin >> pos;
////            if (pos - 1 >= dynamic_array.size()) {
////                results.push_back(-1);
////            } else {
////                results.push_back(dynamic_array.at(pos - 1));
////                dynamic_array.erase(pos - 1);
////            }
//        }
//
//        if (FIND == type) {
//            int v;
//            std::cin >> v;
//            auto it = std::find(dynamic_array.begin(), dynamic_array.end(), v);
//            if (it != dynamic_array.end()) {
//                results.push_back(it - dynamic_array.begin() + 1);
//            } else {
//                results.push_back(-1);
//            }
//        }
//
//        if (AT == type) {
//            int pos;
//            std::cin >> pos;
//            if (pos - 1 >= dynamic_array.size()) {
//                results.push_back(-1);
//            } else {
//                results.push_back(dynamic_array.at(pos - 1));
//            }
//        }
//    }
//
//    for (size_t i = 0; i < results.size(); ++i) {
//        std::cout << results.at(i) << " ";
//    }
//    std::cout << "\n";
//
//    return 0;
//}
//
