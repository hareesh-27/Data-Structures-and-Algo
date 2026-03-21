class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> one;
        vector<int> two;
        ListNode* temp=head;
        stack<int> st;
        
        while(temp != nullptr)
        {
            one.push_back(temp->val);
            st.push(temp->val);
            temp=temp->next;
        }

        while(st.empty() == false)
        {
            two.push_back(st.top());
            st.pop();
        }
        return one == two;        
    }
};