class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.rbegin(),deck.rend());
        vector<int>ans;
        deque<int>dq;
        int n=deck.size();
        if(n<2)
            return deck;
        dq.push_front(deck[0]);
        dq.push_front(deck[1]);
        for(int i=2;i<n;i++){
            int a=dq.back();
            dq.pop_back();
            int b=deck[i];
            dq.push_front(a);
            dq.push_front(b);
        }
        for(auto &i:dq){
            ans.push_back(i);
        }
        return ans;
    }
};
