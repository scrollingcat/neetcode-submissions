class MyHashMap {

private:
    struct ListNode{
        int key;
        int value;
        ListNode *next;
        ListNode(int k, int v)
            : key(k), value(v), next(nullptr)
            {}
    };

    vector<ListNode*> mapHash;


public:
    MyHashMap()
    {
        mapHash.resize(10000);
        for(auto& x : mapHash)
        {
            x = new ListNode(0, 0);
        }
    }
    
    void put(int key, int value) {
        int index = key % 10000;
        ListNode *curr = mapHash[index];
        while (curr -> next)
        {
            if (curr -> next -> key == key)
            {
                curr -> next -> value = value;
                return;
            } 
            curr = curr -> next;
        }
        curr -> next = new ListNode(key, value);
    }
    
    int get(int key) {
        int index = key % 10000;
        ListNode *curr = mapHash[index];
        while (curr -> next)
        {
            if (curr -> next -> key == key)
            {
                return curr -> next -> value;
            }
            curr = curr -> next;
        }
        return -1;
    }
    
    void remove(int key) {
        int index = key % 10000;
        ListNode *curr = mapHash[index];
        while (curr -> next)
        {
            if (curr -> next -> key == key)
            {
                ListNode *dead = curr -> next;
                curr -> next = curr -> next -> next;
                delete dead;
                return;
            } 
            curr = curr -> next;
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