class MinStack {
public:
    vector<int> stack;
    multiset<int> min_elements;
    
    MinStack() {  
      stack =  {};
    }
    
    void push(int val) {
        min_elements.insert(val);
        stack.push_back(val);  
    }
    
    void pop() {      
        int popped_item = stack[stack.size() - 1];
        auto it = min_elements.find(popped_item);
        if(it != min_elements.end()){
             min_elements.erase(it);
        }
        stack.pop_back();
    }
    
    int top() {
        return stack[stack.size() - 1];
    }
    
    int getMin() {
     /*   int min {0};
        for(auto elem: min_elements){
            min = elem;
            break;
        }*/
        return *(min_elements.begin());
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */