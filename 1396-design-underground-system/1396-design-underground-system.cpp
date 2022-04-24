class UndergroundSystem {
    
    // code is done with the video https://youtu.be/Fb4SKeu8zf4
    // this problem needs revision for 2 times
    
    unordered_map<int, pair<string, int>> m1; // Uid - {StationName, Time}
    unordered_map<string, pair<int, int>> m2; // RouteName - {TotalTime, Count}
public:
     
    
    UndergroundSystem() {}
    
    void checkIn(int id, string stationName, int t) {
        m1[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto checkIn = m1[id];
   m1.erase(id); 
        
        string pathName = checkIn.first + "_" + stationName;
      m2[pathName].first += t - checkIn.second;
      m2[pathName].second += 1;
    }
    
    double getAverageTime(string startStation, string endStation) {
        string routeName = startStation + "_" + endStation;
        auto& route = m2[routeName];
        return (double) route.first / route.second;
    }


};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */