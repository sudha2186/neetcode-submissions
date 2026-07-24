class MyHashMap {
private:
    static const int SIZE = 1009; // Prime number
    vector<vector<pair<int, int>>> table;

public:
    MyHashMap() {
        table.resize(SIZE);
    }

    void put(int key, int value) {
        int index = key % SIZE;

        for (auto &p : table[index]) {
            if (p.first == key) {
                p.second = value;
                return;
            }
        }

        table[index].push_back({key, value});
    }

    int get(int key) {
        int index = key % SIZE;

        for (auto &p : table[index]) {
            if (p.first == key)
                return p.second;
        }

        return -1;
    }

    void remove(int key) {
        int index = key % SIZE;

        for (int i = 0; i < table[index].size(); i++) {
            if (table[index][i].first == key) {
                table[index].erase(table[index].begin() + i);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */