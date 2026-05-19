

class MyHashSet {

private:
    
    struct ListNode
    {
        int data;
        struct ListNode *next;
        ListNode(int val)
            : data(val), next(nullptr) {}
    };
    vector<ListNode*> arr;


public:
    MyHashSet() {
        arr.resize(10000);
        for (auto& ptr : arr)
        {
            ptr = new ListNode(0);
        }
    }
    
    void add(int key) {
        int index = key % arr.size();
        ListNode *curr = arr[index];
        while (curr -> next)
        {
            if (curr -> next -> data == key) return; 
            curr = curr -> next;
        }
        curr -> next = new ListNode(key); 
    }
    
    void remove(int key) {
        int index = key % arr.size();
        ListNode *curr = arr[index];
        while (curr -> next)
        {
            if (curr -> next -> data == key)
            {
                ListNode *dead = curr -> next;
                curr -> next = curr -> next -> next;
                delete dead;
                return;
            }
            curr = curr -> next;
        }
    }
    
    bool contains(int key) {
        int index = key % arr.size();
        ListNode *curr = arr[index];
        while (curr -> next)
        {
            if (curr -> next -> data == key)
            {
                return true;
            } 
            curr = curr -> next;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */