class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        for(int i=0;i<boxTypes.size()-1;i++){
            int maxi=i;
            for(int j=i+1;j<boxTypes.size();j++){
                if(boxTypes[j][1]>boxTypes[maxi][1]){
                    maxi=j;

                }
            }
            swap(boxTypes[i],boxTypes[maxi]);
        }
        int total=0;
        for(int i=0;i<boxTypes.size()&&truckSize>0;i++){
            int boxCnt=boxTypes[i][0];
            int units=boxTypes[i][1];
            int boxesToConsider=min(truckSize,boxCnt);
            total+=boxesToConsider*units;
            truckSize-=boxesToConsider;
        }
        return total;
    }
};