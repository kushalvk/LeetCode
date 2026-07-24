class EventManager {
public:
    priority_queue<pair<int, int>> p;
    map<int, int> mpp;

    EventManager(vector<vector<int>>& events) {
        for (int i = 0; i < events.size(); i++) {
            int id = events[i][0];
            int pr = events[i][1];

            mpp[id] = pr;
            p.push({pr, -id});
        }
    }

    void updatePriority(int eventId, int newPriority) {
        mpp[eventId] = newPriority;
        p.push({newPriority, -eventId});
    }

    int pollHighest() {
        while (!p.empty()) {
            pair<int, int> temp = p.top();
            int id = -temp.second;
            int pr = temp.first;
            p.pop();

            if(mpp[id] == pr) {
                mpp.erase(id);
                return id;
            }
        }
        return -1;
    }
};

/**
 * Your EventManager object will be instantiated and called as such:
 * EventManager* obj = new EventManager(events);
 * obj->updatePriority(eventId,newPriority);
 * int param_2 = obj->pollHighest();
 */