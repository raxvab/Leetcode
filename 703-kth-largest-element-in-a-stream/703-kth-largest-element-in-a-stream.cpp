class KthLargest {
public:
priority_queue<int, vector<int>, greater<int>> p;
public:
    int size;
    KthLargest(int k, vector<int>& nums) {
        p = {}; 
        size= k;
        for(int num: nums) p.push(num);
        while(p.size() > size) p.pop();
    }
    
    int add(int val) {
        p.push(val);
        if(p.size() > size) p.pop();      
        return p.top();            
    }
};
/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */