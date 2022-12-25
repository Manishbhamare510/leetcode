class BrowserHistory {
public:
    stack<string>backs;
    stack<string>forw;
    BrowserHistory(string homepage) {
        backs.push(homepage);
    }
    void visit(string url) {
        while(!forw.empty()){
            forw.pop();
        }
        backs.push(url);
    }
    string back(int steps) {
        while(steps>0 and backs.size()>1){
            forw.push(backs.top());
            backs.pop();
            steps--;
        }
        return backs.top();
    }
    string forward(int steps) {
        while(steps>0 and !forw.empty()){
            backs.push(forw.top());
            forw.pop();
            steps--;
        }
        return backs.top();
    }
};
