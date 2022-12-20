class Solution {
    public:
        void traverse(vector<vector<int>>& rooms, vector<bool>& visited, int roomNumber)
        {
            visited[roomNumber] = true;
            for(auto room : rooms[roomNumber])
            {
                if(!visited[room])
                    traverse(rooms, visited, room);
            }
        }
        bool canVisitAllRooms(vector<vector<int>>& rooms)
        {
            vector<bool> visited(rooms.size(), false);
            visited[0] = true;
            traverse(rooms, visited, 0);
            if(count(visited.begin(), visited.end(), false))
                return false;
            return true;
        }
};
