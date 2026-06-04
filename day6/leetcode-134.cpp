class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_surplus = 0;
        int current_tank = 0;
        int start_station = 0;

        for (int i = 0; i < gas.size(); i++) {
            int net_gas = gas[i] - cost[i];
          
            current_tank += net_gas;
            total_surplus += net_gas;
            if (current_tank < 0) {
                start_station = i + 1;
                current_tank = 0;
            }
        }
        if(total_surplus>=0){
            return  start_station ;
        }else{
            return -1;
        }
    }
};
/*
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int n = 0;
        int m = 0;
        for(int i = 0; i < gas.size(); i++){
            n += gas[i];
        }
        for(int i = 0; i < cost.size(); i++){
            m += cost[i];
        }
        if(n < m){
            return -1;
        }

        int tank = 0;
        int index = 0;

        for(int i = 0; i < gas.size(); i++){

            tank += gas[i] - cost[i];

            if(tank < 0){
                tank = 0;
                index = i + 1;
            }
        }

        return index;
    }
};*/